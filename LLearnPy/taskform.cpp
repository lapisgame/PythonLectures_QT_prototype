#include "taskform.h"
#include "ui_taskform.h"

TaskForm::TaskForm(QWidget *parent) : QWidget(parent), ui(new Ui::TaskForm){
    ui->setupUi(this);
    setWindowTitle("Задачи");
    this->setMinimumSize(600,400);
    setInterfaceStyle();
}

TaskForm::~TaskForm(){
    delete ui;
}

void TaskForm::resizeEvent(QResizeEvent *event){
    Q_UNUSED(event);
    setInterfaceStyle();
}

void TaskForm::setInterfaceStyle(){
    ui->BackButton->setGeometry({20,
                                 this->height() - ui->BackButton->geometry().height() - 20,
                                 ui->BackButton->geometry().width(),
                                 ui->BackButton->geometry().height()});

    ui->BackButton->setStyleSheet("font-size: 16px; background-color: grey; border-radius:10%");
}
