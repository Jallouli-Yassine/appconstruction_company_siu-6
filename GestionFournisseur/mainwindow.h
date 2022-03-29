#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "fournisseur.h"
#include <QMainWindow>
#include <QStackedWidget>
#include <QAbstractItemView>
#include <QString>
#include <QDebug>
#include <QListWidget>
#include <QMessageBox>
#include <QDate>
#include <QDateEdit>
#include <QDateTime>
#include <QCalendarWidget>
#include <QTableWidget>
#include <QTableView>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_ajouterF_clicked();

    void on_deleteFbtn_clicked();

    void on_LoadData_clicked();

    void on_updateBTN_clicked();

    void on_triBTN_clicked();

    void on_chercherID_clicked();

    void on_Ftable_activated(const QModelIndex &index);

    //void on_Ftable_activated(const QModelIndex &index);
    
    //void on_pushButton_clicked();

    void on_deleteAll_clicked();

    //void on_Ftable_5_activated(const QModelIndex &index);

    void on_Freview_activated(const QModelIndex &index);

    //void on_attributeBox_11_activated(const QString &arg1);



    void on_postReview_clicked();

    void on_pdf_clicked();

    void on_genereM_clicked();

    void on_reviewFIDMAteriele_textEdited(const QString &arg1);

    void on_genererM_clicked();

    void on_Tabmaterielle_activated(const QModelIndex &index);

    void on_genererFacture_clicked();

    void on_ajouterIntoFacture_clicked();

    void on_triBTN_2_clicked();

private:
    Ui::MainWindow *ui;
    Fournisseur F;
};
#endif // MAINWINDOW_H
