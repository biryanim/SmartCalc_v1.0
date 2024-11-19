/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *LineEdit_X;
    QPushButton *push_sin;
    QPushButton *pushButton_3;
    QPushButton *push_ln;
    QLineEdit *LineEdit_x_min;
    QPushButton *pushButton_6;
    QLineEdit *LineEdit_x_max;
    QPushButton *pushButton_eq;
    QLineEdit *LineEdit_y_min;
    QLineEdit *LineEdit_y_max;
    QLabel *label_x_max;
    QPushButton *push_RB;
    QLabel *error_field;
    QLabel *label_y_max;
    QPushButton *pushButton_5;
    QPushButton *push_sqrt;
    QPushButton *pushButton_x;
    QLabel *label_x_min;
    QPushButton *pushButton_CE;
    QPushButton *pushButton_9;
    QLabel *label_y_min;
    QPushButton *push_div;
    QPushButton *pushButton_1;
    QPushButton *pushButton_7;
    QPushButton *push_cos;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_4;
    QPushButton *push_deg;
    QPushButton *pushButton_2;
    QCustomPlot *widget;
    QLabel *input_field;
    QPushButton *push_plus;
    QPushButton *pushButton_0;
    QPushButton *push_atan;
    QPushButton *push_mult;
    QPushButton *pushButton_8;
    QPushButton *push_tan;
    QPushButton *push_mod;
    QPushButton *pushButton;
    QPushButton *push_acos;
    QPushButton *push_asin;
    QPushButton *push_minus;
    QPushButton *push_LB;
    QPushButton *push_log;
    QWidget *tab_2;
    QLabel *label_loan_amount;
    QLineEdit *lineEdit_loan_amount;
    QLabel *label_loan_amount_2;
    QLineEdit *lineEdit_term;
    QLabel *label_loan_amount_3;
    QLabel *label_loan_amount_4;
    QLineEdit *lineEdit_rate;
    QLabel *label_loan_amount_5;
    QRadioButton *radioButton_annuity;
    QLabel *label_loan_amount_6;
    QRadioButton *radioButton_diff;
    QPushButton *pushButton_21;
    QLabel *label_err_amount;
    QLabel *label_err_term;
    QLabel *label_err_rate;
    QTextEdit *textEdit_output;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_over;
    QLabel *label_4;
    QLabel *label_payout;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1020, 396);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #202124;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(-40, 0, 1171, 341));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget::pane\n"
"{\n"
"    top: -8px;\n"
"}\n"
" \n"
"QTabWidget::tab-bar\n"
"{\n"
"    alignment: center;\n"
"}\n"
"\n"
"QTabBar::tab\n"
"{\n"
"	color: white;\n"
"}"));
        tab = new QWidget();
        tab->setObjectName("tab");
        LineEdit_X = new QLineEdit(tab);
        LineEdit_X->setObjectName("LineEdit_X");
        LineEdit_X->setGeometry(QRect(150, 270, 171, 35));
        LineEdit_X->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	color: white;\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"	background-color: #202124;\n"
"	border-radius: 6%;\n"
"	border: 1px solid #5f6368;\n"
"	font-size:  20px;\n"
"}"));
        push_sin = new QPushButton(tab);
        push_sin->setObjectName("push_sin");
        push_sin->setGeometry(QRect(150, 150, 83, 35));
        push_sin->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #5f6368;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #808080;\n"
"}\n"
""));
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(420, 190, 83, 35));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #3c4043;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #808080;\n"
"}"));
        push_ln = new QPushButton(tab);
        push_ln->setObjectName("push_ln");
        push_ln->setGeometry(QRect(150, 230, 83, 35));
        push_ln->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #5f6368;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #808080;\n"
