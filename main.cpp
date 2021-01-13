#include "widget.h"
#include <QElapsedTimer>
#include <QApplication>
#include <QLabel>
#include <QMovie>
#include "ui_widget.h"
#include "QTimer"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}
