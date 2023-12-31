#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "produit.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QIntValidator>
#include <QDebug>
#include <QString>
#include <QTableView>
#include <QSqlDatabase>
#include <QObject>
#include <QSqlError>
#include <QPainter>
#include <QPdfWriter>
#include <QFileDialog>

#include <QGroupBox >
#include <QVBoxLayout>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>

/*#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>

QT_CHARTS_USE_NAMESPACE*/


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),ui(new Ui::MainWindow)
{
        ui->setupUi(this);
        ui->i->setValidator ( new QIntValidator(10000000, 99999999, this));
        ui->mi->setValidator ( new QIntValidator(10000000, 9999999, this));
        ui->si->setValidator ( new QIntValidator(10000000, 9999999, this));
        ui->id_search->setValidator ( new QIntValidator(10000000, 9999999, this));
        ui->qu->setValidator ( new QIntValidator(1, 999999, this));
        ui->mqu->setValidator ( new QIntValidator(1, 999999, this));
        ui->pa->setValidator ( new QIntValidator(0, 999999, this));
        ui->mpa->setValidator ( new QIntValidator(0, 999999, this));
        ui->pv->setValidator ( new QIntValidator(0, 999999, this));
        ui->mpv->setValidator ( new QIntValidator(0, 999999, this));

    ui->tableView->setModel(p.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ajout_clicked()
{
    int id = ui->i->text().toInt();
    int quantite = ui->qu->text().toInt();
    float prix_vente = ui->pv->text().toFloat();
    float prix_achat = ui->pa->text().toFloat();
    QString description = ui->d->text();
    QString nom = ui->m->text();

    produit p(id,nom,description,prix_vente,prix_achat,quantite);
    bool test=p.ajouter();
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("Ajout Produit"),
                    QObject::tr("Produit ajouté.\n"
                                "Continuer."), QMessageBox::Cancel);
        ui->tableView->setModel(p.afficher());
    }
    else {
        QMessageBox::critical(nullptr, QObject::tr("ne pas ajouter produit"),
                    QObject::tr("Produit non ajouté.\n"
                                "Cliquer quitter."), QMessageBox::Cancel);
    }
}

void MainWindow::on_supprimer_clicked()
{

    int id=ui->si->text().toInt();
    bool test=p.supprimer(id);
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("Supprime"),
                    QObject::tr("Produit supprimé.\n"
                                "Cliquer quitter."), QMessageBox::Cancel);

        ui->tableView->setModel(p.afficher());
    }
    else {
        QMessageBox::critical(nullptr, QObject::tr("non Supprime"),
                    QObject::tr("Produit pas supprimé.\n"
                                "Cliquer quitter."), QMessageBox::Cancel);
    }
}

void MainWindow::on_afficher_clicked()
{
    ui->tableView->setModel(p.afficher());
}

void MainWindow::on_modifier_clicked()
{
    int id = ui->mi->text().toInt();
    int quantite = ui->mqu->text().toInt();
    float prix_vente = ui->mpv->text().toInt();
    float prix_achat = ui->mpa->text().toInt();
    QString description = ui->md->text();
    QString nom = ui->mm->text();

     produit p(id,nom,description,prix_vente,prix_achat,quantite);

     p.modifier();
     if(p.modifier())
     {
         QMessageBox::information(nullptr, QObject::tr("Modif produit"),
                     QObject::tr("produit modifié.\n"
                                 "Continuer."), QMessageBox::Cancel);
         ui->tableView->setModel(p.afficher());
     }
     else {
         QMessageBox::critical(nullptr, QObject::tr("Modif produit"),
                     QObject::tr("produit non modifié.\n"
                                 "Cliquer quitter."), QMessageBox::Cancel);
     }

}


