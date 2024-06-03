#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    connect(&base,&DataBase::UserPerrmission,this,&MainWindow::GetPermission);

    ui->setupUi(this);
    QStringList items;
    items <<"None"<<"Fantasy" << "Kids" << "Religion"<<"Romance"; // Example items
    ui->CbFilter->addItems(items);
    ui->CbFilter_2->addItems(items);
    ui->Tlogin->setTabEnabled(0,true);
    ui->Tlogin->setTabEnabled(1,false);
    ui->Tlogin->setTabEnabled(2,false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::GetPermission(QString per)
{
    if(per=="user")
    {
        ui->Tlogin->setTabEnabled(0,false);
        ui->Tlogin->setTabEnabled(1,true);
        ui->Tlogin->setTabEnabled(2,false);

    }
    else
    {
        ui->Tlogin->setTabEnabled(0,false);
        ui->Tlogin->setTabEnabled(1,false);
        ui->Tlogin->setTabEnabled(2,true);
    }
    base.SetPath("E:\\QT_ENV\\LibraryGUI\\Library\\Library.json");
    QVector<QJsonObject> vec=base.Show();
    for(auto& vv:vec)
    {
        QJsonDocument dec=QJsonDocument(vv);
        ui->LwUser->addItem(QString(dec.toJson(QJsonDocument::Compact)));
    }

}

void MainWindow::on_PbLog_2_clicked()
{

    bool flag=base.Login(ui->Leuser->text(),ui->Lepass->text());
    if(flag==false)
    {
        qDebug()<<"log did not  successed ....."<<Qt::endl;
        ui->LwState->addItem(QString("log did not  successed ....."));
    }
}


void MainWindow::on_PbExit_clicked()
{
    ui->Tlogin->setTabEnabled(0,true);
    ui->Tlogin->setTabEnabled(1,false);
    ui->Tlogin->setTabEnabled(2,false);
    base.SetPath("E:\\QT_ENV\\LibraryGUI\\Library\\users.json");
}


void MainWindow::on_Pbsearch_clicked()
{
    if(ui->CbFilter->currentText()=="None")
    {
        QJsonDocument jsonDocument(base.Search(ui->LeSearch->text()));
        ui->LwUser->addItem(QString(jsonDocument.toJson(QJsonDocument::Compact)));
    }
    else
    {
        QVector<QJsonObject> vec= base.SearchFilter(ui->CbFilter->currentText());
        for(auto& vv:vec)
        {
            QJsonDocument dec=QJsonDocument(vv);
            ui->LwUser->addItem(QString(dec.toJson(QJsonDocument::Compact)));
        }
    }
}


void MainWindow::on_pushButton_7_clicked()
{
    base.Add(ui->LeAuthor->text(),ui->LeBarcode->text(),ui->LeCategory->text(),ui->LeTitle->text());
}


void MainWindow::on_Pbsearch_2_clicked()
{
    if(ui->CbFilter_2->currentText()=="None")
    {
        QJsonDocument jsonDocument(base.Search(ui->LeSearch_2->text()));
        ui->LwUser_2->addItem(QString(jsonDocument.toJson(QJsonDocument::Compact)));
    }
    else
    {
        QVector<QJsonObject> vec= base.SearchFilter(ui->CbFilter_2->currentText());
        for(auto& vv:vec)
        {
            QJsonDocument dec=QJsonDocument(vv);
            ui->LwUser_2->addItem(QString(dec.toJson(QJsonDocument::Compact)));
        }
    }
}


void MainWindow::on_PbExit_2_clicked()
{
    ui->Tlogin->setTabEnabled(0,true);
    ui->Tlogin->setTabEnabled(1,false);
    ui->Tlogin->setTabEnabled(2,false);
    base.SetPath("E:\\QT_ENV\\LibraryGUI\\Library\\users.json");
}


void MainWindow::on_PbRestor_2_clicked()
{
    Momento* me=his.Undo();
    if(me!=nullptr)
    {
        ui->Leuser->setText(me->GetUser());
        ui->Lepass->setText(me->GetPass());
    }

}


void MainWindow::on_PbRemove_2_clicked()
{
    his.Remove();
}

void MainWindow::on_PbSAVE_clicked()
{
     his.Save(ui->Leuser->text(),ui->Lepass->text());
}


void MainWindow::on_PbDelete_clicked()
{
    base.Delete(ui->LeDelete->text());
}

