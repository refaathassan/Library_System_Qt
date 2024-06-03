#ifndef HISTORY_H
#define HISTORY_H
#include "momento.h"
class History
{
public:
    History();
    void Save(QString user,QString pass);
    Momento* Undo(void);
    void Remove(void);
private:
    QVector<Momento*> his;
};

#endif // HISTORY_H
