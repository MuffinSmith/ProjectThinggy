#include "mainwindow.h"
#include <QApplication>
#include "customer.h"

int main(int argc, char *argv[])
{

 //   CustomerList *c= new CustomerList("Cody Inc.", "1 calle bella", "RSM, 92688",
//                                      "Interested", "Key");

//    cout << c->getName();
//    cout << endl << endl << endl << endl;
//    cout << c->getCityAd();

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
