#include "llearnpy.h"
#include "ui_llearnpy.h"

LLearnPy::LLearnPy(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::LLearnPy)
{
    ui->setupUi(this);
}

LLearnPy::~LLearnPy()
{
    delete ui;
}

