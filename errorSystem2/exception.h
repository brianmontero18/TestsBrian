#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <QObject>
#include <QString>

static const int CONNECTION=0;
static const int CONTROLLER=1;

class Exception
{
public:
    //Exception(int v) : nError(v) {};
    virtual QString handlerException(Exception& e);
    int Value();
    void SetValue(int Val);


signals:

public slots:

private:
    int nError;
};

#endif // EXCEPTION_H
