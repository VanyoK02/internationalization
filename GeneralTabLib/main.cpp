#include "generaltab.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GeneralTab w;
    w.show();
    return a.exec();
}