"}\n"
""));
        LineEdit_x_min = new QLineEdit(tab);
        LineEdit_x_min->setObjectName("LineEdit_x_min");
        LineEdit_x_min->setGeometry(QRect(690, 10, 131, 23));
        QFont font;
        LineEdit_x_min->setFont(font);
        LineEdit_x_min->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	color: white;\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"	background-color: #202124;\n"
"	border-radius: 6%;\n"
"	border: 1px solid #5f6368;\n"
"	font-size:  15px;\n"
"}"));
        LineEdit_x_min->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_6 = new QPushButton(tab);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(420, 150, 83, 35));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #3c4043;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #808080;\n"
"}"));
        LineEdit_x_max = new QLineEdit(tab);
        LineEdit_x_max->setObjectName("LineEdit_x_max");
        LineEdit_x_max->setGeometry(QRect(690, 40, 131, 23));
        LineEdit_x_max->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	color: white;\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"	background-color: #202124;\n"
"	border-radius: 6%;\n"
"	border: 1px solid #5f6368;\n"
"	font-size:  15px;\n"
"}"));
        pushButton_eq = new QPushButton(tab);
        pushButton_eq->setObjectName("pushButton_eq");
        pushButton_eq->setGeometry(QRect(420, 230, 83, 35));
        pushButton_eq->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #8ab4f8;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #9FC4F0;\n"
"}"));
        LineEdit_y_min = new QLineEdit(tab);
        LineEdit_y_min->setObjectName("LineEdit_y_min");
        LineEdit_y_min->setGeometry(QRect(910, 10, 131, 23));
        LineEdit_y_min->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	color: white;\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"	background-color: #202124;\n"
"	border-radius: 6%;\n"
"	border: 1px solid #5f6368;\n"
"	font-size:  15px;\n"
"}"));
        LineEdit_y_max = new QLineEdit(tab);
        LineEdit_y_max->setObjectName("LineEdit_y_max");
        LineEdit_y_max->setGeometry(QRect(910, 40, 131, 23));
        LineEdit_y_max->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	color: white;\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"	background-color: #202124;\n"
"	border-radius: 6%;\n"
"	border: 1px solid #5f6368;\n"
"	font-size:  15px;\n"
"}"));
        label_x_max = new QLabel(tab);
        label_x_max->setObjectName("label_x_max");
        label_x_max->setGeometry(QRect(620, 40, 63, 23));
        QFont font1;
        font1.setPointSize(10);
        label_x_max->setFont(font1);
        label_x_max->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color: #5f6368;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"}"));
        label_x_max->setAlignment(Qt::AlignCenter);
        push_RB = new QPushButton(tab);
        push_RB->setObjectName("push_RB");
        push_RB->setGeometry(QRect(330, 70, 83, 35));
        push_RB->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #5f6368;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #808080;\n"
"}\n"
""));
        error_field = new QLabel(tab);
        error_field->setObjectName("error_field");
        error_field->setGeometry(QRect(330, 270, 171, 35));
        error_field->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: red;\n"
"	background-color: #202124;\n"
"	font-size: 16px\n"
";}\n"
""));
        error_field->setAlignment(Qt::AlignCenter);
        label_y_max = new QLabel(tab);
        label_y_max->setObjectName("label_y_max");
        label_y_max->setGeometry(QRect(840, 40, 63, 23));
        label_y_max->setFont(font1);
        label_y_max->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color: #5f6368;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"}\n"
""));
        label_y_max->setAlignment(Qt::AlignCenter);
        pushButton_5 = new QPushButton(tab);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(330, 150, 83, 35));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #3c4043;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #808080;\n"
"}"));
        push_sqrt = new QPushButton(tab);
        push_sqrt->setObjectName("push_sqrt");
        push_sqrt->setGeometry(QRect(60, 70, 83, 35));
        push_sqrt->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #5f6368;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #808080;\n"
"}\n"
""));
        pushButton_x = new QPushButton(tab);
        pushButton_x->setObjectName("pushButton_x");
        pushButton_x->setGeometry(QRect(60, 270, 83, 35));
        pushButton_x->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #8ab4f8;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #9FC4F0;\n"
