#include "momento.h"


Momento::Momento(QString user, QString pass):user{user},pass{pass}
{

}

QString Momento::GetUser()
{
    return user;
}

QString Momento::GetPass()
{
    return pass;
}
