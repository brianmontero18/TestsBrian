#include "controllerexception.h"


controllerexception::controllerexception()
{
    SetValue(1);
}

controllerexception::~controllerexception()
{

}

QString controllerexception::handlerException(Exception& e)
{
    switch (e.Value())
        {
        case 1:   return QString("Controller Error");break;
        default:       return QString("Unknow Error");
    }
}
