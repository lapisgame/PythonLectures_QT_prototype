#include "windowstyledesign.h"

WindowStyleDesign::WindowStyleDesign(){

}

QString WindowStyleDesign::getMainWindowStyle(){
    return "QMainWindow{background-image: url(:/res/image/back.png);"
           "background-repeat: no-repeat;"
           "background-position: center;}";
}
