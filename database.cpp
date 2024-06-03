#include "database.h"

DataBase::DataBase(QObject *parent)
    : QObject{parent},path{"E:\\QT_ENV\\LibraryGUI\\Library\\users.json"}
{
    InitDatatBase();
}

bool DataBase::Login(QString name, QString pass)
{
    bool flag=false;
    InitDatatBase();
    for(auto& vv:jsonVec)
    {
        if(vv["user"].toString()==name&&vv["password"].toString()==pass)
        {
            flag=true;
            if(vv["parmission"]=="user")
            {

                emit UserPerrmission("user");
                break;
            }
            else
            {
              emit UserPerrmission("admin");
                break;
            }
        }
    }
    return flag;
}

void DataBase::Delete(QString Bar)
{
    InitDatatBase();
    QJsonArray jsonarr;
    for(auto& vv:jsonVec)
    {
        if(vv["barcode"].toString()!=Bar)
            jsonarr.append(vv);
    }
    QFile file(path);
    if(file.open(QIODevice::ReadWrite|QIODevice::Text|QIODevice::Truncate))
    {
        file.write(QJsonDocument(jsonarr).toJson());
        file.close();
    }
}

void DataBase::Add(QString Auth, QString Bar, QString Cat, QString Tit)
{
    InitDatatBase();
    QJsonObject newobj;
    newobj["author"]=Auth;
    newobj["barcode"]=Bar;
    newobj["category"]=Cat;
    newobj["title"]=Tit;
    //jsonVec.push_back(newobj);
    QJsonArray jsonarr;
    for(auto& vv:jsonVec)
    {
        jsonarr.append(vv);
    }
    jsonarr.append(newobj);
    QFile file(path);
    if(file.open(QIODevice::ReadWrite|QIODevice::Text))
    {
        file.write(QJsonDocument(jsonarr).toJson());
        file.close();
    }
}

QVector<QJsonObject> DataBase::Show()
{
    InitDatatBase();
    return jsonVec;
}

void DataBase::SetPath(QString path)
{
    this->path=path;
}

QJsonObject DataBase::Search(QString name)
{
    InitDatatBase();
    for(auto& vv:jsonVec)
    {
        if(vv["title"].toString()==name)
        {

            QString filePath ="E:/QT_ENV/LibraryGUI/Library/" +vv["barcode"].toString()+".txt";
            QProcess::startDetached("notepad.exe", QStringList() << filePath);
            return vv;

        }
    }
}

QVector<QJsonObject> DataBase::SearchFilter(QString Cat)
{
    InitDatatBase();
    QVector<QJsonObject> vec;
    for(auto& vv:jsonVec)
    {
        if(vv["category"].toString()==Cat)
        {
            vec.push_back(vv);

        }
    }
    return vec;
}

void DataBase::InitDatatBase()
{
    jsonVec.clear();
    QFile file(path);
    if(file.open(QIODevice::ReadWrite|QIODevice::Text))
    {
        QByteArray Barray=file.readAll();
        QJsonDocument Jdocument=QJsonDocument::fromJson(Barray);
        QJsonArray jsonar=Jdocument.array();
        for(auto ele:jsonar)
        {
            QJsonObject js=ele.toObject();
            jsonVec<<js;
        }
        file.close();
    }
    else
        qDebug()<<" i can not oppen this file"<<Qt::endl;
}
