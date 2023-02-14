/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QCustomPlot *widget;
    QGroupBox *groupBox;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_classicCase;
    QRadioButton *radioButton_2;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox_X_0;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox_2_V_0;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_damping;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_AnimationTime;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QCustomPlot(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 780, 450));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 460, 371, 51));
        widget1 = new QWidget(groupBox);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 20, 361, 26));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_classicCase = new QRadioButton(widget1);
        radioButton_classicCase->setObjectName(QString::fromUtf8("radioButton_classicCase"));
        radioButton_classicCase->setChecked(true);

        horizontalLayout->addWidget(radioButton_classicCase);

        radioButton_2 = new QRadioButton(widget1);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        horizontalLayout->addWidget(radioButton_2);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(26, 524, 420, 26));
        horizontalLayout_6 = new QHBoxLayout(widget2);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(widget2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        doubleSpinBox_X_0 = new QDoubleSpinBox(widget2);
        doubleSpinBox_X_0->setObjectName(QString::fromUtf8("doubleSpinBox_X_0"));
        doubleSpinBox_X_0->setMinimum(-10.000000000000000);
        doubleSpinBox_X_0->setMaximum(10.000000000000000);
        doubleSpinBox_X_0->setValue(7.000000000000000);

        horizontalLayout_2->addWidget(doubleSpinBox_X_0);


        horizontalLayout_6->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(widget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        doubleSpinBox_2_V_0 = new QDoubleSpinBox(widget2);
        doubleSpinBox_2_V_0->setObjectName(QString::fromUtf8("doubleSpinBox_2_V_0"));
        doubleSpinBox_2_V_0->setMinimum(-10.000000000000000);
        doubleSpinBox_2_V_0->setMaximum(10.000000000000000);
        doubleSpinBox_2_V_0->setValue(7.000000000000000);

        horizontalLayout_3->addWidget(doubleSpinBox_2_V_0);


        horizontalLayout_6->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(widget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        doubleSpinBox_damping = new QDoubleSpinBox(widget2);
        doubleSpinBox_damping->setObjectName(QString::fromUtf8("doubleSpinBox_damping"));
        doubleSpinBox_damping->setMinimum(0.010000000000000);
        doubleSpinBox_damping->setMaximum(1.000000000000000);
        doubleSpinBox_damping->setSingleStep(0.050000000000000);
        doubleSpinBox_damping->setValue(0.250000000000000);

        horizontalLayout_4->addWidget(doubleSpinBox_damping);


        horizontalLayout_6->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(widget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        doubleSpinBox_AnimationTime = new QDoubleSpinBox(widget2);
        doubleSpinBox_AnimationTime->setObjectName(QString::fromUtf8("doubleSpinBox_AnimationTime"));
        doubleSpinBox_AnimationTime->setMinimum(3.140000000000000);
        doubleSpinBox_AnimationTime->setMaximum(100.000000000000000);
        doubleSpinBox_AnimationTime->setValue(6.280000000000000);

        horizontalLayout_5->addWidget(doubleSpinBox_AnimationTime);


        horizontalLayout_6->addLayout(horizontalLayout_5);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277\321\213 \320\272\320\276\320\273\320\265\320\261\320\260\320\275\320\270\320\271", nullptr));
        radioButton_classicCase->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\320\275\320\264\320\260\321\200\321\202\320\275\321\213\320\271 \321\201\320\273\321\203\321\207\320\260\320\271", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "\320\241 \320\264\320\265\320\274\320\277\320\270\320\275\320\263\320\276\320\274", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "X_0", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "V_0", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "damping", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "AnimationTime", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
