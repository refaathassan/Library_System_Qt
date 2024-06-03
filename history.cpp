#include "history.h"

History::History() {}

void History::Save(QString user, QString pass)
{
    Momento* mem=new Momento(user,pass);
    his.push_back(mem);
}

Momento* History::Undo()
{
    if(his.isEmpty())
        return nullptr;
    else
        return his.back();
}

void History::Remove()
{
    his.pop_back();
}
