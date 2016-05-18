#-------------------------------------------------
#
# Project created by QtCreator 2016-04-26T14:17:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = projectthinggy
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    help.cpp \
    about.cpp \
    contact.cpp \
    policy.cpp \
    testimonials.cpp \
    adminlogin.cpp \
    buy.cpp \
    admin.cpp \
    adminwindow.cpp \
    loginfail.cpp \
    addcompany.cpp \

HEADERS  += mainwindow.h \
    customer.h \
    help.h \
    about.h \
    contact.h \
    policy.h \
    testimonials.h \
    adminlogin.h \
    buy.h \
    admin.h \
    queue.h \
    adminwindow.h \
    loginfail.h \
    addcompany.h \

FORMS    += mainwindow.ui \
    help.ui \
    about.ui \
    contact.ui \
    policy.ui \
    testimonials.ui \
    adminlogin.ui \
    buy.ui \
    adminwindow.ui \
    loginfail.ui \
    addcompany.ui \

DISTFILES += \
    customers.txt

RESOURCES += \
    data.qrc
