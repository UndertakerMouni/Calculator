/********************************************************************************
** Form generated from reading UI file 'calculatorstandard.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATORSTANDARD_H
#define UI_CALCULATORSTANDARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculatorStandard
{
public:
    QAction *action_T;
    QAction *action_S;
    QAction *action_H;
    QAction *action_D;
    QAction *action_O;
    QAction *action_B;
    QAction *action_E;
    QAction *action_R;
    QAction *action_G;
    QAction *action_C_Ctrl_C;
    QAction *action_P_Ctrl_V;
    QAction *action_U;
    QAction *action_A;
    QWidget *centralwidget;
    QLineEdit *lineEdit_display;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Backspace;
    QPushButton *pushButton_Clear;
    QPushButton *pushButton_ClearAll;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_MC;
    QPushButton *pushButton_Seven;
    QPushButton *pushButton_Eight;
    QPushButton *pushButton_Nine;
    QPushButton *pushButton_Div;
    QPushButton *pushButton_Sqrt;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_MR;
    QPushButton *pushButton_Four;
    QPushButton *pushButton_Five;
    QPushButton *pushButton_Six;
    QPushButton *pushButton_Mul;
    QPushButton *pushButton_X_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_MS;
    QPushButton *pushButton_One;
    QPushButton *pushButton_Two;
    QPushButton *pushButton_Three;
    QPushButton *pushButton_Sub;
    QPushButton *pushButton_Derivative;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_MPlus;
    QPushButton *pushButton_Zero;
    QPushButton *pushButton_Point;
    QPushButton *pushButton_PlusMinus;
    QPushButton *pushButton_Add;
    QPushButton *pushButton_Equl;
    QMenuBar *menubar;
    QMenu *menu_V;
    QMenu *menu_E;
    QMenu *menu_H;

    void setupUi(QMainWindow *CalculatorStandard)
    {
        if (CalculatorStandard->objectName().isEmpty())
            CalculatorStandard->setObjectName(QStringLiteral("CalculatorStandard"));
        CalculatorStandard->resize(271, 280);
        action_T = new QAction(CalculatorStandard);
        action_T->setObjectName(QStringLiteral("action_T"));
        action_S = new QAction(CalculatorStandard);
        action_S->setObjectName(QStringLiteral("action_S"));
        action_H = new QAction(CalculatorStandard);
        action_H->setObjectName(QStringLiteral("action_H"));
        action_D = new QAction(CalculatorStandard);
        action_D->setObjectName(QStringLiteral("action_D"));
        action_O = new QAction(CalculatorStandard);
        action_O->setObjectName(QStringLiteral("action_O"));
        action_B = new QAction(CalculatorStandard);
        action_B->setObjectName(QStringLiteral("action_B"));
        action_E = new QAction(CalculatorStandard);
        action_E->setObjectName(QStringLiteral("action_E"));
        action_R = new QAction(CalculatorStandard);
        action_R->setObjectName(QStringLiteral("action_R"));
        action_G = new QAction(CalculatorStandard);
        action_G->setObjectName(QStringLiteral("action_G"));
        action_C_Ctrl_C = new QAction(CalculatorStandard);
        action_C_Ctrl_C->setObjectName(QStringLiteral("action_C_Ctrl_C"));
        action_P_Ctrl_V = new QAction(CalculatorStandard);
        action_P_Ctrl_V->setObjectName(QStringLiteral("action_P_Ctrl_V"));
        action_U = new QAction(CalculatorStandard);
        action_U->setObjectName(QStringLiteral("action_U"));
        action_A = new QAction(CalculatorStandard);
        action_A->setObjectName(QStringLiteral("action_A"));
        centralwidget = new QWidget(CalculatorStandard);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        lineEdit_display = new QLineEdit(centralwidget);
        lineEdit_display->setObjectName(QStringLiteral("lineEdit_display"));
        lineEdit_display->setGeometry(QRect(10, 10, 251, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\344\270\255\345\256\213"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        lineEdit_display->setFont(font);
        lineEdit_display->setLayoutDirection(Qt::LeftToRight);
        lineEdit_display->setStyleSheet(QStringLiteral("background-color: rgb(0,128,128,30);"));
        lineEdit_display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_display->setReadOnly(true);
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(9, 50, 251, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_Backspace = new QPushButton(horizontalLayoutWidget);
        pushButton_Backspace->setObjectName(QStringLiteral("pushButton_Backspace"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_Backspace->sizePolicy().hasHeightForWidth());
        pushButton_Backspace->setSizePolicy(sizePolicy);
        pushButton_Backspace->setMinimumSize(QSize(15, 15));
        pushButton_Backspace->setStyleSheet(QString::fromUtf8("color: rgb(0,100, 100);\n"
"font: 75 12pt \"\346\245\267\344\275\223\";"));

        horizontalLayout->addWidget(pushButton_Backspace);

        pushButton_Clear = new QPushButton(horizontalLayoutWidget);
        pushButton_Clear->setObjectName(QStringLiteral("pushButton_Clear"));
        sizePolicy.setHeightForWidth(pushButton_Clear->sizePolicy().hasHeightForWidth());
        pushButton_Clear->setSizePolicy(sizePolicy);
        pushButton_Clear->setMinimumSize(QSize(15, 15));
        pushButton_Clear->setStyleSheet(QString::fromUtf8("color: rgb(0,100, 100);\n"
"font: 75 12pt \"\346\245\267\344\275\223\";"));

        horizontalLayout->addWidget(pushButton_Clear);

        pushButton_ClearAll = new QPushButton(horizontalLayoutWidget);
        pushButton_ClearAll->setObjectName(QStringLiteral("pushButton_ClearAll"));
        sizePolicy.setHeightForWidth(pushButton_ClearAll->sizePolicy().hasHeightForWidth());
        pushButton_ClearAll->setSizePolicy(sizePolicy);
        pushButton_ClearAll->setMinimumSize(QSize(15, 15));
        pushButton_ClearAll->setStyleSheet(QString::fromUtf8("color: rgb(0,100, 100);\n"
"font: 75 12pt \"\346\245\267\344\275\223\";"));

        horizontalLayout->addWidget(pushButton_ClearAll);

        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 90, 251, 161));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_MC = new QPushButton(layoutWidget);
        pushButton_MC->setObjectName(QStringLiteral("pushButton_MC"));
        sizePolicy.setHeightForWidth(pushButton_MC->sizePolicy().hasHeightForWidth());
        pushButton_MC->setSizePolicy(sizePolicy);
        pushButton_MC->setMinimumSize(QSize(15, 15));
        pushButton_MC->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font: 75 12pt \"\346\245\267\344\275\223\";"));

        horizontalLayout_2->addWidget(pushButton_MC);

        pushButton_Seven = new QPushButton(layoutWidget);
        pushButton_Seven->setObjectName(QStringLiteral("pushButton_Seven"));
        sizePolicy.setHeightForWidth(pushButton_Seven->sizePolicy().hasHeightForWidth());
        pushButton_Seven->setSizePolicy(sizePolicy);
        pushButton_Seven->setMinimumSize(QSize(15, 15));
        pushButton_Seven->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"font: 75 12pt \"\346\245\267\344\275\223\";"));

        horizontalLayout_2->addWidget(pushButton_Seven);

        pushButton_Eight = new QPushButton(layoutWidget);
        pushButton_Eight->setObjectName(QStringLiteral("pushButton_Eight"));
        sizePolicy.setHeightForWidth(pushButton_Eight->sizePolicy().hasHeightForWidth());
        pushButton_Eight->setSizePolicy(sizePolicy);
        pushButton_Eight->setMinimumSize(QSize(15, 15));
        pushButton_Eight->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"font: 75 12pt \"\346\245\267\344\275\223\";"));

        horizontalLayout_2->addWidget(pushButton_Eight);

        pushButton_Nine = new QPushButton(layoutWidget);
        pushButton_Nine->setObjectName(QStringLiteral("pushButton_Nine"));
        sizePolicy.setHeightForWidth(pushButton_Nine->sizePolicy().hasHeightForWidth());
        pushButton_Nine->setSizePolicy(sizePolicy);
        pushButton_Nine->setMinimumSize(QSize(15, 15));
        pushButton_Nine->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"font: 75 12pt \"\346\245\267\344\275\223\";"));

        horizontalLayout_2->addWidget(pushButton_Nine);

        pushButton_Div = new QPushButton(layoutWidget);
        pushButton_Div->setObjectName(QStringLiteral("pushButton_Div"));
        sizePolicy.setHeightForWidth(pushButton_Div->sizePolicy().hasHeightForWidth());
        pushButton_Div->setSizePolicy(sizePolicy);
        pushButton_Div->setMinimumSize(QSize(15, 15));
        pushButton_Div->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font: 75 12pt \"\346\245\267\344\275\223\";"));

        horizontalLayout_2->addWidget(pushButton_Div);

        pushButton_Sqrt = new QPushButton(layoutWidget);
        pushButton_Sqrt->setObjectName(QStringLiteral("pushButton_Sqrt"));
        sizePolicy.setHeightForWidth(pushButton_Sqrt->sizePolicy().hasHeightForWidth());
        pushButton_Sqrt->setSizePolicy(sizePolicy);
        pushButton_Sqrt->setMinimumSize(QSize(15, 15));
        pushButton_Sqrt->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font: 75 10pt \"\346\245\267\344\275\223\";"));

        horizontalLayout_2->addWidget(pushButton_Sqrt);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_MR = new QPushButton(layoutWidget);
        pushButton_MR->setObjectName(QStringLiteral("pushButton_MR"));
        sizePolicy.setHeightForWidth(pushButton_MR->sizePolicy().hasHeightForWidth());
        pushButton_MR->setSizePolicy(sizePolicy);
        pushButton_MR->setMinimumSize(QSize(15, 15));
        pushButton_MR->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font: 75 12pt \"\346\245\267\344\275\223\";"));

        horizontalLayout_3->addWidget(pushButton_MR);

        pushButton_Four = new QPushButton(layoutWidget);
        pushButton_Four->setObjectName(QStringLiteral("pushButton_Four"));
        sizePolicy.setHeightForWidth(pushButton_Four->sizePolicy().hasHeightForWidth());
        pushButton_Four->setSizePolicy(sizePolicy);
        pushButton_Four->setMinimumSize(QSize(15, 15));
        pushButton_Four->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"font: 75 12pt \"\346\245\267\344\275\223\";"));

        horizontalLayout_3->addWidget(pushButton_Four);

        pushButton_Five = new QPushButton(layoutWidget);
        pushButton_Five->setObjectName(QStringLiteral("pushButton_Five"));
        sizePolicy.setHeightForWidth(pushButton_Five->sizePolicy().hasHeightForWidth());
        pushButton_Five->setSizePolicy(sizePolicy);
        pushButton_Five->setMinimumSize(QSize(15, 15));
        pushButton_Five->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"font: 75 12pt \"\346\245\267\344\275\223\";"));

        horizontalLayout_3->addWidget(pushButton_Five);

        pushButton_Six = new QPushButton(layoutWidget);
        pushButton_Six->setObjectName(QStringLiteral("pushButton_Six"));
        sizePolicy.setHeightForWidth(pushButton_Six->sizePolicy().hasHeightForWidth());
        pushButton_Six->setSizePolicy(sizePolicy);
        pushButton_Six->setMinimumSize(QSize(15, 15));
        pushButton_Six->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"font: 75 12pt \"\346\245\267\344\275\223\";"));

        horizontalLayout_3->addWidget(pushButton_Six);

        pushButton_Mul = new QPushButton(layoutWidget);
        pushButton_Mul->setObjectName(QStringLiteral("pushButton_Mul"));
        sizePolicy.setHeightForWidth(pushButton_Mul->sizePolicy().hasHeightForWidth());
        pushButton_Mul->setSizePolicy(sizePolicy);
        pushButton_Mul->setMinimumSize(QSize(15, 15));
        pushButton_Mul->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font: 75 12pt \"\346\245\267\344\275\223\";"));

        horizontalLayout_3->addWidget(pushButton_Mul);

        pushButton_X_2 = new QPushButton(layoutWidget);
        pushButton_X_2->setObjectName(QStringLiteral("pushButton_X_2"));
        sizePolicy.setHeightForWidth(pushButton_X_2->sizePolicy().hasHeightForWidth());
        pushButton_X_2->setSizePolicy(sizePolicy);
        pushButton_X_2->setMinimumSize(QSize(15, 15));
        pushButton_X_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font: 75 11pt \"\346\245\267\344\275\223\";"));

        horizontalLayout_3->addWidget(pushButton_X_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton_MS = new QPushButton(layoutWidget);
        pushButton_MS->setObjectName(QStringLiteral("pushButton_MS"));
        sizePolicy.setHeightForWidth(pushButton_MS->sizePolicy().hasHeightForWidth());
        pushButton_MS->setSizePolicy(sizePolicy);
        pushButton_MS->setMinimumSize(QSize(15, 15));
        pushButton_MS->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font: 75 12pt \"\346\245\267\344\275\223\";"));

        horizontalLayout_4->addWidget(pushButton_MS);

        pushButton_One = new QPushButton(layoutWidget);
        pushButton_One->setObjectName(QStringLiteral("pushButton_One"));
        sizePolicy.setHeightForWidth(pushButton_One->sizePolicy().hasHeightForWidth());
        pushButton_One->setSizePolicy(sizePolicy);
        pushButton_One->setMinimumSize(QSize(15, 15));
        pushButton_One->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"font: 75 12pt \"\346\245\267\344\275\223\";"));

        horizontalLayout_4->addWidget(pushButton_One);

        pushButton_Two = new QPushButton(layoutWidget);
        pushButton_Two->setObjectName(QStringLiteral("pushButton_Two"));
        sizePolicy.setHeightForWidth(pushButton_Two->sizePolicy().hasHeightForWidth());
        pushButton_Two->setSizePolicy(sizePolicy);
        pushButton_Two->setMinimumSize(QSize(15, 15));
        pushButton_Two->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"font: 75 12pt \"\346\245\267\344\275\223\";"));

        horizontalLayout_4->addWidget(pushButton_Two);

        pushButton_Three = new QPushButton(layoutWidget);
        pushButton_Three->setObjectName(QStringLiteral("pushButton_Three"));
        sizePolicy.setHeightForWidth(pushButton_Three->sizePolicy().hasHeightForWidth());
        pushButton_Three->setSizePolicy(sizePolicy);
        pushButton_Three->setMinimumSize(QSize(15, 15));
        pushButton_Three->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"font: 75 12pt \"\346\245\267\344\275\223\";"));

        horizontalLayout_4->addWidget(pushButton_Three);

        pushButton_Sub = new QPushButton(layoutWidget);
        pushButton_Sub->setObjectName(QStringLiteral("pushButton_Sub"));
        sizePolicy.setHeightForWidth(pushButton_Sub->sizePolicy().hasHeightForWidth());
        pushButton_Sub->setSizePolicy(sizePolicy);
        pushButton_Sub->setMinimumSize(QSize(15, 15));
        pushButton_Sub->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font: 75 12pt \"\346\245\267\344\275\223\";"));

        horizontalLayout_4->addWidget(pushButton_Sub);

        pushButton_Derivative = new QPushButton(layoutWidget);
        pushButton_Derivative->setObjectName(QStringLiteral("pushButton_Derivative"));
        sizePolicy.setHeightForWidth(pushButton_Derivative->sizePolicy().hasHeightForWidth());
        pushButton_Derivative->setSizePolicy(sizePolicy);
        pushButton_Derivative->setMinimumSize(QSize(15, 15));
        pushButton_Derivative->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font: 75 11pt \"\346\245\267\344\275\223\";"));

        horizontalLayout_4->addWidget(pushButton_Derivative);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButton_MPlus = new QPushButton(layoutWidget);
        pushButton_MPlus->setObjectName(QStringLiteral("pushButton_MPlus"));
        sizePolicy.setHeightForWidth(pushButton_MPlus->sizePolicy().hasHeightForWidth());
        pushButton_MPlus->setSizePolicy(sizePolicy);
        pushButton_MPlus->setMinimumSize(QSize(15, 15));
        pushButton_MPlus->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font: 75 12pt \"\346\245\267\344\275\223\";"));

        horizontalLayout_5->addWidget(pushButton_MPlus);

        pushButton_Zero = new QPushButton(layoutWidget);
        pushButton_Zero->setObjectName(QStringLiteral("pushButton_Zero"));
        sizePolicy.setHeightForWidth(pushButton_Zero->sizePolicy().hasHeightForWidth());
        pushButton_Zero->setSizePolicy(sizePolicy);
        pushButton_Zero->setMinimumSize(QSize(15, 15));
        pushButton_Zero->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"font: 75 12pt \"\346\245\267\344\275\223\";"));

        horizontalLayout_5->addWidget(pushButton_Zero);

        pushButton_Point = new QPushButton(layoutWidget);
        pushButton_Point->setObjectName(QStringLiteral("pushButton_Point"));
        sizePolicy.setHeightForWidth(pushButton_Point->sizePolicy().hasHeightForWidth());
        pushButton_Point->setSizePolicy(sizePolicy);
        pushButton_Point->setMinimumSize(QSize(15, 15));
        pushButton_Point->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"font: 75 12pt \"\346\245\267\344\275\223\";"));

        horizontalLayout_5->addWidget(pushButton_Point);

        pushButton_PlusMinus = new QPushButton(layoutWidget);
        pushButton_PlusMinus->setObjectName(QStringLiteral("pushButton_PlusMinus"));
        sizePolicy.setHeightForWidth(pushButton_PlusMinus->sizePolicy().hasHeightForWidth());
        pushButton_PlusMinus->setSizePolicy(sizePolicy);
        pushButton_PlusMinus->setMinimumSize(QSize(15, 15));
        pushButton_PlusMinus->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"font: 75 12pt \"\346\245\267\344\275\223\";"));

        horizontalLayout_5->addWidget(pushButton_PlusMinus);

        pushButton_Add = new QPushButton(layoutWidget);
        pushButton_Add->setObjectName(QStringLiteral("pushButton_Add"));
        sizePolicy.setHeightForWidth(pushButton_Add->sizePolicy().hasHeightForWidth());
        pushButton_Add->setSizePolicy(sizePolicy);
        pushButton_Add->setMinimumSize(QSize(15, 15));
        pushButton_Add->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font: 75 12pt \"\346\245\267\344\275\223\";"));

        horizontalLayout_5->addWidget(pushButton_Add);

        pushButton_Equl = new QPushButton(layoutWidget);
        pushButton_Equl->setObjectName(QStringLiteral("pushButton_Equl"));
        sizePolicy.setHeightForWidth(pushButton_Equl->sizePolicy().hasHeightForWidth());
        pushButton_Equl->setSizePolicy(sizePolicy);
        pushButton_Equl->setMinimumSize(QSize(15, 15));
        pushButton_Equl->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font: 75 15pt \"\346\245\267\344\275\223\";"));

        horizontalLayout_5->addWidget(pushButton_Equl);


        verticalLayout->addLayout(horizontalLayout_5);

        CalculatorStandard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CalculatorStandard);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 271, 23));
        menu_V = new QMenu(menubar);
        menu_V->setObjectName(QStringLiteral("menu_V"));
        menu_E = new QMenu(menubar);
        menu_E->setObjectName(QStringLiteral("menu_E"));
        menu_H = new QMenu(menubar);
        menu_H->setObjectName(QStringLiteral("menu_H"));
        CalculatorStandard->setMenuBar(menubar);

        menubar->addAction(menu_V->menuAction());
        menubar->addAction(menu_E->menuAction());
        menubar->addAction(menu_H->menuAction());
        menu_V->addAction(action_C_Ctrl_C);
        menu_V->addAction(action_P_Ctrl_V);
        menu_E->addAction(action_T);
        menu_E->addAction(action_S);
        menu_H->addAction(action_U);
        menu_H->addAction(action_A);

        retranslateUi(CalculatorStandard);

        QMetaObject::connectSlotsByName(CalculatorStandard);
    } // setupUi

    void retranslateUi(QMainWindow *CalculatorStandard)
    {
        CalculatorStandard->setWindowTitle(QApplication::translate("CalculatorStandard", "Calculator", 0));
        action_T->setText(QApplication::translate("CalculatorStandard", "\346\240\207\345\207\206\345\236\213(&T)", 0));
        action_S->setText(QApplication::translate("CalculatorStandard", "\347\247\221\345\255\246\345\236\213(&S)", 0));
        action_H->setText(QApplication::translate("CalculatorStandard", "\345\215\201\345\205\255\350\277\233\345\210\266(&H)", 0));
        action_D->setText(QApplication::translate("CalculatorStandard", "\345\215\201\350\277\233\345\210\266(&D)", 0));
        action_O->setText(QApplication::translate("CalculatorStandard", "\345\205\253\350\277\233\345\210\266(&O)", 0));
        action_B->setText(QApplication::translate("CalculatorStandard", "\344\272\214\350\277\233\345\210\266(&B)", 0));
        action_E->setText(QApplication::translate("CalculatorStandard", "\350\247\222\345\272\246(&E)", 0));
        action_R->setText(QApplication::translate("CalculatorStandard", "\345\274\247\345\272\246(&R)", 0));
        action_G->setText(QApplication::translate("CalculatorStandard", "\346\242\257\345\272\246(&G)", 0));
        action_C_Ctrl_C->setText(QApplication::translate("CalculatorStandard", "\345\244\215\345\210\266(&C)  Ctrl+C", 0));
        action_P_Ctrl_V->setText(QApplication::translate("CalculatorStandard", "\347\262\230\350\264\264(&P)  Ctrl+V", 0));
        action_U->setText(QApplication::translate("CalculatorStandard", "\344\275\277\347\224\250\345\270\256\345\212\251(&U)", 0));
        action_A->setText(QApplication::translate("CalculatorStandard", "\345\205\263\344\272\216\350\256\241\347\256\227\345\231\250(&A)", 0));
        lineEdit_display->setText(QApplication::translate("CalculatorStandard", "0", 0));
        pushButton_Backspace->setText(QApplication::translate("CalculatorStandard", "Backspace", 0));
        pushButton_Clear->setText(QApplication::translate("CalculatorStandard", "CE", 0));
        pushButton_ClearAll->setText(QApplication::translate("CalculatorStandard", "C", 0));
        pushButton_MC->setText(QApplication::translate("CalculatorStandard", "MC", 0));
        pushButton_Seven->setText(QApplication::translate("CalculatorStandard", "7", 0));
        pushButton_Eight->setText(QApplication::translate("CalculatorStandard", "8", 0));
        pushButton_Nine->setText(QApplication::translate("CalculatorStandard", "9", 0));
        pushButton_Div->setText(QApplication::translate("CalculatorStandard", "/", 0));
        pushButton_Sqrt->setText(QApplication::translate("CalculatorStandard", "Sqrt", 0));
        pushButton_MR->setText(QApplication::translate("CalculatorStandard", "MR", 0));
        pushButton_Four->setText(QApplication::translate("CalculatorStandard", "4", 0));
        pushButton_Five->setText(QApplication::translate("CalculatorStandard", "5", 0));
        pushButton_Six->setText(QApplication::translate("CalculatorStandard", "6", 0));
        pushButton_Mul->setText(QApplication::translate("CalculatorStandard", "*", 0));
        pushButton_X_2->setText(QApplication::translate("CalculatorStandard", "X^2", 0));
        pushButton_MS->setText(QApplication::translate("CalculatorStandard", "MS", 0));
        pushButton_One->setText(QApplication::translate("CalculatorStandard", "1", 0));
        pushButton_Two->setText(QApplication::translate("CalculatorStandard", "2", 0));
        pushButton_Three->setText(QApplication::translate("CalculatorStandard", "3", 0));
        pushButton_Sub->setText(QApplication::translate("CalculatorStandard", "-", 0));
        pushButton_Derivative->setText(QApplication::translate("CalculatorStandard", "1/X", 0));
        pushButton_MPlus->setText(QApplication::translate("CalculatorStandard", "M+", 0));
        pushButton_Zero->setText(QApplication::translate("CalculatorStandard", "0", 0));
        pushButton_Point->setText(QApplication::translate("CalculatorStandard", ".", 0));
        pushButton_PlusMinus->setText(QApplication::translate("CalculatorStandard", "+/-", 0));
        pushButton_Add->setText(QApplication::translate("CalculatorStandard", "+", 0));
        pushButton_Equl->setText(QApplication::translate("CalculatorStandard", "=", 0));
        menu_V->setTitle(QApplication::translate("CalculatorStandard", "\346\237\245\347\234\213(&V)", 0));
        menu_E->setTitle(QApplication::translate("CalculatorStandard", "\347\274\226\350\276\221(&E)", 0));
        menu_H->setTitle(QApplication::translate("CalculatorStandard", "\345\270\256\345\212\251(&H)", 0));
    } // retranslateUi

};

namespace Ui {
    class CalculatorStandard: public Ui_CalculatorStandard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATORSTANDARD_H
