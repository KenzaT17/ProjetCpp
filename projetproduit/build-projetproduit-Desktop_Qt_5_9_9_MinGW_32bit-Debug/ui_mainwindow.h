/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *i;
    QLineEdit *m;
    QLineEdit *d;
    QLineEdit *pa;
    QLineEdit *pv;
    QLineEdit *qu;
    QPushButton *ajout;
    QWidget *tab_3;
    QGroupBox *groupBox_3;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLineEdit *mi;
    QLineEdit *mm;
    QLineEdit *md;
    QLineEdit *mpa;
    QLineEdit *mpv;
    QLineEdit *mqu;
    QPushButton *modifier;
    QWidget *tab_2;
    QTableView *tableView;
    QPushButton *afficher;
    QPushButton *pdf;
    QPushButton *statistique;
    QComboBox *comboBox;
    QWidget *tab_5;
    QTableView *tableView_2;
    QLineEdit *id_search;
    QPushButton *chercher;
    QPushButton *rupture_stock;
    QLineEdit *id_rupture;
    QWidget *tab_4;
    QPushButton *supprimer;
    QLabel *label;
    QLineEdit *si;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menugestion_produit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(880, 640);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(40, 50, 731, 421));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        horizontalLayout = new QHBoxLayout(tab);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 70, 56, 16));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 230, 81, 16));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 150, 56, 16));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(370, 70, 81, 16));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(370, 150, 71, 16));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(380, 230, 56, 16));
        i = new QLineEdit(groupBox_2);
        i->setObjectName(QStringLiteral("i"));
        i->setGeometry(QRect(140, 70, 113, 22));
        m = new QLineEdit(groupBox_2);
        m->setObjectName(QStringLiteral("m"));
        m->setGeometry(QRect(140, 150, 113, 22));
        d = new QLineEdit(groupBox_2);
        d->setObjectName(QStringLiteral("d"));
        d->setGeometry(QRect(140, 230, 113, 22));
        pa = new QLineEdit(groupBox_2);
        pa->setObjectName(QStringLiteral("pa"));
        pa->setGeometry(QRect(520, 70, 113, 22));
        pv = new QLineEdit(groupBox_2);
        pv->setObjectName(QStringLiteral("pv"));
        pv->setGeometry(QRect(520, 150, 113, 22));
        qu = new QLineEdit(groupBox_2);
        qu->setObjectName(QStringLiteral("qu"));
        qu->setGeometry(QRect(520, 230, 113, 22));
        ajout = new QPushButton(groupBox_2);
        ajout->setObjectName(QStringLiteral("ajout"));
        ajout->setGeometry(QRect(270, 290, 93, 28));

        horizontalLayout->addWidget(groupBox_2);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        groupBox_3 = new QGroupBox(tab_3);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 0, 721, 391));
        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 70, 56, 16));
        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(20, 230, 81, 16));
        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(20, 150, 56, 16));
        label_16 = new QLabel(groupBox_3);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(370, 70, 81, 16));
        label_17 = new QLabel(groupBox_3);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(370, 150, 71, 16));
        label_18 = new QLabel(groupBox_3);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(380, 230, 56, 16));
        mi = new QLineEdit(groupBox_3);
        mi->setObjectName(QStringLiteral("mi"));
        mi->setGeometry(QRect(140, 70, 113, 22));
        mm = new QLineEdit(groupBox_3);
        mm->setObjectName(QStringLiteral("mm"));
        mm->setGeometry(QRect(140, 150, 113, 22));
        md = new QLineEdit(groupBox_3);
        md->setObjectName(QStringLiteral("md"));
        md->setGeometry(QRect(140, 230, 113, 22));
        mpa = new QLineEdit(groupBox_3);
        mpa->setObjectName(QStringLiteral("mpa"));
        mpa->setGeometry(QRect(520, 70, 113, 22));
        mpv = new QLineEdit(groupBox_3);
        mpv->setObjectName(QStringLiteral("mpv"));
        mpv->setGeometry(QRect(520, 150, 113, 22));
        mqu = new QLineEdit(groupBox_3);
        mqu->setObjectName(QStringLiteral("mqu"));
        mqu->setGeometry(QRect(520, 230, 113, 22));
        modifier = new QPushButton(groupBox_3);
        modifier->setObjectName(QStringLiteral("modifier"));
        modifier->setGeometry(QRect(270, 290, 93, 28));
        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tableView = new QTableView(tab_2);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 0, 451, 281));
        afficher = new QPushButton(tab_2);
        afficher->setObjectName(QStringLiteral("afficher"));
        afficher->setGeometry(QRect(460, 50, 161, 28));
        pdf = new QPushButton(tab_2);
        pdf->setObjectName(QStringLiteral("pdf"));
        pdf->setGeometry(QRect(460, 150, 161, 28));
        statistique = new QPushButton(tab_2);
        statistique->setObjectName(QStringLiteral("statistique"));
        statistique->setGeometry(QRect(460, 210, 161, 28));
        comboBox = new QComboBox(tab_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(460, 100, 161, 31));
        tabWidget->addTab(tab_2, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tableView_2 = new QTableView(tab_5);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(270, 10, 301, 271));
        id_search = new QLineEdit(tab_5);
        id_search->setObjectName(QStringLiteral("id_search"));
        id_search->setGeometry(QRect(130, 50, 113, 22));
        chercher = new QPushButton(tab_5);
        chercher->setObjectName(QStringLiteral("chercher"));
        chercher->setGeometry(QRect(10, 50, 93, 28));
        rupture_stock = new QPushButton(tab_5);
        rupture_stock->setObjectName(QStringLiteral("rupture_stock"));
        rupture_stock->setGeometry(QRect(10, 160, 93, 28));
        id_rupture = new QLineEdit(tab_5);
        id_rupture->setObjectName(QStringLiteral("id_rupture"));
        id_rupture->setGeometry(QRect(130, 160, 113, 22));
        tabWidget->addTab(tab_5, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        supprimer = new QPushButton(tab_4);
        supprimer->setObjectName(QStringLiteral("supprimer"));
        supprimer->setGeometry(QRect(240, 210, 93, 28));
        label = new QLabel(tab_4);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 110, 201, 16));
        si = new QLineEdit(tab_4);
        si->setObjectName(QStringLiteral("si"));
        si->setGeometry(QRect(320, 110, 113, 22));
        tabWidget->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 880, 26));
        menugestion_produit = new QMenu(menubar);
        menugestion_produit->setObjectName(QStringLiteral("menugestion_produit"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menugestion_produit->menuAction());

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "id", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "description", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "nom", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "prix_achat", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "prix_vente", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "quantite", Q_NULLPTR));
        ajout->setText(QApplication::translate("MainWindow", "ajouter", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "ajouter", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "id", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "description", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "nom", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "prix_achat", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "prix_vente", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "quantite", Q_NULLPTR));
        modifier->setText(QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        afficher->setText(QApplication::translate("MainWindow", "afficher", Q_NULLPTR));
        pdf->setText(QApplication::translate("MainWindow", "PDF", Q_NULLPTR));
        statistique->setText(QApplication::translate("MainWindow", "statistique", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Trier", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Trie par ID", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Trie par quantite", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Trie par prix_d'achat", Q_NULLPTR)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "afficher", Q_NULLPTR));
        chercher->setText(QApplication::translate("MainWindow", "chercher", Q_NULLPTR));
        rupture_stock->setText(QApplication::translate("MainWindow", "Verifier rupture", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "Recherche", Q_NULLPTR));
        supprimer->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Donner un id a supprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        menugestion_produit->setTitle(QApplication::translate("MainWindow", "gestion produit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
