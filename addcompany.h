#ifndef ADDCOMPANY_H
#define ADDCOMPANY_H

#include "customer.h"

#include <QDialog>

namespace Ui {
class AddCompany;
}

class AddCompany : public QDialog
{
    Q_OBJECT

public:
    explicit AddCompany(CustomerList *&listPtr, QWidget *parent = 0);
    ~AddCompany();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::AddCompany *ui;
    CustomerList *listToAdd;
};

#endif // ADDCOMPANY_H
