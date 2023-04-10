#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QLabel>
#include <QTextBrowser>
#include <QString>
#include <QFile>
#include <QTextEdit>
#include <QProcess>

#include "lecture_processing.h"

MainWindow::MainWindow(QWidget *parent):QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);
    lecture_processing processor;


    for (int i=0; i<5; ++i){
        ui->textBrowser->append(processor.replace("s20{r{Hello}r g{QT}g!}s20 b{KY}b"));
    }
}

MainWindow::~MainWindow(){
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString text = ui->textEdit->toPlainText();
    QFile fileOut("fileout.py");
    if(fileOut.open(QIODevice::WriteOnly))
    {
        QTextStream out(&fileOut);

        out<<text<<Qt::endl<<"input()";
        fileOut.close();
    }
    QProcess *process= new QProcess();
    process->setWorkingDirectory(".");
    process->start("cmd",QStringList()<<"/c"<<"wt python fileout.py");
}
