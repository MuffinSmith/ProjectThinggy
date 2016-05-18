#include "adminwindow.h"
#include "ui_adminwindow.h"
#include <QtWidgets>

AdminWindow::AdminWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminWindow)
{
//    QStringList header;
    CList.CreateListFromFile();

//    header << "Name" << "Street Address" << "City Address" << "Rating" <<
//              "Priority";
//    ui->tableWidget->setHorizontalHeaderLabels(header);

    ui->setupUi(this);
    setWindowTitle("Admin Control Center");
}

AdminWindow::~AdminWindow()
{
    delete ui;
}


void AdminWindow::on_showAll_Button_clicked()
{
    QStringList header;
    Customer* ptr=NULL;     /// \brief points to the current obj being output
    int row=0;              /// \brief current row
    int col=0;              /// \brief current col

    ptr=CList.list.returnObj();

    ui->tableWidget->clear();
    ui->tableWidget->setRowCount(0);

    header << "Name" << "Street Address" << "City Address" << "Rating" <<
              "Priority";
    ui->tableWidget->setHorizontalHeaderLabels(header);

    while(ptr!=NULL)
    {
        ui->tableWidget->setRowCount(row+1);
        ui->tableWidget->setColumnCount(col);

        col=0;
        QTableWidgetItem* newName = new QTableWidgetItem
                (ptr->getName());
        ui->tableWidget->setItem(row-1, col, newName);

        col=1;
        QTableWidgetItem* newStrtAd = new QTableWidgetItem
                (ptr->getStreetAd());
        ui->tableWidget->setItem(row-1, col, newStrtAd);

        col=2;
        QTableWidgetItem* newCtyAd = new QTableWidgetItem
                (ptr->getCityAd());
        ui->tableWidget->setItem(row-1, col, newCtyAd);

        col=3;
        QTableWidgetItem* newRate = new QTableWidgetItem
                (ptr->getRating());
        ui->tableWidget->setItem(row-1, col, newRate);

        col=4;
        QTableWidgetItem* newKey = new QTableWidgetItem
                (ptr->getKeyCust());
        ui->tableWidget->setItem(row-1, col, newKey);

        CList.list.getNext();
        ptr=CList.list.returnObj();
        row++;
        col++;
    }
}

void AdminWindow::on_KeyButton_clicked()
{
    QStringList header;
    Customer* ptr=NULL;     /// \brief points to the current obj being output
    int row=0;              /// \brief current row
    int col=0;              /// \brief current col

    ptr=CList.list.returnObj();

    ui->tableWidget->clear();

    header << "Name" << "Street Address" << "City Address" << "Rating" <<
              "Priority";
    ui->tableWidget->setHorizontalHeaderLabels(header);

    while(ptr!=NULL)
    {
        if(ptr->getKeyCust()=="key")
        {
            ui->tableWidget->setRowCount(row+1);
            ui->tableWidget->setColumnCount(col);

            col=0;
            QTableWidgetItem* newName = new QTableWidgetItem
                    (ptr->getName());
            ui->tableWidget->setItem(row-1, col, newName);

            col=1;
            QTableWidgetItem* newStrtAd = new QTableWidgetItem
                    (ptr->getStreetAd());
            ui->tableWidget->setItem(row-1, col, newStrtAd);

            col=2;
            QTableWidgetItem* newCtyAd = new QTableWidgetItem
                    (ptr->getCityAd());
            ui->tableWidget->setItem(row-1, col, newCtyAd);

            col=3;
            QTableWidgetItem* newRate = new QTableWidgetItem
                    (ptr->getRating());
            ui->tableWidget->setItem(row-1, col, newRate);

            col=4;
            QTableWidgetItem* newKey = new QTableWidgetItem
                    (ptr->getKeyCust());
            ui->tableWidget->setItem(row-1, col, newKey);

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
    QStringList header;
    Customer* ptr=NULL;     /// \brief points to the current obj being output
    int row=0;              /// \brief current row
    int col=0;              /// \brief current col

    ptr=CList.list.returnObj();

    ui->tableWidget->clear();

    header << "Name" << "Street Address" << "City Address" << "Rating" <<
              "Priority";
    ui->tableWidget->setHorizontalHeaderLabels(header);

    while(ptr!=NULL)
    {
        if(ptr->getKeyCust()!="key")
        {
            ui->tableWidget->setRowCount(row+1);
            ui->tableWidget->setColumnCount(col);

            col=0;
            QTableWidgetItem* newName = new QTableWidgetItem
                    (ptr->getName());
            ui->tableWidget->setItem(row-1, col, newName);

            col=1;
            QTableWidgetItem* newStrtAd = new QTableWidgetItem
                    (ptr->getStreetAd());
            ui->tableWidget->setItem(row-1, col, newStrtAd);

            col=2;
            QTableWidgetItem* newCtyAd = new QTableWidgetItem
                    (ptr->getCityAd());
            ui->tableWidget->setItem(row-1, col, newCtyAd);

            col=3;
            QTableWidgetItem* newRate = new QTableWidgetItem
                    (ptr->getRating());
            ui->tableWidget->setItem(row-1, col, newRate);

            col=4;
            QTableWidgetItem* newKey = new QTableWidgetItem
                    (ptr->getKeyCust());
            ui->tableWidget->setItem(row-1, col, newKey);

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

void AdminWindow::on_AddCompButton_clicked()
{
    ///
    /// \brief AddCompany window opens here
    ///

    CustomerList* ptr = &CList;

    AddCompany addWin(ptr);
    addWin.setModal(true);
    addWin.exec();
}
