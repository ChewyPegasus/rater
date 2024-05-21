/********************************************************************************
** Form generated from reading UI file 'new_outfit.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_OUTFIT_H
#define UI_NEW_OUTFIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_New_outfit
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *typeEdit;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *colorEdit;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLineEdit *materialEdit;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QLineEdit *styleEdit;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QLineEdit *seasonEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGraphicsView *view;

    void setupUi(QDialog *New_outfit)
    {
        if (New_outfit->objectName().isEmpty())
            New_outfit->setObjectName("New_outfit");
        New_outfit->resize(430, 838);
        New_outfit->setStyleSheet(QString::fromUtf8("background-color: #FFFAE6;"));
        layoutWidget = new QWidget(New_outfit);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 411, 811));
        verticalLayout_8 = new QVBoxLayout(layoutWidget);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName("groupBox");
        groupBox->setStyleSheet(QString::fromUtf8("font: 800 italic 16pt \"Ubuntu\";"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color: #002379;"));

        verticalLayout->addWidget(label);

        typeEdit = new QLineEdit(groupBox);
        typeEdit->setObjectName("typeEdit");
        typeEdit->setStyleSheet(QString::fromUtf8(" background-color: #FF9F66;\n"
"            border-radius: 100px;\n"
"            color: green;\n"
"            font-family: CerebriSans-Regular,-apple-system,system-ui,Roboto,sans-serif;\n"
"            padding: 7px 20px;\n"
"            text-align: center;\n"
"            font-size: 16px;\n"
"border-radius: 16px;\n"
"            border-width: 0 0 4px;"));

        verticalLayout->addWidget(typeEdit);


        verticalLayout_6->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("color: #002379;"));

        verticalLayout_3->addWidget(label_3);

        colorEdit = new QLineEdit(groupBox);
        colorEdit->setObjectName("colorEdit");
        colorEdit->setStyleSheet(QString::fromUtf8("background-color: #FF9F66;\n"
"			 opacity: 0.3;\n"
"            border-radius: 100px;\n"
"            color: green;\n"
"            font-family: CerebriSans-Regular,-apple-system,system-ui,Roboto,sans-serif;\n"
"            padding: 7px 20px;\n"
"            text-align: center;\n"
"            font-size: 16px;\n"
"border-radius: 16px;\n"
"            border-width: 0 0 4px;"));

        verticalLayout_3->addWidget(colorEdit);


        verticalLayout_6->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("color: #002379;\n"
""));

        verticalLayout_4->addWidget(label_4);

        materialEdit = new QLineEdit(groupBox);
        materialEdit->setObjectName("materialEdit");
        materialEdit->setStyleSheet(QString::fromUtf8("background-color: #FF9F66;\n"
"            border-radius: 100px;\n"
"            color: green;\n"
"            font-family: CerebriSans-Regular,-apple-system,system-ui,Roboto,sans-serif;\n"
"            padding: 7px 20px;\n"
"            text-align: center;\n"
"            font-size: 16px;\n"
"border-radius: 16px;\n"
"            border-width: 0 0 4px;"));

        verticalLayout_4->addWidget(materialEdit);


        verticalLayout_6->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("color: #002379;"));

        verticalLayout_5->addWidget(label_5);

        styleEdit = new QLineEdit(groupBox);
        styleEdit->setObjectName("styleEdit");
        styleEdit->setStyleSheet(QString::fromUtf8("background-color: #FF9F66;\n"
"            border-radius: 100px;\n"
"            color: green;\n"
"            font-family: CerebriSans-Regular,-apple-system,system-ui,Roboto,sans-serif;\n"
"            padding: 7px 20px;\n"
"            text-align: center;\n"
"            font-size: 16px;\n"
"border-radius: 16px;\n"
"            border-width: 0 0 4px;"));

        verticalLayout_5->addWidget(styleEdit);


        verticalLayout_6->addLayout(verticalLayout_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("color: #002379;"));

        verticalLayout_2->addWidget(label_6);

        seasonEdit = new QLineEdit(groupBox);
        seasonEdit->setObjectName("seasonEdit");
        seasonEdit->setStyleSheet(QString::fromUtf8("background-color: #FF9F66;\n"
"            border-radius: 100px;\n"
"            color: green;\n"
"            font-family: CerebriSans-Regular,-apple-system,system-ui,Roboto,sans-serif;\n"
"            padding: 7px 20px;\n"
"            text-align: center;\n"
"            font-size: 16px;\n"
"border-radius: 16px;\n"
"            border-width: 0 0 4px;"));

        verticalLayout_2->addWidget(seasonEdit);


        verticalLayout_6->addLayout(verticalLayout_2);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #FF5F00;\n"
"            border: solid transparent;\n"
"            border-radius: 16px;\n"
"            border-width: 0 0 4px;\n"
"            color: #FFFFFF;\n"
"            font-family: din-round,sans-serif;\n"
"            font-size: 15px;\n"
"            font-weight: 700;\n"
"            letter-spacing: .8px;\n"
"            line-height: 20px;\n"
"            margin: 0;\n"
"            outline: none;\n"
"            padding: 13px 16px;\n"
"            text-align: center;\n"
"            text-transform: uppercase;\n"
"            vertical-align: middle;\n"
"            white-space: nowrap;\n"
"            width: 100%;"));

        verticalLayout_6->addWidget(pushButton);


        verticalLayout_7->addLayout(verticalLayout_6);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: #FF5F00;\n"
"            border: solid transparent;\n"
"            border-radius: 16px;\n"
"            border-width: 0 0 4px;\n"
"            color: #FFFFFF;\n"
"            font-family: din-round,sans-serif;\n"
"            font-size: 15px;\n"
"            font-weight: 700;\n"
"            letter-spacing: .8px;\n"
"            line-height: 20px;\n"
"            margin: 0;\n"
"            outline: none;\n"
"            padding: 13px 16px;\n"
"            text-align: center;\n"
"            text-transform: uppercase;\n"
"            vertical-align: middle;\n"
"            white-space: nowrap;\n"
"            width: 100%;"));

        verticalLayout_7->addWidget(pushButton_2);


        gridLayout->addLayout(verticalLayout_7, 0, 0, 1, 1);


        verticalLayout_8->addWidget(groupBox);

        view = new QGraphicsView(layoutWidget);
        view->setObjectName("view");

        verticalLayout_8->addWidget(view);


        retranslateUi(New_outfit);

        QMetaObject::connectSlotsByName(New_outfit);
    } // setupUi

    void retranslateUi(QDialog *New_outfit)
    {
        New_outfit->setWindowTitle(QCoreApplication::translate("New_outfit", "SuperPuperNew", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("New_outfit", "Type", nullptr));
        label_3->setText(QCoreApplication::translate("New_outfit", "Color", nullptr));
        label_4->setText(QCoreApplication::translate("New_outfit", "Material", nullptr));
        label_5->setText(QCoreApplication::translate("New_outfit", "Style", nullptr));
        label_6->setText(QCoreApplication::translate("New_outfit", "Season", nullptr));
        pushButton->setText(QCoreApplication::translate("New_outfit", "Add picture", nullptr));
        pushButton_2->setText(QCoreApplication::translate("New_outfit", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class New_outfit: public Ui_New_outfit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_OUTFIT_H
