#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap pix("C:/Users/cody5/OneDrive/Pictures/Saved Pictures/kaneki.jpg");

    ui->label_3->setPixmap(pix);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    /// "Help" window opens here
    Help helpWin;
    helpWin.setModal(true);
    helpWin.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    /// "About Us" window opens here
    About aboutWin;
    aboutWin.setModal(true);
    aboutWin.exec();
}

void MainWindow::on_pushButton_3_clicked()
{
    /// "Contact Us" window opens here
    Contact contactWin;
    contactWin.setModal(true);
    contactWin.exec();
}

void MainWindow::on_pushButton_4_clicked()
{
    /// "Our Policy" window opens here
    Policy policyWin;
    policyWin.setModal(true);
    policyWin.exec();
}

void MainWindow::on_pushButton_5_clicked()
{
    /// "Testimonials" window opens here
    Testimonials testimWin;
    testimWin.setModal(true);
    testimWin.exec();
}

void MainWindow::on_pushButton_7_clicked()
{
    /// "Buy Now!" window opens here
    Buy buyWin;
    buyWin.setModal(true);
    buyWin.exec();
}

void MainWindow::on_pushButton_6_clicked()
{
    /// "Administrator Log In" window opens here
    AdminLogin loginWin;
    loginWin.setModal(true);
    loginWin.exec();
}
