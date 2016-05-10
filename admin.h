#ifndef ADMIN_H
#define ADMIN_H

#include <QString>

class Admin
{
public:
    Admin();


    ///
    /// ACCESSORS
    ///

    QString GetUser() {return qPrintable(userName);}

    QString GetPassWord() {return qPrintable(passWord);}

private:
   QString userName;
   QString passWord;
};

#endif // ADMIN_H
