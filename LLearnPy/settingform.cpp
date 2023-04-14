#include "settingform.h"
#include "ui_settingform.h"

SettingForm::SettingForm(QWidget *parent) : QWidget(parent), ui(new Ui::SettingForm){
    ui->setupUi(this);
    setWindowTitle("Настройки");
    this->setMinimumSize(600,400);
    setInterfaceStyle();
}

SettingForm::~SettingForm(){
    delete ui;
}

void SettingForm::resizeEvent(QResizeEvent *event){
    Q_UNUSED(event);
    setInterfaceStyle();
}

void SettingForm::setInterfaceStyle(){
    ui->BackButton->setGeometry({20,
                                 this->height() - ui->BackButton->geometry().height() - 20,
                                 ui->BackButton->geometry().width(),
                                 ui->BackButton->geometry().height()});

    ui->BackButton->setStyleSheet("font-size: 16px; background-color: grey; border-radius:10%");
}
