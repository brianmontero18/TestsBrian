#include <QCoreApplication>
#include <QDebug>
#include <QString>
#include "exception.h"
#include "connectionexception.h"
#include "controllerexception.h"

void execute(Exception& e)
{
    e.handlerException();
}

void test(const double n)
{
    try {
        if (n < 5) throw(ConnectionException() );
        if (n == 5) throw(controllerexception() );
    }
    catch(Exception& e) {
        execute(e);
    }
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    test(4);
    return a.exec();
}
