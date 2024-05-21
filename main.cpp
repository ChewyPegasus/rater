#include "mainwindow.h"

#include <QApplication>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    QTimer timer;
    MainWindow::connect(&timer, &QTimer::timeout, &w, &MainWindow::timerTimeout);
    timer.start(constants::frequency * 1000);

    return a.exec();
}
