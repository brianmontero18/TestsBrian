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
            //throw cErr;

            throw QString("myName@10.200.10.183");
        }
        catch(char* cerr)
        {
            qDebug() << cerr;
        }
        catch(QString sErr)
        {
            qDebug() << "The format must be" << sErr;
        }
        catch(MyError *cErrMsg)
        {
            qDebug() << "MyError = " << cErrMsg->Message();
        }
        catch(...)
        {
            qDebug() << "Unknow error has ocurred";
        }

        qDebug() << "Try again";
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    test();
    return a.exec();
}
