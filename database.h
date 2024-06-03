#ifndef DATABASE_H
#define DATABASE_H

#include <QApplication>
#include <QObject>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QFile>
#include <QDebug>
#include <QVector>
#include <QString>
#include <QProcess>
class DataBase : public QObject
{
    Q_OBJECT
public:
    explicit DataBase(QObject *parent = nullptr);
    bool Login(QString name,QString pass);
    void UpDate(qint32 id,QString name,qint32 age);
    void Delete(QString Bar);
    void Add(QString Auth,QString Bar,QString Cat,QString Tit);
    QVector<QJsonObject> Show(void);
    void SetPath(QString path);
    QJsonObject Search(QString name);
    QVector<QJsonObject> SearchFilter(QString Cat);
private:
    void InitDatatBase(void);
    QVector<QJsonObject> jsonVec;
    QString path;

signals:
    void UserPerrmission(QString per);
};

#endif // DATABASE_H
