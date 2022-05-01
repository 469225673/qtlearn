/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *begin;
    QLabel *curTime;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_4;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QTextEdit *textEdit;
    QLabel *label_5;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *daye;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QCheckBox *libai;
    QCheckBox *gongben;
    QCheckBox *houzi;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1055, 944);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        begin = new QPushButton(centralwidget);
        begin->setObjectName(QStringLiteral("begin"));
        begin->setGeometry(QRect(30, 20, 121, 51));
        curTime = new QLabel(centralwidget);
        curTime->setObjectName(QStringLiteral("curTime"));
        curTime->setGeometry(QRect(180, 20, 431, 61));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 120, 121, 61));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 220, 141, 61));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(300, 130, 661, 181));
        label->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(300, 90, 112, 34));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(120, 470, 113, 25));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(120, 530, 113, 25));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(120, 590, 113, 25));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(120, 400, 121, 41));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 470, 81, 18));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 530, 81, 18));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 590, 101, 20));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 690, 271, 161));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 620, 131, 71));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(460, 430, 241, 261));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        daye = new QCheckBox(groupBox);
        daye->setObjectName(QStringLiteral("daye"));

        verticalLayout_2->addWidget(daye);

        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(50, -1, -1, -1);
        libai = new QCheckBox(widget);
        libai->setObjectName(QStringLiteral("libai"));

        verticalLayout->addWidget(libai);

        gongben = new QCheckBox(widget);
        gongben->setObjectName(QStringLiteral("gongben"));

        verticalLayout->addWidget(gongben);

        houzi = new QCheckBox(widget);
        houzi->setObjectName(QStringLiteral("houzi"));

        verticalLayout->addWidget(houzi);


        verticalLayout_2->addWidget(widget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1055, 29));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        begin->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213", Q_NULLPTR));
        curTime->setText(QApplication::translate("MainWindow", "\346\227\266\351\227\264", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "\347\247\273\345\212\250\347\252\227\345\217\243", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "\347\202\271\344\270\200\344\270\213\350\257\225\350\257\225", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\346\210\221\346\230\257\350\246\201\346\210\220\344\270\272\346\265\267\350\264\274\347\216\213\347\232\204\347\224\267\344\272\272\357\274\201\357\274\2011", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\345\255\227\344\275\223", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "\344\270\252\344\272\272\344\277\241\346\201\257\345\241\253\345\206\231", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\345\247\223\345\220\215", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\345\271\264\351\276\204", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\345\226\234\346\254\242\347\232\204\346\260\264\346\236\234", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\347\225\231\344\270\213\344\270\200\346\256\265\350\257\235\345\220\247", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "\344\275\240\346\234\200\345\226\234\346\254\242\351\202\243\344\270\252\350\213\261\351\233\204", Q_NULLPTR));
        daye->setText(QApplication::translate("MainWindow", "\346\211\223\351\207\216", Q_NULLPTR));
        libai->setText(QApplication::translate("MainWindow", "\346\235\216\347\231\275", Q_NULLPTR));
        gongben->setText(QApplication::translate("MainWindow", "\345\256\253\346\234\254", Q_NULLPTR));
        houzi->setText(QApplication::translate("MainWindow", "\347\214\264\345\255\220", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
