#include "help.h"
#include "ui_help.h"

Help::Help(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Help)
{
    ui->setupUi(this);

    setWindowTitle("Help");

    /*The following lines are used to fill in the labels. They are editted here because newlines are impossible in the UI editor.
    Please use HTML for formatting, as it cannot be mixed with C++ formating. <br> is the equivilant of a newline, for example.*/

    ui->label->setText("<font color='Yellow'>How to use our pamphlet</font>"); //Bold, underlined text

    ui->label_2->setText("<font color='Yellow'>The top row of buttons on the home screen present all of your options to you.</font>");

}

Help::~Help()
{
    delete ui;
}

void Help::on_pushButton_clicked()
{
    close();
}
