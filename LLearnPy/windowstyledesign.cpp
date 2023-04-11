#include "windowstyledesign.h"

WindowStyleDesign::WindowStyleDesign(){

}

QString WindowStyleDesign::getMainWindowStyle(){
    return "QMainWindow{background-image: url(:/res/image/back.png);"
           "backgound-repeat: no-repeat;"
           "background-position: center;}";
}
