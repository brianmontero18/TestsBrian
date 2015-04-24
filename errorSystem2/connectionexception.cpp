#include "connectionexception.h"
#include <iostream>

ConnectionException::ConnectionException()
{

}

ConnectionException::~ConnectionException()
{

}

void ConnectionException::handlerException()
{
    std::cout << "soy ConnectionException" << std::endl;
}
