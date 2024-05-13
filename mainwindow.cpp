#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->tableView->horizontalHeader()->setDefaultSectionSize(constants::line_height);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    QStandardItemModel* model = new QStandardItemModel(0, 5);
    model->setHorizontalHeaderLabels({"Type", "Color", "Material", "Style", "Season"});
    ui->tableView->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    window = new New_outfit(this);
    window->show();
}

void MainWindow::timerTimeout() {
    if (window == nullptr || !window->new_items /* || items_cnt == window->items.size()*/) {
        return;
    } else {
        for (bucket* e : window->items) {
            QList<QStandardItem*> newRow;
            newRow << new QStandardItem(e->type);
            newRow << new QStandardItem(e->color);
            newRow << new QStandardItem(e->material);
            newRow << new QStandardItem(e->style);
            newRow << new QStandardItem(e->season);
            static_cast<QStandardItemModel*>(ui->tableView->model())->appendRow(newRow);
        }
        window->items.clear();
        window->new_items = false;
    }
}


void MainWindow::on_actionOpen_file_triggered()
{
    QFile file(QCoreApplication::applicationDirPath() + "/input.csv");
    if (file.open(QIODevice::ReadWrite)) {
        QTextStream fin(&file);
        while (!fin.atEnd()) {
            QString LineData = fin.readLine();
            QStringList data = LineData.split(",");
            QList<QStandardItem*> newRow;
            for (int i = 0; i < data.length(); i++) {
                newRow << new QStandardItem(data.at(i));
            }
            static_cast<QStandardItemModel*>(ui->tableView->model())->appendRow(newRow);
        }

    }
    file.close();
}

void clearFile(const QString &filePath) {
    QFile file(filePath);

    // Открываем файл в режиме записи, что приведет к его очистке
    if (file.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
        // Если файл успешно открыт для записи, то закрываем его
        file.close();
    } else {
        // Если не удалось открыть файл, выводим сообщение об ошибке
        qDebug() << "Не удалось очистить файл: " << file.errorString();
    }
}

void MainWindow::on_actionSave_to_file_triggered()
{
    QString path = QCoreApplication::applicationDirPath() + "/output.csv";
    clearFile(path);
    QFile file(path);
    if (file.open(QIODevice::ReadWrite | QIODevice::Append)) {
        QTextStream fout(&file);
        std::vector<QStringList> vec;
        {
            QStandardItemModel *model = static_cast<QStandardItemModel*>(ui->tableView->model());
            if (!model) {
                qDebug() << "Model isn't set";
                return;
            }

            int rowCount = model->rowCount();
            int columnCount = model->columnCount();

            // Проходим по каждой строке
            for (int row = 0; row < rowCount; ++row) {
                QStringList rowData; // Создаем QStringList для каждой строки

                // Получаем данные для текущей строки
                for (int column = 0; column < columnCount; ++column) {
                    QModelIndex index = model->index(row, column);
                    QVariant data = model->data(index);
                    rowData.append(data.toString());
                }

                // Добавляем данные строки в общий список данных
                vec.push_back(rowData);
            }
        }

        for (auto row : vec) {
            fout << row.at(0);
            for (int i = 1; i < row.length(); i++) {
                fout << "," << row.at(i);
            }
            fout << '\n';
        }
    }
    file.close();
}

