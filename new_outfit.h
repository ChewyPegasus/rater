#ifndef NEW_OUTFIT_H
#define NEW_OUTFIT_H

#include <QDialog>
#include <QString>
#include <QFileDialog>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QPixmap>
#include <QGraphicsPixmapItem>
///
#include <iostream>
#include <vector>

struct bucket {
    QString type, color, season, style, material;
};

namespace Ui {
class New_outfit;
}

class New_outfit : public QDialog
{
    Q_OBJECT

public:
    explicit New_outfit(QWidget *parent = nullptr);
    ~New_outfit();

    std::vector<bucket*> items;
    bool new_items = false;

private:
    Ui::New_outfit *ui;

private slots:
    void loadImage();

    void on_pushButton_2_clicked();
};

#endif // NEW_OUTFIT_H