"}"));
        label_x_min = new QLabel(tab);
        label_x_min->setObjectName("label_x_min");
        label_x_min->setGeometry(QRect(620, 10, 63, 23));
        label_x_min->setFont(font1);
        label_x_min->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color: #5f6368;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"}\n"
"\n"
""));
        label_x_min->setAlignment(Qt::AlignCenter);
        pushButton_CE = new QPushButton(tab);
        pushButton_CE->setObjectName("pushButton_CE");
        pushButton_CE->setGeometry(QRect(510, 70, 83, 35));
        pushButton_CE->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #5f6368;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #808080;\n"
"}\n"
""));
        pushButton_9 = new QPushButton(tab);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(420, 110, 83, 35));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #3c4043;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #808080;\n"
"}"));
        label_y_min = new QLabel(tab);
        label_y_min->setObjectName("label_y_min");
        label_y_min->setGeometry(QRect(840, 10, 63, 23));
        label_y_min->setFont(font1);
        label_y_min->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color: #5f6368;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"}\n"
"\n"
""));
        label_y_min->setAlignment(Qt::AlignCenter);
        push_div = new QPushButton(tab);
        push_div->setObjectName("push_div");
        push_div->setGeometry(QRect(510, 110, 83, 35));
        push_div->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #5f6368;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #808080;\n"
"}\n"
""));
        pushButton_1 = new QPushButton(tab);
        pushButton_1->setObjectName("pushButton_1");
        pushButton_1->setGeometry(QRect(240, 190, 83, 35));
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #3c4043;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #808080;\n"
"}"));
        pushButton_7 = new QPushButton(tab);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(240, 110, 83, 35));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #3c4043;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #808080;\n"
"}"));
        push_cos = new QPushButton(tab);
        push_cos->setObjectName("push_cos");
        push_cos->setGeometry(QRect(150, 110, 83, 35));
        push_cos->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #5f6368;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #808080;\n"
"}\n"
""));
        pushButton_dot = new QPushButton(tab);
        pushButton_dot->setObjectName("pushButton_dot");
        pushButton_dot->setGeometry(QRect(330, 230, 83, 35));
        pushButton_dot->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #5f6368;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #808080;\n"
"}\n"
""));
        pushButton_4 = new QPushButton(tab);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(240, 150, 83, 35));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #3c4043;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #808080;\n"
"}"));
        push_deg = new QPushButton(tab);
        push_deg->setObjectName("push_deg");
        push_deg->setGeometry(QRect(150, 70, 83, 35));
        push_deg->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #5f6368;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #808080;\n"
"}\n"
""));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(330, 190, 83, 35));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #3c4043;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #808080;\n"
"}"));
        widget = new QCustomPlot(tab);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(620, 70, 421, 234));
        widget->setStyleSheet(QString::fromUtf8("background-color:white;"));
        input_field = new QLabel(tab);
        input_field->setObjectName("input_field");
        input_field->setGeometry(QRect(60, 10, 531, 51));
        QFont font2;
        font2.setPointSize(15);
        input_field->setFont(font2);
        input_field->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: white;\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"	background-color: #202124;\n"
"	border-radius: 6%;\n"
"	border: 1px solid #5f6368;\n"
"}\n"
"\n"
""));
        push_plus = new QPushButton(tab);
        push_plus->setObjectName("push_plus");
        push_plus->setGeometry(QRect(510, 230, 83, 35));
        push_plus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #5f6368;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #808080;\n"
"}\n"
""));
        pushButton_0 = new QPushButton(tab);
        pushButton_0->setObjectName("pushButton_0");
        pushButton_0->setGeometry(QRect(240, 230, 83, 35));
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #3c4043;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #808080;\n"
"}"));
        push_atan = new QPushButton(tab);
        push_atan->setObjectName("push_atan");
        push_atan->setGeometry(QRect(60, 190, 83, 35));
        push_atan->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #5f6368;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #808080;\n"
