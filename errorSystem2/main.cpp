#include <QCoreApplication>
#include <QDebug>
#include <QString>
#include "myerror.h"


void test()
{
        qDebug() << "Starting";
        try
        {
            MyError *cErr = new MyError();
            cErr->SetMessage("brian@chat.facebook.com");
            throw cErr;
        }
        catch(MyError *cErrMsg)
        {
             cErrMsg->handleError(cErrMsg);
        }

        qDebug() << "Try again";
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    test();
    return a.exec();
}
