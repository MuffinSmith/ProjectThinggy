#include "loginfail.h"
#include "ui_loginfail.h"

LoginFail::LoginFail(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginFail)
{
    ui->setupUi(this);

    setWindowTitle("Failed Login Attempt");
}

LoginFail::~LoginFail()
{
    delete ui;
}

void LoginFail::on_pushButton_clicked()
{
    close();
}