"}\n"
""));
        push_mult = new QPushButton(tab);
        push_mult->setObjectName("push_mult");
        push_mult->setGeometry(QRect(510, 150, 83, 35));
        push_mult->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #5f6368;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #808080;\n"
"}\n"
""));
        pushButton_8 = new QPushButton(tab);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(330, 110, 83, 35));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #3c4043;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #808080;\n"
"}"));
        push_tan = new QPushButton(tab);
        push_tan->setObjectName("push_tan");
        push_tan->setGeometry(QRect(150, 190, 83, 35));
        push_tan->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #5f6368;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #808080;\n"
"}\n"
""));
        push_mod = new QPushButton(tab);
        push_mod->setObjectName("push_mod");
        push_mod->setGeometry(QRect(420, 70, 83, 35));
        push_mod->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #5f6368;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #808080;\n"
"}\n"
""));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(510, 270, 83, 35));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #8ab4f8;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #9FC4F0;\n"
"}"));
        push_acos = new QPushButton(tab);
        push_acos->setObjectName("push_acos");
        push_acos->setGeometry(QRect(60, 110, 83, 35));
        push_acos->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #5f6368;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #808080;\n"
"}\n"
""));
        push_asin = new QPushButton(tab);
        push_asin->setObjectName("push_asin");
        push_asin->setGeometry(QRect(60, 150, 83, 35));
        push_asin->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #5f6368;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #808080;\n"
"}\n"
""));
        push_minus = new QPushButton(tab);
        push_minus->setObjectName("push_minus");
        push_minus->setGeometry(QRect(510, 190, 83, 35));
        push_minus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #5f6368;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #808080;\n"
"}\n"
""));
        push_LB = new QPushButton(tab);
        push_LB->setObjectName("push_LB");
        push_LB->setGeometry(QRect(240, 70, 83, 35));
        push_LB->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #5f6368;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #808080;\n"
"}\n"
""));
        push_log = new QPushButton(tab);
        push_log->setObjectName("push_log");
        push_log->setGeometry(QRect(60, 230, 83, 35));
        push_log->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #5f6368;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #808080;\n"
"}\n"
""));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        label_loan_amount = new QLabel(tab_2);
        label_loan_amount->setObjectName("label_loan_amount");
        label_loan_amount->setGeometry(QRect(130, 20, 181, 32));
        label_loan_amount->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color: #5f6368;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"	font-size:  15px;\n"
"}\n"
""));
        label_loan_amount->setAlignment(Qt::AlignCenter);
        lineEdit_loan_amount = new QLineEdit(tab_2);
        lineEdit_loan_amount->setObjectName("lineEdit_loan_amount");
        lineEdit_loan_amount->setGeometry(QRect(330, 20, 151, 32));
        lineEdit_loan_amount->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	color: white;\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"	background-color: #202124;\n"
"	border-radius: 6%;\n"
"	border: 1px solid #5f6368;\n"
"	font-size:  20px;\n"
"}"));
        label_loan_amount_2 = new QLabel(tab_2);
        label_loan_amount_2->setObjectName("label_loan_amount_2");
        label_loan_amount_2->setGeometry(QRect(130, 80, 181, 32));
        label_loan_amount_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color: #5f6368;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"	font-size:  15px;\n"
"}\n"
""));
        label_loan_amount_2->setAlignment(Qt::AlignCenter);
        lineEdit_term = new QLineEdit(tab_2);
        lineEdit_term->setObjectName("lineEdit_term");
        lineEdit_term->setGeometry(QRect(400, 80, 81, 32));
        lineEdit_term->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	color: white;\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"	background-color: #202124;\n"
