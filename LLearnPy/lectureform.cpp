#include "lectureform.h"
#include "ui_lectureform.h"

LectureForm::LectureForm(QWidget *parent) : QWidget(parent), ui(new Ui::LectureForm){
    ui->setupUi(this);
    setWindowTitle("Лекции");
    this->setMinimumSize(600,400);
    setInterfaceStyle();
}

LectureForm::~LectureForm(){
    delete ui;
}

void LectureForm::resizeEvent(QResizeEvent *event){
    Q_UNUSED(event);
    setInterfaceStyle();
}

void LectureForm::setInterfaceStyle(){
    ui->BackButton->setGeometry({20,
                                 this->height() - ui->BackButton->geometry().height() - 20,
                                 ui->BackButton->geometry().width(),
                                 ui->BackButton->geometry().height()});
}
