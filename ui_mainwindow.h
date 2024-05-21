/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_file;
    QAction *actionSave_to_file;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QGroupBox *cur_outfit;
    QVBoxLayout *verticalLayout_2;
    QTableView *tableView;
    QTextEdit *textEdit;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(430, 838);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #FFFAE6;"));
        actionOpen_file = new QAction(MainWindow);
        actionOpen_file->setObjectName("actionOpen_file");
        actionSave_to_file = new QAction(MainWindow);
        actionSave_to_file->setObjectName("actionSave_to_file");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("            background-color: #FF5F00;\n"
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
"            width: 100%; "));

        verticalLayout->addWidget(pushButton);

        cur_outfit = new QGroupBox(centralwidget);
        cur_outfit->setObjectName("cur_outfit");
        cur_outfit->setStyleSheet(QString::fromUtf8("font: 800 italic 16pt \"Ubuntu\";"));
        verticalLayout_2 = new QVBoxLayout(cur_outfit);
        verticalLayout_2->setObjectName("verticalLayout_2");
        tableView = new QTableView(cur_outfit);
        tableView->setObjectName("tableView");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy);
        tableView->horizontalHeader()->setCascadingSectionResizes(true);

        verticalLayout_2->addWidget(tableView);

        textEdit = new QTextEdit(cur_outfit);
        textEdit->setObjectName("textEdit");

        verticalLayout_2->addWidget(textEdit);

        pushButton_2 = new QPushButton(cur_outfit);
        pushButton_2->setObjectName("pushButton_2");
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 35, 121, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(255, 255, 255, 128));
        brush2.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        pushButton_2->setPalette(palette);
        pushButton_2->setStyleSheet(QString::fromUtf8("            background-color: #002379;\n"
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
"            width: 100%; "));

        verticalLayout_2->addWidget(pushButton_2);


        verticalLayout->addWidget(cur_outfit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 430, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpen_file);
        menuFile->addAction(actionSave_to_file);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "SuperPuperApp", nullptr));
        actionOpen_file->setText(QCoreApplication::translate("MainWindow", "Open file", nullptr));
        actionSave_to_file->setText(QCoreApplication::translate("MainWindow", "Save to file", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "ADD CLOTHES TO OUTFIT", nullptr));
        cur_outfit->setTitle(QCoreApplication::translate("MainWindow", "Current Outfit", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Estimate Outfit", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