"	border-radius: 6%;\n"
"	border: 1px solid #5f6368;\n"
"	font-size:  20px;\n"
"}"));
        label_loan_amount_3 = new QLabel(tab_2);
        label_loan_amount_3->setObjectName("label_loan_amount_3");
        label_loan_amount_3->setGeometry(QRect(490, 80, 81, 32));
        label_loan_amount_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color: #202124;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"	font-size:  15px;\n"
"}\n"
""));
        label_loan_amount_3->setAlignment(Qt::AlignCenter);
        label_loan_amount_4 = new QLabel(tab_2);
        label_loan_amount_4->setObjectName("label_loan_amount_4");
        label_loan_amount_4->setGeometry(QRect(130, 140, 181, 32));
        label_loan_amount_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color: #5f6368;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"	font-size:  15px;\n"
"}\n"
""));
        label_loan_amount_4->setAlignment(Qt::AlignCenter);
        lineEdit_rate = new QLineEdit(tab_2);
        lineEdit_rate->setObjectName("lineEdit_rate");
        lineEdit_rate->setGeometry(QRect(420, 140, 61, 32));
        lineEdit_rate->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	color: white;\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"	background-color: #202124;\n"
"	border-radius: 6%;\n"
"	border: 1px solid #5f6368;\n"
"	font-size:  20px;\n"
"}"));
        label_loan_amount_5 = new QLabel(tab_2);
        label_loan_amount_5->setObjectName("label_loan_amount_5");
        label_loan_amount_5->setGeometry(QRect(490, 140, 41, 32));
        label_loan_amount_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color: #202124;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"	font-size:  15px;\n"
"}\n"
""));
        label_loan_amount_5->setAlignment(Qt::AlignCenter);
        radioButton_annuity = new QRadioButton(tab_2);
        radioButton_annuity->setObjectName("radioButton_annuity");
        radioButton_annuity->setGeometry(QRect(340, 200, 111, 32));
        radioButton_annuity->setStyleSheet(QString::fromUtf8("QRadioButton{\n"
"	background-color: #202124;\n"
"	border-radius: 6%;\n"
"	color: white;\n"
"}"));
        label_loan_amount_6 = new QLabel(tab_2);
        label_loan_amount_6->setObjectName("label_loan_amount_6");
        label_loan_amount_6->setGeometry(QRect(130, 200, 181, 32));
        label_loan_amount_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color: #5f6368;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"	font-size:  15px;\n"
"}\n"
""));
        label_loan_amount_6->setAlignment(Qt::AlignCenter);
        radioButton_diff = new QRadioButton(tab_2);
        radioButton_diff->setObjectName("radioButton_diff");
        radioButton_diff->setGeometry(QRect(340, 240, 141, 32));
        radioButton_diff->setStyleSheet(QString::fromUtf8("QRadioButton{\n"
"	background-color: #202124;\n"
"	border-radius: 6%;\n"
"	color: white;\n"
"}"));
        pushButton_21 = new QPushButton(tab_2);
        pushButton_21->setObjectName("pushButton_21");
        pushButton_21->setGeometry(QRect(200, 280, 181, 29));
        pushButton_21->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #8ab4f8;\n"
"	color: white;\n"
"	border-radius: 6%;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #9FC4F0;\n"
"}"));
        label_err_amount = new QLabel(tab_2);
        label_err_amount->setObjectName("label_err_amount");
        label_err_amount->setGeometry(QRect(330, 55, 151, 15));
        label_err_amount->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: red;\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"	background-color: #202124;\n"
"}\n"
""));
        label_err_term = new QLabel(tab_2);
        label_err_term->setObjectName("label_err_term");
        label_err_term->setGeometry(QRect(390, 115, 81, 15));
        label_err_term->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: red;\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"	background-color: #202124;\n"
"}\n"
""));
        label_err_rate = new QLabel(tab_2);
        label_err_rate->setObjectName("label_err_rate");
        label_err_rate->setGeometry(QRect(390, 175, 81, 15));
        label_err_rate->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: red;\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"	background-color: #202124;\n"
