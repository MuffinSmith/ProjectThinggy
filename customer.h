
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iomanip>
#include <iostream>
#include <QString>

using namespace std;

class CustomerList{
public:
    ///
    /// CONSTRUCTORS / DESTRUCTORS
    ///

    /// Default constructor
    CustomerList() {compName=streetAd=cityAd=rating=keyCust=" ";}

    /// Non-default cconstructor
    CustomerList(QString nameIn, QString streetIn, QString cityIn,
                 QString ratingIn, QString keyIn)
    {
        compName = nameIn;
        streetAd = streetIn;
        cityAd   = cityIn;
        rating   = ratingIn;
        keyCust  = keyIn;
    }

    ~CustomerList() {}

    ///
    /// MUTATORS
    ///

    void changeName(QString nameIn) {compName=nameIn;}
    void changeStreet(QString streetIn) {streetAd=streetIn;}
    void changeCity(QString cityIn) {cityAd=cityIn;}
    void changeRating(QString ratingIn) {rating=ratingIn;}
    void changeKeyCust(QString keyIn) {keyCust=keyIn;}
    void saveToFile(void) {
        ///print list to file customers.txt
    }

    ///
    /// ACCESSORS
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
    /// OPERATOR OVERLOADS
    ///

//    friend ostream& operator <<(ostream& out, CustomerList* ptr)
//    {
//        out << left;
//        out << setw(9) << "Name :" << ptr->compName << endl;
//        out << setw(9) << "Address:" << ptr->getStreetAd() << endl;
//        out << setw(9) << ptr->getCityAd() << endl;
//        out << setw(9) << "Rating:" << ptr->getRating() << endl;
//        out << setw(9) << "Priority:" << ptr->getKeyCust();
//        out << endl << endl;
//        out << right;

//        return out;
//    }

private:
    ///
    /// Data Members
    ///

    QString compName;       /// Name of Company
    QString streetAd;       /// Companys street address
    QString cityAd;         /// Contains the city address Ccity and Zip)
    QString rating;         /// Interest rating of the Company
    QString keyCust;        /// Are they are key customer
};

#endif // CUSTOMER_H
