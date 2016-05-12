#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QDialog>
#include "customer.h"

namespace Ui {
class AdminWindow;
}

class AdminWindow : public QDialog
{
    Q_OBJECT

public:
    CustomerList CList;     /// \brief list (FIFO) of customers

    explicit AdminWindow(QWidget *parent = 0);
    ~AdminWindow();

private slots:

    void on_showAll_Button_clicked();

    void on_KeyButton_clicked();

    void on_NonKeyButton_clicked();

private:
    Ui::AdminWindow *ui;
};

#endif // ADMINWINDOW_H
