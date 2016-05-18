#include "adminlogin.h"
#include "ui_adminlogin.h"
#include "admin.h"
#include "adminwindow.h"

#include <iostream>
#include <iomanip>

AdminLogin::AdminLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminLogin)
{
    status = false;
    ui->setupUi(this);

    setWindowTitle("Administrator Login");

    ui->label->setText("<font color='yellow'>Administrator Login</font>");
}

AdminLogin::~AdminLogin()
{
    delete ui;
}



void AdminLogin::on_buttonBox_clicked(QAbstractButton *button)
{
    Admin admin;
    QString userIn;
    QString passIn;

    userIn=ui->usernameSlot->text();
    passIn=ui->passwordSlot->text();

    std::cerr << qPrintable(userIn) << "   " << qPrintable(admin.GetUser())
              << "\n";
    std::cerr << qPrintable(passIn) << "   " << qPrintable(admin.GetPassWord())
              << "\n\n";

    if((userIn==admin.GetUser()) && (passIn==admin.GetPassWord()))
    {
        // open admin window here
        hide();
        std::cerr << "Hellllllllllllllllllooooo\n";
        status=true;
        show();
    }
    else
    {
        // alert user that username/password were incorrect
        std::cerr << "invalid username/password\n";
        status=false;
    }
}
