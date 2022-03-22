#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QtCore>
#include <QtGui>
#include <QMainWindow>
#include "projet.h"
#include <QGraphicsScene>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QGridLayout>
QT_CHARTS_USE_NAMESPACE
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    //void on_pushButton_2_clicked();

    void on_lineEdit_textChanged(const QString &arg1);


    void on_comboBox_currentIndexChanged(int index);


    void on_pushButton_2_clicked();


    void on_tableView_activated(const QModelIndex &index);

    void on_pushButton_archive_clicked();

    void on_pushremove_clicked();

    void on_tableView_2_activated(const QModelIndex &index);

    void on_tableView_doubleClicked(const QModelIndex &index);


    void on_calendarWidget_clicked(const QDate &date);




    void on_pushPDF_clicked();

    void on_Chart_clicked();


private:
    Ui::MainWindow *ui;



    Projet *ptmp;
};
#endif // MAINWINDOW_H