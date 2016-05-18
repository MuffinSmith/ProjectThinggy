#include "policy.h"
#include "ui_policy.h"

Policy::Policy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Policy)
{
    ui->setupUi(this);

    setWindowTitle("Our Policy");

    ui->label_2->setText("If you paid money for this software; like, for real, actual money, then you got totes dunked on.<br>"
                         "This software was never designed to even install on your computer - There isn't even anything <br>"
                         "to install to begin with. If you have a problem with our policy, please DON'T call the fake number<br>"
                         "that is posted in our contact page. Because it's fake.");
}

Policy::~Policy()
{
    delete ui;
}

void Policy::on_pushButton_clicked()
{
    close();
}
