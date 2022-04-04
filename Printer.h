//
// Created by kvit on 04.04.2022.
//

#ifndef QTTEST_PRINTER_H
#define QTTEST_PRINTER_H

#include <QApplication>
#include <iostream>

class Printer : public QObject
{
    Q_OBJECT
public:
    virtual ~Printer(){}
public slots:
    void PrintFinished(){
        std::cout << "Finished!" << std::endl;
    }
};


#endif //QTTEST_PRINTER_H
