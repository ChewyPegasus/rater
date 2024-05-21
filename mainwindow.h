#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableView>
#include <QHeaderView>
#include <QDialog>
#include <QStandardItemModel>
#include <QFile>
#include <QTextStream>
//
#include <iostream>
#include <vector>
//
#include "new_outfit.h"

enum constants {
    line_height = 50,
    frequency = 2,
};

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_actionOpen_file_triggered();

    void on_actionSave_to_file_triggered();

    void on_pushButton_2_clicked();

public slots:
    void timerTimeout();

private:
    Ui::MainWindow *ui;

    New_outfit* window = nullptr;

    long unsigned int items_cnt = 0;
};
#endif // MAINWINDOW_H
