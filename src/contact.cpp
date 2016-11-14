#include "contact.h"

bool Contact::isValidToAdd() const
{
    /*
    Adding a new contact requires:
    -first name
    -last name
    -phone number
    */

    /*
    bool hasNames = !(firstName.empty() || lastName.empty());

    if(hasNames && !phoneNumber.empty()&& isValidPhoneNumber() && isValidEmail())
    {
        return true;
    }
    else
    {
        return false;
    }
    */


    if(!isEmpty() && isValidPhoneNumber() && isValidEmail())
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Contact::isEmpty() const
{
    if(firstName.empty() && 
        lastName.empty() &&
        phoneNumber.empty() && 
        address.empty() && 
        email.empty())
    {

        return true;
    }
    else
    {
        return false;
    }
}
    
bool Contact::isValidPhoneNumber() const {
    std::string pno = phoneNumber;
    int i;
    for(i=0;i<10;i++){
        if(!isdigit(pno[i]))
            return false;
    }

    if(phoneNumber.length()==10){

        return true;

    }

    else
        return false;
}
bool Contact::isValidEmail() const{

    if(Contact::isContainPattern(email,"@") && Contact ::isContainPattern(email,".")){
        return true;
    }
    else
        return false;

}
bool Contact::isContainPattern(std::string data, std::string pattern) const {
    int data_length = data.length();
    int i;
    for(i=0;i<data_length;i++){
        if(data[i]==pattern[0]){
            return true;
        }
        else
            continue;
    }
    return false;
}
