#include "llearnpy.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LLearnPy w;
    w.show();
    return a.exec();
}
