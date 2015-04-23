#ifndef CONTROLLEREXCEPTION_H
#define CONTROLLEREXCEPTION_H

#include "exception.h"

class controllerexception : public Exception
{
public:
    virtual QString handlerException(Exception& e);
    controllerexception();
    ~controllerexception();
};

#endif // CONTROLLEREXCEPTION_H
