#include <QApplication>
#include <QTimer>
#include <iostream>
#include "Printer.h"
#include "main.moc"



int main(int argc, char **argv) {
    QApplication a(argc, argv);
    Printer myPrinter;
    QTimer myTimer;
    QObject::connect(&myTimer, &QTimer::timeout, &myPrinter, &Printer::PrintFinished);
    myTimer.start(2000);
    a.exec();
}
