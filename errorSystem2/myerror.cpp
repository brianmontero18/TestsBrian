#include "myerror.h"
#include <QDebug>
#include <QString>


MyError::MyError(QObject *parent) :
    QObject(parent)
{
}

QString MyError::Message()
{
    return mMessage;
}

void MyError::SetMessage(QString Msg)
{
    mMessage = Msg;
}

void MyError::handleError(MyError *error)
{
    qDebug() << "MyError = " << error->Message();
}
