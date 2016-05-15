#include "contact.h"
#include "ui_contact.h"

Contact::Contact(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Contact)
{
    ui->setupUi(this);

    /*The following lines are used to fill in the labels. They are editted here because newlines are impossible in the UI editor.
    Please use HTML for formatting, as it cannot be mixed with C++ formating. <br> is the equivilant of a newline, for example.*/

    ui->label->setText("<font color='red'>CONTACT US</font>"); //Bold, underline

    ui->label_2->setText("<font color='red'>Customer Support</font>");

    ui->label_4->setText("<font color='red'>+1-(687)-748-5244</font>");

    ui->label_5->setText("<font color='red'>support@iCSinc.com</font>");
}

Contact::~Contact()
{
    delete ui;
}
