#include "adminwindow.h"
#include "ui_adminwindow.h"
#include <QtWidgets>
#include "customer.h"

AdminWindow::AdminWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminWindow)
{
    CustomerList CList;
    CustomerList* ptr=&CList;
    int row=0;
    int col=0;

    CList.CreateListFromFile();
    ui->setupUi(this);

    while(ptr!=NULL)
    {
        ui->tableWidget->setRowCount(row+1);
        ui->tableWidget->setColumnCount(col);

        col=0;
//        QTableWidgetItem* newName = new QTableWidgetItem
//                (ptr->CustomerList.);
        ui->tableWidget->setItem(row, col, newName);

    }

}

AdminWindow::~AdminWindow()
{
    delete ui;
}

void AdminWindow::on_showAll_Button_clicked()
{
    QTableWidget tbl(25,4);
    QStringList header;

    header << "Name" << "Address" << "Rating" << "Priority";
    tbl.setHorizontalHeaderLabels(header);

    for(int i=0;i<25;i++)
    {
        for(int j=0;j<4;i++)
        {

        }
    }
}
