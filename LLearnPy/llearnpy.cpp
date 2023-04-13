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

    ui->aboutButton->setGeometry({20,
                                  graphicsViewGeometry.height() - ui->aboutButton->geometry().height() - 20,
                                  ui->aboutButton->geometry().width(),
                                  ui->aboutButton->geometry().height()});

    ui->SettingsButton->setGeometry({graphicsViewGeometry.width() - ui->SettingsButton->geometry().width() - 20,
                                     graphicsViewGeometry.height() - ui->SettingsButton->geometry().height() - 20,
                                     ui->SettingsButton->geometry().width(),
                                     ui->SettingsButton->geometry().height()});

    ui->LectureButton->setGeometry({int(graphicsViewGeometry.width()*0.3) - int(ui->LectureButton->geometry().width()),
                                    int(graphicsViewGeometry.height() / 2) - int(ui->LectureButton->geometry().height()),
                                    ui->LectureButton->geometry().width(),
                                    ui->LectureButton->geometry().height()});

    ui->TaskButton->setGeometry({int(graphicsViewGeometry.width()*0.555) - int(ui->TaskButton->geometry().width()),
                                 int(graphicsViewGeometry.height() / 2) - int(ui->TaskButton->geometry().height()),
                                 ui->TaskButton->geometry().width(),
                                 ui->TaskButton->geometry().height()});

    ui->SandboxButton->setGeometry({int(graphicsViewGeometry.width()*0.8) - int(ui->SandboxButton->geometry().width()),
                                 int(graphicsViewGeometry.height() / 2) - int(ui->SandboxButton->geometry().height()),
                                 ui->SandboxButton->geometry().width(),
                                 ui->SandboxButton->geometry().height()});
}

void LLearnPy::setInterfaceStyle(){
    QFontDatabase::addApplicationFont(":/res/font/Lumberjack.otf");
    ui->MainLabel->setStyleSheet("color: rgb(171, 139, 56)");
    ui->aboutButton->setStyleSheet("font-size: 16px; background-color: grey; border-radius:10%");
    ui->SettingsButton->setStyleSheet("font-size: 16px; background-color: grey; border-radius:10%");
    ui->LectureButton->setStyleSheet("font-size: 26px; background-color: #519E70; border-radius:10%");
    ui->TaskButton->setStyleSheet("font-size: 26px; background-color: #519E70; border-radius:10%");
    ui->SandboxButton->setStyleSheet("font-size: 26px; background-color: #519E70; border-radius:10%");
    this->setStyleSheet(WindowStyleDesign::getMainWindowStyle());
}
