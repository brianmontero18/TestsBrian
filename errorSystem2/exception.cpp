#include "exception.h"
#include <QDebug>
#include <QString>



int Exception::Value()
{
    return nError;
}

void Exception::SetValue(int Val)
{
    nError = Val;
}

QString Exception::handlerException(Exception &e)
{
    return "";
}
