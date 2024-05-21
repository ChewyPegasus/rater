#include "new_outfit.h"
#include "ui_new_outfit.h"

New_outfit::New_outfit(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::New_outfit)
{
    ui->setupUi(this);

    connect(ui->pushButton, &QPushButton::clicked, this, &New_outfit::loadImage);
}

New_outfit::~New_outfit()
{
    for (bucket* e : items) {
        delete e;
    }
    delete ui;
}

void New_outfit::loadImage()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Выберите изображение"), "", tr("Изображения (*.png *.jpg *.jpeg *.bmp)"));
    if (!fileName.isEmpty()) {
        QGraphicsScene *scene = new QGraphicsScene();

        QPixmap pixmap(fileName);

        // Создание QGraphicsPixmapItem и добавление его на сцену
        QGraphicsPixmapItem *pixmapItem = new QGraphicsPixmapItem(pixmap);
        scene->addItem(pixmapItem);

        // Отображение QGraphicsView
        ui->view->setScene(scene);
        ui->view->fitInView(scene->sceneRect(), Qt::KeepAspectRatio);
        ui->view->show();
    }
}

void New_outfit::on_pushButton_2_clicked()
{
    bucket* out = new bucket;
    out->type = ui->typeEdit->text();
    out->color = ui->colorEdit->text();
    out->season = ui->seasonEdit->text();
    out->style = ui->styleEdit->text();
    out->material = ui->materialEdit->text();
    items.push_back(out);
    new_items = true;
    hide();
}

