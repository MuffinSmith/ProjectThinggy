#include "mainwindow.h"
#include <QApplication>
#include "customer.h"
#include "queue.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    ///
    /// \brief List of customers created from customers.txt initialized in
    /// main.cpp
    ///

    CustomerList CList;
    CList.CreateListFromFile();

    CList.PrintList();

    return a.exec();
}
