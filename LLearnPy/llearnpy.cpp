#include "llearnpy.h"
#include "ui_llearnpy.h"
#include "windowstyledesign.h"
#include <QFontDatabase>

LLearnPy::LLearnPy(QWidget *parent): QMainWindow(parent), ui(new Ui::LLearnPy){
    ui->setupUi(this);
    setInterfaceStyle();
}

LLearnPy::~LLearnPy()
{
    delete ui;
}

void LLearnPy::resizeEvent(QResizeEvent *event){
    Q_UNUSED(event);
    LLearnPy::updateButtonPosition();
}

void LLearnPy::updateButtonPosition(){
    QRect graphicsViewGeometry = ui->centralwidget->geometry();
    ui->aboutButton->setGeometry({20, graphicsViewGeometry.height() - ui->aboutButton->geometry().height() - 20,
                                  ui->aboutButton->geometry().width(), ui->aboutButton->geometry().height()});

    ui->LectureButton->setGeometry({});

    ui->TaskButton->setGeometry({});

    ui->SandboxButton->setGeometry({});
}

void LLearnPy::setInterfaceStyle(){
    QFontDatabase::addApplicationFont(":/res/font/Lumberjack.otf");
    ui->MainLabel->setStyleSheet("color: rgb(171, 139, 56)");
    this->setStyleSheet(WindowStyleDesign::getMainWindowStyle());
}