void MainWindow::on_pdf_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Export PDF", "", ".pdf");
        if (fileName.isEmpty()) return; // User canceled the dialog

        QPdfWriter pdf(fileName);
        QPainter painter(&pdf);

        painter.setPen(Qt::red);
        painter.setFont(QFont("Arial", 25));
        painter.drawText(1500,1100,"List of PRODUIT");

        painter.setPen(Qt::green);
        painter.drawRect(100,100,7300,2600);

        painter.drawPixmap(QRect(7600,70,2000,2600),QPixmap("C:/Users/hp-123/Desktop/projetproduit/bijoux.JPG"));

        painter.setPen(Qt::black);
        painter.setFont(QFont("Arial", 8));
        painter.drawText(200,3300,"ID");
        painter.drawText(1100,3300,"NOM");
        painter.drawText(2100,3300,"DESCRIPTION");
        painter.drawText(3500,3300,"PRIX_VENTE");
        painter.drawText(5900,3300,"PRIX_ACHAT");
        painter.drawText(8000,3300,"QUANTITE");

        QSqlQuery query;
        query.prepare("select* from PRODUIT");
        query.exec();

        int i = 4000;
        while (query.next()) {
            painter.drawText(200,i,query.value(0).toString());
            painter.drawText(1000,i,query.value(1).toString());
            painter.drawText(2300,i,query.value(2).toString());
            painter.drawText(3200,i,query.value(3).toString());
            painter.drawText(5600,i,query.value(4).toString());
            painter.drawText(8000,i,query.value(5).toString());

            i = i + 500;
        }

        p.afficher();
        QMessageBox::information(nullptr,QObject::tr("Export PDF"),QObject::tr("Exporté avec succée"),QMessageBox::Cancel);
}

void MainWindow::on_rupture_stock_clicked()
{
    QString id=ui->id_rupture->text();
    QSqlQuery  qte ;
    qte.exec("select QUANTITE from PRODUIT where ID = " +id);
    qte.next();
    int nombreTotalStock = qte.value(0).toInt();
    if (nombreTotalStock ==0) {
            QMessageBox::critical(this, "Alerte Rupture de Stock", "Le produit est en rupture de stock !");
        } else {
            int quantiteDisponible = p. Getquantite();
            QMessageBox::information(this, "Stock disponible", "Le produit est disponible en stock."+ QString::number(quantiteDisponible));
        }
}

void MainWindow::on_statistique_clicked()
{

}

void MainWindow::on_comboBox_activated(const QString &arg1)
{



        if (arg1 == "Trier") {

               ui->tableView->setModel(p.trier(arg1));

       } else if (arg1 == "Trie par ID") {

               ui->tableView->setModel(p.trier(arg1));

       } else if (arg1 == "Trie par quantite") {

               ui->tableView->setModel(p.trier(arg1));

       } else if (arg1 == "Trie par prix_d'achat") {

                ui->tableView->setModel(p.trier(arg1));

       }

}

/*QtCharts::QBarSeries *series = new QtCharts::QBarSeries;

       for (auto it = data.begin(); it != data.end(); ++it) {
           QtCharts::QBarSet *set = new QtCharts::QBarSet(it.key());
           *set << it.value().first << it.value().second;
           series->append(set);
       }

       QtCharts::QChart *chart = new QtCharts::QChart;
          chart->setTitle("STATISTIQUES TYPES PRODUITS ETATS");
          chart->addSeries(series);
       ////////////////////////////////////////////////////////
       QStringList categories;
       categories << "RECYCLABLE" << "NON RECYCLABLE";
       QBarCategoryAxis *axis = new QBarCategoryAxis();
       axis->append(categories);
      chart->createDefaultAxes();
      chart->setAxisX(axis, series);
      //////////////////////////////////////////////
       QtCharts::QChartView *chartView = new QtCharts::QChartView(chart);
          chartView->setRenderHint(QPainter::Antialiasing);
          QWidget *widget = ui->widget_STATISTIQUE;// Create a widget to contain the chartView
          QVBoxLayout *layout = new QVBoxLayout(widget);// Create a layout for the widget (using QVBoxLayout in this case)
          layout->addWidget(chartView);// Add the chartView to the layout
           widget->show();  */

