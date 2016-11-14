#ifndef QTFINDCONTACTDIALOG_H
#define QTFINDCONTACTDIALOG_H

#include <QDialog>
#include <QWidget>
#include "qtcontactform.h"
#include "contact.h"

class QtFindContactDialog : public QDialog
{
    Q_OBJECT

public:
    QtFindContactDialog(QWidget *parent=0, Qt::WindowFlags f=0);
};

#endif // QTFINDCONTACTDIALOG_H
