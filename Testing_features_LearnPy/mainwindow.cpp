#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QLabel>
#include <QTextBrowser>
#include <QString>
#include <QFile>

#include "lecture_processing.h"

MainWindow::MainWindow(QWidget *parent):QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);
    lecture_processing processor;


    for (int i=0; i<5; ++i){
        ui->textBrowser->append(processor.replace("s20{r{Hello} g{QT}!} b{KY}"));
    }
}

MainWindow::~MainWindow(){
    delete ui;
}

