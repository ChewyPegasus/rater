#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QThread>

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



std::string exec(const char* cmd) {
    std::array<char, 128> buffer;
    std::string result;
    std::unique_ptr<FILE, decltype(&pclose)> pipe(popen(cmd, "r"), pclose);
    if (!pipe) {
        throw std::runtime_error("popen() failed!");
    }
    while (fgets(buffer.data(), static_cast<int>(buffer.size()), pipe.get()) != nullptr) {
        result += buffer.data();
    }
    return result;
}


void delay()
{
    QTime dieTime= QTime::currentTime().addSecs(10);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}



void MainWindow::on_pushButton_2_clicked()
{
    std::string req = "gpt 'I want you to act as a professional stylist. You need to estimate the following outfit that consists of several elements of clothes. You are provided with general type, color, material, season, style. Evaluate compatibility between clothes and generally the quality, are they suitable for season and other patterns you will recognize. ";

    QStandardItemModel *model = static_cast<QStandardItemModel*>(ui->tableView->model());
    if (!model) {
        qDebug() << "Model isn't set";
        return;
    }

    int rowCount = model->rowCount();
    int columnCount = model->columnCount();

    // out->type = ui->typeEdit->text();
    // out->color = ui->colorEdit->text();
    // out->season = ui->seasonEdit->text();
    // out->style = ui->styleEdit->text();
    // out->material

    // Проходим по каждой строке
    for (int row = 0; row < rowCount; ++row) {
        req += "Clothes element " + std::to_string(row + 1) + "\n";
        // Получаем данные для текущей строки
        for (int column = 0; column < columnCount; ++column) {
            QModelIndex index = model->index(row, column);
            QVariant data = model->data(index);
            if (column == 0) {
                req = req + "type: " + data.toString().toStdString();
            } else if (column == 1) {
                req += " color: " + data.toString().toStdString();
            } else if (column == 2) {
                req += " season: " + data.toString().toStdString();
            } else if (column == 3) {
                req += " style: " + data.toString().toStdString();
            } else if (column == 4) {
                req += " material: " + data.toString().toStdString();
            }
            req += "\n";
        }
    }
    req += "Estimate all the above, using number from 1 to 100. Dont include any code, any comments and explanations, exactly ONE number should be in output.'";
    std::cout << req << "\n";
    std::string res = "";
    //QThread::sleep(9);
    do {
    	res = exec(req.c_str());
    	while (res.find("\n") != std::string::npos) {
        	res.replace(res.find("\n"), 1, "");
	}
	while (res.find("*") != std::string::npos) {
		res.replace(res.find("\n"), 1, "");
	}
	std::string d = "Failed to check g4f version: Version not found";
	if (res.find(d) != std::string::npos) {
		res.erase(res.find(d), d.size());
	}
    
    } while(res.size() > 2 || res.size() < 1);
    std::string content = "The coolness of outfit is " + res + "%";
    QString str = QString::fromUtf8(content.c_str());
    ui->textEdit->setText(str);
}

