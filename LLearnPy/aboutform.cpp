#include "aboutform.h"
#include "ui_aboutform.h"

AboutForm::AboutForm(QWidget *parent) : QWidget(parent), ui(new Ui::AboutForm){
    ui->setupUi(this);
    setWindowTitle("О приложении");
    this->setMinimumSize(600,400);
    setInterfaceStyle();
}

AboutForm::~AboutForm(){
    delete ui;
}

void AboutForm::resizeEvent(QResizeEvent *event){
    Q_UNUSED(event);
    setInterfaceStyle();
}

void AboutForm::setInterfaceStyle(){
    ui->BackButton->setGeometry({20,
                                 this->height() - ui->BackButton->geometry().height() - 20,
                                 ui->BackButton->geometry().width(),
                                 ui->BackButton->geometry().height()});
    ui->BackButton->setStyleSheet("font-size: 16px; background-color: grey; border-radius:10%");
}
