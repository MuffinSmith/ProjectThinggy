#include "testimonials.h"
#include "ui_testimonials.h"

Testimonials::Testimonials(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Testimonials)
{
    ui->setupUi(this);

    setWindowTitle("Customer Testimonials");

    ui->label_2->setText("I've used this program for a good five minutes, and after spending such a<br>"
                         "long and arduous time reviewing the software at hand, I have only one<br>"
                         "thing to say about the safety features this program provides.<br>"
                         "<br>"
                         "It was a good effort.<br>"
                         "<BR>"
                         "     -A totally trustworthy critic");

    ui->label_3->setText("It works on every OS.<br>"
                         "<br>"
                         "The pamphlet does, anyway.<br>"
                         "<br>"
                         "     -A not so trustworthy user");
}

Testimonials::~Testimonials()
{
    delete ui;
}

void Testimonials::on_pushButton_clicked()
{
    close();
}
