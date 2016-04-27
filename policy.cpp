#include "policy.h"
#include "ui_policy.h"

Policy::Policy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Policy)
{
    ui->setupUi(this);
}

Policy::~Policy()
{
    delete ui;
}
