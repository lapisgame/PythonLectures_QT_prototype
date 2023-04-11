#include "llearnpy.h"
#include "ui_llearnpy.h"
#include "windowstyledesign.h"

LLearnPy::LLearnPy(QWidget *parent): QMainWindow(parent), ui(new Ui::LLearnPy){
    ui->setupUi(this);
    setInterfaceStyle();
}

LLearnPy::~LLearnPy()
{
    delete ui;
}

void LLearnPy::setInterfaceStyle()
{
    ui->MainLabel->setStyleSheet("color: rgb(171, 139, 56)");
    this->setStyleSheet(WindowStyleDesign::getMainWindowStyle());
}
