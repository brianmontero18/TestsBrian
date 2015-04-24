#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <QObject>
#include <QString>


class Exception
{
    public:
        virtual void handlerException() = 0;

    signals:

    public slots:

    private:
        int nError;
};

#endif // EXCEPTION_H
