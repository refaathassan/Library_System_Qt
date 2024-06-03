#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "history.h"
#include "database.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
   void GetPermission(QString per);
private slots:

    void on_PbLog_2_clicked();

    void on_PbExit_clicked();

    void on_Pbsearch_clicked();

    void on_pushButton_7_clicked();

    void on_Pbsearch_2_clicked();

    void on_PbExit_2_clicked();

    void on_PbRestor_2_clicked();

    void on_PbRemove_2_clicked();


    void on_PbSAVE_clicked();

    void on_PbDelete_clicked();

private:
    Ui::MainWindow *ui;
    DataBase base;
    History his;

};
#endif // MAINWINDOW_H
