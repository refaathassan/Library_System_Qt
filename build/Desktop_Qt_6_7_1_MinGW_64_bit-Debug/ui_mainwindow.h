/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *Tlogin;
    QWidget *tab;
    QPushButton *PbRestor_2;
    QPushButton *PbRemove_2;
    QPushButton *PbLog_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *Leuser;
    QLineEdit *Lepass;
    QPushButton *PbSAVE;
    QPushButton *PbSAVE_2;
    QListWidget *LwState;
    QLabel *label_40;
    QWidget *tab_2;
    QListWidget *LwUser;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *LeSearch;
    QComboBox *CbFilter;
    QPushButton *pushButton;
    QPushButton *PbExit;
    QPushButton *Pbsearch;
    QWidget *tab_9;
    QListWidget *LwUser_2;
    QPushButton *pushButton_2;
    QLineEdit *LeSearch_2;
    QComboBox *CbFilter_2;
    QPushButton *PbExit_2;
    QPushButton *Pbsearch_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QPushButton *pushButton_7;
    QLineEdit *LeAuthor;
    QLineEdit *LeBarcode;
    QLineEdit *LeCategory;
    QLineEdit *LeTitle;
    QPushButton *PbDelete;
    QLabel *label_39;
    QLineEdit *LeDelete;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Tlogin = new QTabWidget(centralwidget);
        Tlogin->setObjectName("Tlogin");
        Tlogin->setGeometry(QRect(0, 0, 801, 571));
        tab = new QWidget();
        tab->setObjectName("tab");
        PbRestor_2 = new QPushButton(tab);
        PbRestor_2->setObjectName("PbRestor_2");
        PbRestor_2->setGeometry(QRect(120, 280, 171, 41));
        PbRestor_2->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";"));
        PbRemove_2 = new QPushButton(tab);
        PbRemove_2->setObjectName("PbRemove_2");
        PbRemove_2->setGeometry(QRect(540, 280, 171, 41));
        PbRemove_2->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";"));
        PbLog_2 = new QPushButton(tab);
        PbLog_2->setObjectName("PbLog_2");
        PbLog_2->setGeometry(QRect(340, 280, 171, 41));
        PbLog_2->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";"));
        label_3 = new QLabel(tab);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(78, 75, 221, 51));
        label_3->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(80, 160, 221, 51));
        label_4->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        Leuser = new QLineEdit(tab);
        Leuser->setObjectName("Leuser");
        Leuser->setGeometry(QRect(370, 80, 291, 41));
        Lepass = new QLineEdit(tab);
        Lepass->setObjectName("Lepass");
        Lepass->setGeometry(QRect(370, 170, 291, 41));
        PbSAVE = new QPushButton(tab);
        PbSAVE->setObjectName("PbSAVE");
        PbSAVE->setGeometry(QRect(340, 340, 171, 41));
        PbSAVE->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";"));
        PbSAVE_2 = new QPushButton(tab);
        PbSAVE_2->setObjectName("PbSAVE_2");
        PbSAVE_2->setGeometry(QRect(340, 400, 171, 41));
        PbSAVE_2->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";"));
        LwState = new QListWidget(tab);
        LwState->setObjectName("LwState");
        LwState->setGeometry(QRect(375, 10, 271, 41));
        label_40 = new QLabel(tab);
        label_40->setObjectName("label_40");
        label_40->setGeometry(QRect(80, 10, 221, 51));
        label_40->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.71, y2:0.784, stop:0 rgba(0, 0, 0, 255), stop:0.909091 rgba(255, 208, 208, 255));"));
        Tlogin->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        LwUser = new QListWidget(tab_2);
        LwUser->setObjectName("LwUser");
        LwUser->setGeometry(QRect(70, 150, 371, 321));
        label = new QLabel(tab_2);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 0, 101, 31));
        label->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0.613636, y2:0.71, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 97, 97, 255));"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 50, 101, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0.613636, y2:0.71, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 97, 97, 255));"));
        LeSearch = new QLineEdit(tab_2);
        LeSearch->setObjectName("LeSearch");
        LeSearch->setGeometry(QRect(200, 0, 161, 31));
        CbFilter = new QComboBox(tab_2);
        CbFilter->setObjectName("CbFilter");
        CbFilter->setGeometry(QRect(200, 50, 161, 31));
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(70, 490, 181, 41));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 14pt \"Segoe UI\";"));
        PbExit = new QPushButton(tab_2);
        PbExit->setObjectName("PbExit");
        PbExit->setGeometry(QRect(260, 490, 181, 41));
        PbExit->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 14pt \"Segoe UI\";"));
        Pbsearch = new QPushButton(tab_2);
        Pbsearch->setObjectName("Pbsearch");
        Pbsearch->setGeometry(QRect(70, 110, 361, 31));
        Pbsearch->setStyleSheet(QString::fromUtf8("background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0.613636, y2:0.71, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 97, 97, 255));\n"
"font: 14pt \"Segoe UI\";"));
        Tlogin->addTab(tab_2, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName("tab_9");
        LwUser_2 = new QListWidget(tab_9);
        LwUser_2->setObjectName("LwUser_2");
        LwUser_2->setGeometry(QRect(400, 150, 371, 321));
        pushButton_2 = new QPushButton(tab_9);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(400, 490, 181, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 14pt \"Segoe UI\";"));
        LeSearch_2 = new QLineEdit(tab_9);
        LeSearch_2->setObjectName("LeSearch_2");
        LeSearch_2->setGeometry(QRect(530, 0, 161, 31));
        CbFilter_2 = new QComboBox(tab_9);
        CbFilter_2->setObjectName("CbFilter_2");
        CbFilter_2->setGeometry(QRect(530, 50, 161, 31));
        PbExit_2 = new QPushButton(tab_9);
        PbExit_2->setObjectName("PbExit_2");
        PbExit_2->setGeometry(QRect(590, 490, 181, 41));
        PbExit_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 14pt \"Segoe UI\";"));
        Pbsearch_2 = new QPushButton(tab_9);
        Pbsearch_2->setObjectName("Pbsearch_2");
        Pbsearch_2->setGeometry(QRect(400, 110, 361, 31));
        Pbsearch_2->setStyleSheet(QString::fromUtf8("background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0.613636, y2:0.71, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 97, 97, 255));\n"
"font: 14pt \"Segoe UI\";"));
        label_7 = new QLabel(tab_9);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(400, 50, 101, 31));
        label_7->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0.613636, y2:0.71, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 97, 97, 255));"));
        label_8 = new QLabel(tab_9);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(400, 0, 101, 31));
        label_8->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0.613636, y2:0.71, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 97, 97, 255));"));
        label_15 = new QLabel(tab_9);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(10, 40, 101, 31));
        label_15->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0.613636, y2:0.71, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 97, 97, 255));"));
        label_16 = new QLabel(tab_9);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(10, 80, 101, 31));
        label_16->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0.613636, y2:0.71, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 97, 97, 255));"));
        label_17 = new QLabel(tab_9);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(10, 130, 101, 31));
        label_17->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0.613636, y2:0.71, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 97, 97, 255));"));
        label_18 = new QLabel(tab_9);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(10, 180, 101, 31));
        label_18->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0.613636, y2:0.71, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 97, 97, 255));"));
        pushButton_7 = new QPushButton(tab_9);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(0, 270, 331, 41));
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 14pt \"Segoe UI\";"));
        LeAuthor = new QLineEdit(tab_9);
        LeAuthor->setObjectName("LeAuthor");
        LeAuthor->setGeometry(QRect(150, 40, 161, 31));
        LeBarcode = new QLineEdit(tab_9);
        LeBarcode->setObjectName("LeBarcode");
        LeBarcode->setGeometry(QRect(150, 80, 161, 31));
        LeCategory = new QLineEdit(tab_9);
        LeCategory->setObjectName("LeCategory");
        LeCategory->setGeometry(QRect(150, 130, 161, 31));
        LeTitle = new QLineEdit(tab_9);
        LeTitle->setObjectName("LeTitle");
        LeTitle->setGeometry(QRect(150, 180, 161, 31));
        PbDelete = new QPushButton(tab_9);
        PbDelete->setObjectName("PbDelete");
        PbDelete->setGeometry(QRect(0, 460, 331, 41));
        PbDelete->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 14pt \"Segoe UI\";"));
        label_39 = new QLabel(tab_9);
        label_39->setObjectName("label_39");
        label_39->setGeometry(QRect(10, 400, 101, 31));
        label_39->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0.613636, y2:0.71, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 97, 97, 255));"));
        LeDelete = new QLineEdit(tab_9);
        LeDelete->setObjectName("LeDelete");
        LeDelete->setGeometry(QRect(140, 400, 161, 31));
        Tlogin->addTab(tab_9, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, &QPushButton::clicked, LwUser, qOverload<>(&QListWidget::clear));
        QObject::connect(pushButton_2, &QPushButton::clicked, LwUser_2, qOverload<>(&QListWidget::clear));
        QObject::connect(PbSAVE_2, &QPushButton::clicked, Lepass, qOverload<>(&QLineEdit::clear));
        QObject::connect(PbSAVE_2, &QPushButton::clicked, Leuser, qOverload<>(&QLineEdit::clear));
        QObject::connect(pushButton_2, &QPushButton::clicked, LeTitle, qOverload<>(&QLineEdit::clear));
        QObject::connect(pushButton_2, &QPushButton::clicked, LeCategory, qOverload<>(&QLineEdit::clear));
        QObject::connect(pushButton_2, &QPushButton::clicked, LeBarcode, qOverload<>(&QLineEdit::clear));
        QObject::connect(pushButton_2, &QPushButton::clicked, LeAuthor, qOverload<>(&QLineEdit::clear));
        QObject::connect(PbSAVE_2, &QPushButton::clicked, LwState, qOverload<>(&QListWidget::clear));

        Tlogin->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        PbRestor_2->setText(QCoreApplication::translate("MainWindow", "Restor", nullptr));
        PbRemove_2->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
        PbLog_2->setText(QCoreApplication::translate("MainWindow", "Log in", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Enter User Name</p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Enter Password</p></body></html>", nullptr));
        PbSAVE->setText(QCoreApplication::translate("MainWindow", "Save Data", nullptr));
        PbSAVE_2->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        label_40->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">State</p></body></html>", nullptr));
        Tlogin->setTabText(Tlogin->indexOf(tab), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Enter Title</p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Enter Filter</p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        PbExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        Pbsearch->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        Tlogin->setTabText(Tlogin->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        PbExit_2->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        Pbsearch_2->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Enter Filter</p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Enter Title</p></body></html>", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Author</p></body></html>", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Barcode</p></body></html>", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Category</p></body></html>", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">title</p></body></html>", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        PbDelete->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        label_39->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Barcode</p></body></html>", nullptr));
        Tlogin->setTabText(Tlogin->indexOf(tab_9), QCoreApplication::translate("MainWindow", "Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
