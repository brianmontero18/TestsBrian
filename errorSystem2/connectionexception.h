#ifndef CONNECTIONEXCEPTION_H
#define CONNECTIONEXCEPTION_H

#include "exception.h"

class ConnectionException : public Exception
{
public:
    virtual QString handlerException(Exception& e);
    ConnectionException();
    ~ConnectionException();
};

#endif // CONNECTIONEXCEPTION_H
