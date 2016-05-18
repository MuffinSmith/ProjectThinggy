#include "buy.h"
#include "ui_buy.h"

Buy::Buy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Buy)
{
    ui->setupUi(this);
    setWindowTitle("Buy Now!");
}

Buy::~Buy()
{
    delete ui;
}
