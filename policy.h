#ifndef POLICY_H
#define POLICY_H

#include <QDialog>

namespace Ui {
class Policy;
}

class Policy : public QDialog
{
    Q_OBJECT

public:
    explicit Policy(QWidget *parent = 0);
    ~Policy();

private:
    Ui::Policy *ui;
};

#endif // POLICY_H
