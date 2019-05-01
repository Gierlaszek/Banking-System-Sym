#-------------------------------------------------
#
# Project created by QtCreator 2019-04-19T12:14:10
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MAIN_MENU
TEMPLATE = app

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
        register_window.cpp \
    login_window.cpp \
    admin_window.cpp \
    user_window.cpp \
    transfer.cpp \
    transfer_history.cpp \
    admin_acc_delete.cpp \
    admin_user_info.cpp \
    payment.cpp \
    admin_confirm_payment.cpp

HEADERS += \
        mainwindow.h \
        register_window.h \
    login_window.h \
    admin_window.h \
    user_window.h \
    transfer.h \
    transfer_history.h \
    admin_acc_delete.h \
    admin_user_info.h \
    payment.h \
    admin_confirm_payment.h

FORMS += \
        mainwindow.ui \
        register_window.ui \
    login_window.ui \
    admin_window.ui \
    user_window.ui \
    transfer.ui \
    transfer_history.ui \
    admin_acc_delete.ui \
    admin_user_info.ui \
    payment.ui \
    admin_confirm_payment.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../build-MAIN_MENU-Desktop_Qt_5_5_1_clang_64bit-Debug/Database.txt \
    ../build-MAIN_MENU-Desktop_Qt_5_5_1_clang_64bit-Debug/Database.txt \
    ../build-MAIN_MENU-Desktop_Qt_5_5_1_clang_64bit-Debug/Current_User.txt \
    ../build-MAIN_MENU-Desktop_Qt_5_5_1_clang_64bit-Debug/User_Account.txt \
    ../Debug-Kamil/User_Account.txt \
    ../Debug-Kamil/Database.txt \
    ../Debug-Kamil/Current_User.txt \
    ../Debug-Kamil/Confirm_Payment.txt
