#include <QCoreApplication>
#include <QDebug>
#include <QString>
#include "exception.h"
#include "connectionexception.h"
#include "controllerexception.h"

void test(const double n)
{
    try {
        if (n < 5) throw(ConnectionException() );
        if (n == 5) throw(controllerexception() );
    }
    catch(Exception& e) {
        qDebug() << e.handlerException(e);
    }
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    test(5);
    return a.exec();
}
