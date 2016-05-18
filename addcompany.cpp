#include "addcompany.h"
#include "ui_addcompany.h"

AddCompany::AddCompany(CustomerList *&listPtr, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddCompany)
{
    listToAdd = listPtr;

    ui->setupUi(this);
    setWindowTitle("Add a Company");
}

AddCompany::~AddCompany()
{
    delete ui;
}

void AddCompany::on_buttonBox_accepted()
{
    QString newName;
    QString newStrt;
    QString newCity;
    QString newRating;
    QString newKey;

    newName = ui->lineEdit->text();
    newStrt = ui->lineEdit_2->text();
    newCity = ui->lineEdit_3->text();
    newRating = ui->lineEdit_4->text();
    newKey = ui->lineEdit_5->text();

    Customer obj(newName, newStrt, newCity, newRating, newKey);

    listToAdd->list.EnQueue(obj);
}
