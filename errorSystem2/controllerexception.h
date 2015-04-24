#ifndef CONTROLLEREXCEPTION_H
#define CONTROLLEREXCEPTION_H

#include "exception.h"

class controllerexception : public Exception
{
public:
    virtual void handlerException();
    controllerexception();
    ~controllerexception();
};

#endif // CONTROLLEREXCEPTION_H
