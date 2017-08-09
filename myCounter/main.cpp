#include "mainwindow.h"
#include <QApplication>
#include <QTextCodec>
#include <QStyleFactory>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	QApplication::setStyle(QStyleFactory::create("fusion"));

    MainWindow w;
    w.setWindowTitle("Letter Counter --V1.0--");
    w.show();

    return a.exec();
}
