#ifndef LLEARNPY_H
#define LLEARNPY_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class LLearnPy; }
QT_END_NAMESPACE

class LLearnPy : public QMainWindow
{
    Q_OBJECT

public:
    LLearnPy(QWidget *parent = nullptr);
    ~LLearnPy();

private:
    Ui::LLearnPy *ui;
};
#endif // LLEARNPY_H
