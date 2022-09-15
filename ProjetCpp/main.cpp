#include "ProjetCpp.h"
#include "StyleSelector.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    StyleSelector::setStyle(":/qss/stylesheet/ProjetCpp.qss");
//    StyleSelector::setStyle("/Users/alaabouagada/Documents/ProjetCpp/stylesheet/ProjetCpp.qss");

    QFont font("Montserrat");
    font.setStyleHint(QFont::Monospace);
    QApplication::setFont(font);

    ProjetCpp w;
    w.show();
    if(w.showLoginBox() == false){
        w.close();
        a.closeAllWindows();
        return 0;
    }


    return a.exec();
}
