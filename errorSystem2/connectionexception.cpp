#include "connectionexception.h"


ConnectionException::ConnectionException()
{
    SetValue(0);
}

ConnectionException::~ConnectionException()
{

}

QString ConnectionException::handlerException(Exception& e)
{
    switch (e.Value())
        {
        case 0: return QString("Connect Error");break;
        default:       return QString("Unknow Error");
    }
}
