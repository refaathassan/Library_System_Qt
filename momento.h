#ifndef MOMENTO_H
#define MOMENTO_H
#include<QString>
#include<QVector>
class Momento
{
public:
    Momento(QString user,QString pass);
    QString GetUser(void);
    QString GetPass(void);
private:
    QString user;
    QString pass;
};

#endif // MOMENTO_H