"}\n"
""));
        textEdit_output = new QTextEdit(tab_2);
        textEdit_output->setObjectName("textEdit_output");
        textEdit_output->setGeometry(QRect(580, 50, 451, 171));
        textEdit_output->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"	color: white;\n"
"	background-color: #202124;\n"
"	border-radius: 6%;\n"
"	border: 1px solid #5f6368;\n"
"	font-size:  20px;\n"
"}"));
        label = new QLabel(tab_2);
        label->setObjectName("label");
        label->setGeometry(QRect(590, 20, 161, 20));
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: white;\n"
"}"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(590, 230, 121, 20));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:white;\n"
"}"));
        label_over = new QLabel(tab_2);
        label_over->setObjectName("label_over");
        label_over->setGeometry(QRect(720, 230, 311, 31));
        label_over->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: white;\n"
"	background-color: #202124;\n"
"	border-radius: 6%;\n"
"	border: 1px solid #5f6368;\n"
"	font-size: 20px;\n"
"}"));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(590, 270, 121, 20));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:white;\n"
"}"));
        label_payout = new QLabel(tab_2);
        label_payout->setObjectName("label_payout");
        label_payout->setGeometry(QRect(720, 270, 311, 31));
        label_payout->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: white;\n"
"	background-color: #202124;\n"
"	border-radius: 6%;\n"
"	border: 1px solid #5f6368;\n"
"	font-size: 20px;\n"
"}"));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1020, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        LineEdit_X->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        push_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        push_ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        LineEdit_x_min->setText(QCoreApplication::translate("MainWindow", "-10", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        LineEdit_x_max->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        pushButton_eq->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        LineEdit_y_min->setText(QCoreApplication::translate("MainWindow", "-10", nullptr));
        LineEdit_y_max->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        label_x_max->setText(QCoreApplication::translate("MainWindow", "X max", nullptr));
        push_RB->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        error_field->setText(QString());
        label_y_max->setText(QCoreApplication::translate("MainWindow", "Y max", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        push_sqrt->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        pushButton_x->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        label_x_min->setText(QCoreApplication::translate("MainWindow", "X min", nullptr));
        pushButton_CE->setText(QCoreApplication::translate("MainWindow", "CE", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        label_y_min->setText(QCoreApplication::translate("MainWindow", "Y min", nullptr));
        push_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        push_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        push_deg->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        input_field->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        push_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        push_atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        push_mult->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        push_tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        push_mod->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Plot", nullptr));
        push_acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        push_asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        push_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        push_LB->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        push_log->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        label_loan_amount->setText(QCoreApplication::translate("MainWindow", "Total loan amount", nullptr));
        lineEdit_loan_amount->setText(QString());
        label_loan_amount_2->setText(QCoreApplication::translate("MainWindow", "Term", nullptr));
        lineEdit_term->setText(QString());
        label_loan_amount_3->setText(QCoreApplication::translate("MainWindow", "months", nullptr));
        label_loan_amount_4->setText(QCoreApplication::translate("MainWindow", "Interest rate", nullptr));
        lineEdit_rate->setText(QString());
        label_loan_amount_5->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        radioButton_annuity->setText(QCoreApplication::translate("MainWindow", "Annuity", nullptr));
        label_loan_amount_6->setText(QCoreApplication::translate("MainWindow", "Type of monthly payments", nullptr));
        radioButton_diff->setText(QCoreApplication::translate("MainWindow", "Differentiated", nullptr));
        pushButton_21->setText(QCoreApplication::translate("MainWindow", "CALCULATE", nullptr));
        label_err_amount->setText(QString());
        label_err_term->setText(QString());
        label_err_rate->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Monthly Payement", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Overpayment:", nullptr));
        label_over->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "Total payout:", nullptr));
        label_payout->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Credit calc", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
