
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <QTextStream>
#include <Qfile>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <QString>
#include "queue.h"

using namespace std;

///
/// \brief The Customer class holds all the data for a customer  including:
/// company name, address, level of interest, and whether or not they are a
/// key customer.
///
class Customer{
public:
    ///
    /// \brief CONSTRUCTORS / DESTRUCTORS
    ///

    /// \brief Default constructor
    Customer() {compName=streetAd=cityAd=rating=keyCust=" ";}

    /// \brief Non-default cconstructor
    Customer(QString nameIn, QString streetIn, QString cityIn,
                 QString ratingIn, QString keyIn)
    {
        compName = nameIn;
        streetAd = streetIn;
        cityAd   = cityIn;
        rating   = ratingIn;
        keyCust  = keyIn;
    }

    ~Customer() {}

    ///
    /// \brief MUTATORS
    ///

    void changeName(QString nameIn) {compName=nameIn;}
    void changeStreet(QString streetIn) {streetAd=streetIn;}
    void changeCity(QString cityIn) {cityAd=cityIn;}
    void changeRating(QString ratingIn) {rating=ratingIn;}
    void changeKeyCust(QString keyIn) {keyCust=keyIn;}
    void clear(void) {compName=streetAd=cityAd=rating=keyCust=" ";}
    void saveToFile(void) {
        ///print list to file customers.txt
    }

    ///
    /// \brief ACCESSORS
    ///

    QString getName(void) const {return compName;}
    QString getStreetAd(void) const {return streetAd;}
    QString getCityAd(void) const {return cityAd;}
    QString getRating(void) const {return rating;}
    QString getKeyCust(void) const {return keyCust;}
    void printCustomer(void) const
    {
        cout << left;
        cout << setw(9) << "Name :" << qPrintable(compName) << endl;
        cout << setw(9) << "Address:" << qPrintable(streetAd) << endl;
        cout << setw(9) << qPrintable(cityAd) << endl;
        cout << setw(9) << "Rating:" << qPrintable(rating) << endl;
        cout << setw(9) << "Priority:" << qPrintable(keyCust);
        cout << endl << endl;
        cout << right;
    }

    ///
    /// \brief OPERATOR OVERLOADS
    ///

    friend ostream& operator <<(ostream& out, Customer obj)
    {
        out << left;
        out << setw(10) << "Name :" << qPrintable(obj.getName()) << endl;
        out << setw(10) << "Address:" << qPrintable(obj.getStreetAd()) << endl;
        out << "          " << qPrintable(obj.getCityAd()) << endl;
        out << setw(10) << "Rating:" << qPrintable(obj.getRating()) << endl;
        out << setw(10) << "Priority:" << qPrintable(obj.getKeyCust());
        out << endl << endl;
        out << right;

        return out;
    }

    Customer& operator= (const Customer node)
    {
        compName = node.compName;
        streetAd = node.streetAd;
        cityAd   = node.cityAd;
        rating   = node.rating;
        keyCust  = node.keyCust;

        return *this;
    }
    ///
    /// \brief Data Members
    ///

    QString compName;       /// Name of Company
    QString streetAd;       /// Companys street address
    QString cityAd;         /// Contains the city address Ccity and Zip)
    QString rating;         /// Interest rating of the Company
    QString keyCust;        /// Are they are key customer
};


///
/// \brief The CustomerList class is a wrapper class composed of a queue
/// template decalred for the Customer class.
///

class CustomerList{
public:
    ///
    /// \brief CreateListFromFile will create a list of customers from which
    /// ever file stream is specified
    ///
    void CreateListFromFile(void)
    {
        Customer obj;

        QFile inputFile(":/TextFiles/customers.txt");
        if (inputFile.open(QIODevice::ReadOnly))
        {
            QTextStream in(&inputFile);

            while (!in.atEnd())
            {
                QString line = in.readLine();
                obj.compName = line;

                line         = in.readLine();
                obj.streetAd = line;

                line         = in.readLine();
                obj.cityAd   = line;

                line         = in.readLine();
                obj.rating   = line;

                line         = in.readLine();
                obj.keyCust  = line;

                list.EnQueue(obj);

                obj.clear();
            }
            inputFile.close();
        }
    }

    void PrintList()
    {
        list.PrintQue();
    }

    ///
    /// \brief list of customers formed from customers.txt
    ///
    Queue<Customer> list;
};
#endif // CUSTOMER_H
