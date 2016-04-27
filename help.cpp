#include "help.h"
#include "ui_help.h"

Help::Help(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Help)
{
    ui->setupUi(this);

    QPixmap pix("C:/Users/cody5/OneDrive/Pictures/Saved Pictures/kaneki2.jpg");

    ui->label_3->setPixmap(pix);
}

Help::~Help()
{
    delete ui;
}
