#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "adminwindow.h"
#include "loginfail.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowTitle("Anteku Security");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ///
    /// \brief "Help" window opens here
    ///
    hide();
    Help helpWin;
    helpWin.setModal(true);
    helpWin.exec();
    show();

}

void MainWindow::on_pushButton_2_clicked()
{
    ///
    /// \brief "About Us" window opens here
    ///
    hide();
    About aboutWin;
    aboutWin.setModal(true);
    aboutWin.exec();
    show();
}

void MainWindow::on_pushButton_3_clicked()
{
    ///
    /// \brief "Contact Us" window opens here
    ///
    hide();
    Contact contactWin;
    contactWin.setModal(true);
    contactWin.exec();
    show();
}

void MainWindow::on_pushButton_4_clicked()
{
    ///
    /// \brief "Our Policy" window opens here
    ///
    hide();
    Policy policyWin;
    policyWin.setModal(true);
    policyWin.exec();
    show();
}

void MainWindow::on_pushButton_5_clicked()
{
    ///
    /// \brief "Testimonials" window opens here
    ///
    hide();
    Testimonials testimWin;
    testimWin.setModal(true);
    testimWin.exec();
    show();
}

void MainWindow::on_pushButton_7_clicked()
{
    ///
    /// \brief "Buy Now!" window opens here
    ///
    hide();
    Buy buyWin;
    buyWin.setModal(true);
    buyWin.exec();
    show();
}

void MainWindow::on_pushButton_6_clicked()
{
    ///
    /// \brief "Administrator Log In" window opens here
    ///
    hide();
    AdminLogin loginWin;
    loginWin.show();
    loginWin.exec();

    if(loginWin.GetStatus()==true) {
        AdminWindow adminWin;
        adminWin.show();
        adminWin.exec();
    }else{
        LoginFail failWin;
        failWin.show();
        failWin.exec();
    }
    show();
}
