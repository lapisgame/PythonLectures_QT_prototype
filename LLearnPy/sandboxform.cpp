#include "sandboxform.h"
#include "ui_sandboxform.h"

SandboxForm::SandboxForm(QWidget *parent) : QWidget(parent), ui(new Ui::SandboxForm){
    ui->setupUi(this);
    setWindowTitle("Песочница");
    this->setMinimumSize(600,400);
    setInterfaceStyle();
}

SandboxForm::~SandboxForm(){
    delete ui;
}

void SandboxForm::resizeEvent(QResizeEvent *event){
    Q_UNUSED(event);
    setInterfaceStyle();
}

void SandboxForm::setInterfaceStyle(){
    ui->BackButton->setGeometry({20,
                                 this->height() - ui->BackButton->geometry().height() - 20,
                                 ui->BackButton->geometry().width(),
                                 ui->BackButton->geometry().height()});

    ui->BackButton->setStyleSheet("font-size: 16px; background-color: grey; border-radius:10%");
}
