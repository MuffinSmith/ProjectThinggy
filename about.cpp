#include "about.h"
#include "ui_about.h"

About::About(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::About)
{
    ui->setupUi(this);

    setWindowTitle("About Anteku");
    /*The following lines are used to fill in the labels. They are editted here because newlines are impossible in the UI editor.
    Please use HTML for formatting, as it cannot be mixed with C++ formating. <br> is the equivilant of a newline, for example.

    To unlock text boxes for size editting in the UI editor, look in the properties window for Minimum and Maximum Size. Set
    the former to zero, and the latter to a very big number. This will remove the size restrictions that are in place, which
    ensure that no accidental edits are made.*/

    ui->label_2->setText("<u>About Us</u><br>"
                         "Here at iCyberSecurity, we strive to provide individuals and organizations alike with the software necessary to keep their<br>"
                         "computers and servers safe from the latest threats in cyber space. With the most up-to-date catalogs, and background<br>"
                         "scanning suites that minimize the workload of system resources, users of our software can rest assured that their computers<br>"
                         "will be safe and secure no matter where the user goes.");
    ui->label_3->setText("<u>A Brief History</u><br>"
                         "Many weeks ago, a project was assigned, with the goal of creating a security pahmplet to best all others - to put modern<br>"
                         "antivirus software to shame and to usher in a new age of protection for the common user. To deal a lethal blow to malicious ads<br>"
                         "that have plagued the foolish for so long, and to end the reign of terror that Microsoft's spyware has wrought upon us with the<br>"
                         "introduction of Windows 10. This proposed cyber-security program would bring peace to the internet, so all may browse safely<br>"
                         "and without having to worry about losing personal information at the hands of the unknown.<br>"
                         "<br>"
                         "This is not that program. But we do our best. :)");
} //end setup function

About::~About()
{
    delete ui;
}


void About::on_pushButton_clicked()
{
    close();
}
