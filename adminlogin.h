#ifndef ADMINLOGIN_H
#define ADMINLOGIN_H

#include <QDialog>
#include <QAbstractButton>
#include <QTCore>
#include <QTGUI>

namespace Ui {
class AdminLogin;
}

class AdminLogin : public QDialog
{
    Q_OBJECT

public:
    explicit AdminLogin(QWidget *parent = 0);
    ~AdminLogin();

    bool GetStatus() {return status;}

private slots:

    void on_buttonBox_clicked(QAbstractButton *button);

private:
    Ui::AdminLogin *ui;
    bool status;
};

#endif // ADMINLOGIN_H
