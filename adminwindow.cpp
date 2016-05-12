#include "adminwindow.h"
#include "ui_adminwindow.h"
#include <QtWidgets>

AdminWindow::AdminWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminWindow)
{
    QStringList header;

    header << "Name" << "Street Address" << "City Address" << "Rating" <<
              "Priority";
    CList.CreateListFromFile();

    ui->setupUi(this);
    ui->tableWidget->setHorizontalHeaderLabels(header);
}

AdminWindow::~AdminWindow()
{
    delete ui;
}


void AdminWindow::on_showAll_Button_clicked()
{
    Customer* ptr=NULL;     /// \brief points to the current obj being output
    int row=0;              /// \brief current row
    int col=0;              /// \brief current col

    ptr=CList.list.returnObj();

    ui->tableWidget->reset();

    while(ptr!=NULL)
    {
        ui->tableWidget->setRowCount(row+1);
        ui->tableWidget->setColumnCount(col);

        col=0;
        QTableWidgetItem* newName = new QTableWidgetItem
                (ptr->getName());
        ui->tableWidget->setItem(row, col, newName);

        col=1;
        QTableWidgetItem* newStrtAd = new QTableWidgetItem
                (ptr->getStreetAd());
        ui->tableWidget->setItem(row, col, newStrtAd);

        col=2;
        QTableWidgetItem* newCtyAd = new QTableWidgetItem
                (ptr->getCityAd());
        ui->tableWidget->setItem(row, col, newCtyAd);

        col=3;
        QTableWidgetItem* newRate = new QTableWidgetItem
                (ptr->getRating());
        ui->tableWidget->setItem(row, col, newRate);

        col=4;
        QTableWidgetItem* newKey = new QTableWidgetItem
                (ptr->getKeyCust());
        ui->tableWidget->setItem(row, col, newKey);

        CList.list.getNext();
        ptr=CList.list.returnObj();
        row++;
        col++;
    }
}

void AdminWindow::on_KeyButton_clicked()
{
    Customer* ptr=NULL;     /// \brief points to the current obj being output
    int row=0;              /// \brief current row
    int col=0;              /// \brief current col

    ptr=CList.list.returnObj();

    while(ptr!=NULL)
    {
        if(ptr->getKeyCust()=="key")
        {
            ui->tableWidget->setRowCount(row+1);
            ui->tableWidget->setColumnCount(col);

            col=0;
            QTableWidgetItem* newName = new QTableWidgetItem
                    (ptr->getName());
            ui->tableWidget->setItem(row, col, newName);

            col=1;
            QTableWidgetItem* newStrtAd = new QTableWidgetItem
                    (ptr->getStreetAd());
            ui->tableWidget->setItem(row, col, newStrtAd);

            col=2;
            QTableWidgetItem* newCtyAd = new QTableWidgetItem
                    (ptr->getCityAd());
            ui->tableWidget->setItem(row, col, newCtyAd);

            col=3;
            QTableWidgetItem* newRate = new QTableWidgetItem
                    (ptr->getRating());
            ui->tableWidget->setItem(row, col, newRate);

            col=4;
            QTableWidgetItem* newKey = new QTableWidgetItem
                    (ptr->getKeyCust());
            ui->tableWidget->setItem(row, col, newKey);

            CList.list.getNext();
            ptr=CList.list.returnObj();
            row++;
            col++;
        }else
        {
            CList.list.getNext();
            ptr=CList.list.returnObj();
        }
    }
}

void AdminWindow::on_NonKeyButton_clicked()
{
    Customer* ptr=NULL;     /// \brief points to the current obj being output
    int row=0;              /// \brief current row
    int col=0;              /// \brief current col

    ptr=CList.list.returnObj();

    while(ptr!=NULL)
    {
        if(ptr->getKeyCust()!="key")
        {
            ui->tableWidget->setRowCount(row+1);
            ui->tableWidget->setColumnCount(col);

            col=0;
            QTableWidgetItem* newName = new QTableWidgetItem
                    (ptr->getName());
            ui->tableWidget->setItem(row, col, newName);

            col=1;
            QTableWidgetItem* newStrtAd = new QTableWidgetItem
                    (ptr->getStreetAd());
            ui->tableWidget->setItem(row, col, newStrtAd);

            col=2;
            QTableWidgetItem* newCtyAd = new QTableWidgetItem
                    (ptr->getCityAd());
            ui->tableWidget->setItem(row, col, newCtyAd);

            col=3;
            QTableWidgetItem* newRate = new QTableWidgetItem
                    (ptr->getRating());
            ui->tableWidget->setItem(row, col, newRate);

            col=4;
            QTableWidgetItem* newKey = new QTableWidgetItem
                    (ptr->getKeyCust());
            ui->tableWidget->setItem(row, col, newKey);

            CList.list.getNext();
            ptr=CList.list.returnObj();
            row++;
            col++;
        }else
        {
            CList.list.getNext();
            ptr=CList.list.returnObj();
        }
    }
}
