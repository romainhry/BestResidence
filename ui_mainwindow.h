/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_9;
    QHBoxLayout *horizontalLayout_2;
    QLabel *l_icon;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *ajout_client;
    QTabWidget *onglets;
    QWidget *tab;
    QGridLayout *gridLayout_14;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_2;
    QRadioButton *ov_rb_tri_croissant;
    QLineEdit *ov_txt_ville;
    QCheckBox *ov_cbx_photo;
    QLabel *ov_lbl_date;
    QRadioButton *ov_rb_tri_decroissant;
    QGridLayout *gridLayout;
    QLabel *ov_lbl_prix;
    QLineEdit *ov_txt_prix_min;
    QLabel *ov_lbl_et1;
    QLineEdit *ov_txt_prix_max;
    QLabel *ov_lbl_pieces;
    QLineEdit *ov_txt_pieces_min;
    QLabel *ov_lbl_et2;
    QLineEdit *ov_txt_pieces_max;
    QGridLayout *gridLayout_3;
    QCheckBox *ov_cbx_appartement;
    QCheckBox *ov_cbx_ferme;
    QPushButton *ov_btn_rechercher;
    QCheckBox *ov_cbx_bureau;
    QCheckBox *ov_cbx_commerce;
    QCheckBox *ov_cbx_maison;
    QCheckBox *ov_cbx_chateau;
    QPushButton *ov_btn_stats;
    QLabel *ov_lbl_type;
    QTableWidget *tableOffreVente;
    QWidget *tab_2;
    QGridLayout *gridLayout_21;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox1;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout_6;
    QLineEdit *ol_txt_ville;
    QCheckBox *ol_cbx_photo;
    QLabel *ol_lbl_date;
    QRadioButton *ol_rb_tri_croissant;
    QRadioButton *ol_rb_tri_decroissant;
    QGridLayout *gridLayout_5;
    QLabel *ol_lbl_prix;
    QLineEdit *ol_txt_prix_min;
    QLabel *ol_lbl_et1;
    QLineEdit *ol_txt_prix_max;
    QLabel *ol_lbl_pieces;
    QLineEdit *ol_txt_pieces_min;
    QLabel *ol_lbl_et2;
    QLineEdit *ol_txt_pieces_max;
    QGridLayout *gridLayout_4;
    QLabel *ol_lbl_type;
    QCheckBox *ol_cbx_maison;
    QCheckBox *ol_cbx_chateau;
    QCheckBox *ol_cbx_appartement;
    QCheckBox *ol_cbx_ferme;
    QCheckBox *ol_cbx_bureau;
    QCheckBox *ol_cbx_commerce;
    QPushButton *ol_btn_stats;
    QPushButton *ol_btn_rechercher;
    QTableWidget *tableOffreLocation;
    QWidget *tab_3;
    QGridLayout *gridLayout_20;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *groupBox2;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout_13;
    QLineEdit *bv_txt_ville;
    QLineEdit *bv_txt_id_client;
    QLabel *bv_lbl_date;
    QDateEdit *bv_date_min;
    QLabel *bv_lbl_au;
    QDateEdit *bv_date_max;
    QHBoxLayout *horizontalLayout_8;
    QRadioButton *bv_rb_tri_croissant;
    QRadioButton *bv_rb_tri_decroissant;
    QGridLayout *gridLayout_8;
    QLabel *bv_lbl_prix;
    QLineEdit *bv_txt_prix_min;
    QLabel *bv_lbl_et1;
    QLineEdit *bv_txt_prix_max;
    QLabel *bv_lbl_pieces;
    QLineEdit *bv_txt_pieces_min;
    QLabel *bv_lbl_et2;
    QLineEdit *bv_txt_pieces_max;
    QGridLayout *gridLayout_7;
    QLabel *bv_lbl_type;
    QCheckBox *bv_cbx_maison;
    QCheckBox *bv_cbx_chateau;
    QCheckBox *bv_cbx_appartement;
    QCheckBox *bv_cbx_ferme;
    QCheckBox *bv_cbx_bureau;
    QCheckBox *bv_cbx_commerce;
    QPushButton *bv_btn_stats;
    QPushButton *bv_btn_rechercher;
    QTableWidget *tableBienVendu;
    QWidget *tab_4;
    QGridLayout *gridLayout_19;
    QVBoxLayout *verticalLayout_10;
    QGroupBox *groupBox3;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_10;
    QDateEdit *bl_date_min;
    QLineEdit *bl_txt_ville;
    QLabel *bl_lbl_date;
    QDateEdit *bl_date_max;
    QLabel *bl_lbl_au;
    QLineEdit *bl_txt_id_client;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *bl_rb_tri_croissant;
    QRadioButton *bl_rb_tri_decroissant;
    QGridLayout *gridLayout_11;
    QLabel *bl_lbl_prix;
    QLineEdit *bl_txt_prix_min;
    QLabel *bl_lbl_et1;
    QLineEdit *bl_txt_prix_max;
    QLabel *bl_lbl_pieces;
    QLineEdit *bl_txt_pieces_min;
    QLabel *bl_lbl_et2;
    QLineEdit *bl_txt_pieces_max;
    QGridLayout *gridLayout_12;
    QLabel *bl_lbl_type;
    QCheckBox *bl_cbx_maison;
    QCheckBox *bl_cbx_chateau;
    QCheckBox *bl_cbx_appartement;
    QCheckBox *bl_cbx_ferme;
    QCheckBox *bl_cbx_bureau;
    QCheckBox *bl_cbx_commerce;
    QPushButton *bl_btn_stats;
    QPushButton *bl_btn_rechercher;
    QTableWidget *tableBienLoue;
    QWidget *tab_5;
    QGridLayout *gridLayout_18;
    QVBoxLayout *verticalLayout_11;
    QGroupBox *groupBox4;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_10;
    QLineEdit *cl_txt_id_client;
    QLineEdit *cl_txt_nom;
    QLineEdit *cl_txt_ville;
    QHBoxLayout *horizontalLayout_9;
    QLabel *cl_lbl_date;
    QRadioButton *cl_rb_tri_croissant;
    QRadioButton *cl_rb_tri_decroissant;
    QHBoxLayout *horizontalLayout_7;
    QLabel *cl_lbl_nb_contrats;
    QLineEdit *cl_txt_nb_min;
    QLabel *cl_lbl_et;
    QLineEdit *cl_txt_nb_max;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *cl_btn_stats;
    QPushButton *cl_btn_rechercher;
    QTableWidget *tableClient;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(903, 550);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_9 = new QGridLayout(centralWidget);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        l_icon = new QLabel(centralWidget);
        l_icon->setObjectName(QStringLiteral("l_icon"));
        QFont font;
        font.setPointSize(29);
        l_icon->setFont(font);

        horizontalLayout_2->addWidget(l_icon);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setFlat(false);

        horizontalLayout_2->addWidget(pushButton);

        ajout_client = new QPushButton(centralWidget);
        ajout_client->setObjectName(QStringLiteral("ajout_client"));
        ajout_client->setCursor(QCursor(Qt::PointingHandCursor));
        ajout_client->setFlat(false);

        horizontalLayout_2->addWidget(ajout_client);


        gridLayout_9->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        onglets = new QTabWidget(centralWidget);
        onglets->setObjectName(QStringLiteral("onglets"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_14 = new QGridLayout(tab);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        ov_rb_tri_croissant = new QRadioButton(groupBox);
        ov_rb_tri_croissant->setObjectName(QStringLiteral("ov_rb_tri_croissant"));

        gridLayout_2->addWidget(ov_rb_tri_croissant, 1, 1, 1, 2);

        ov_txt_ville = new QLineEdit(groupBox);
        ov_txt_ville->setObjectName(QStringLiteral("ov_txt_ville"));

        gridLayout_2->addWidget(ov_txt_ville, 0, 0, 1, 2);

        ov_cbx_photo = new QCheckBox(groupBox);
        ov_cbx_photo->setObjectName(QStringLiteral("ov_cbx_photo"));

        gridLayout_2->addWidget(ov_cbx_photo, 0, 2, 1, 2);

        ov_lbl_date = new QLabel(groupBox);
        ov_lbl_date->setObjectName(QStringLiteral("ov_lbl_date"));

        gridLayout_2->addWidget(ov_lbl_date, 1, 0, 1, 1);

        ov_rb_tri_decroissant = new QRadioButton(groupBox);
        ov_rb_tri_decroissant->setObjectName(QStringLiteral("ov_rb_tri_decroissant"));

        gridLayout_2->addWidget(ov_rb_tri_decroissant, 1, 3, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        ov_lbl_prix = new QLabel(groupBox);
        ov_lbl_prix->setObjectName(QStringLiteral("ov_lbl_prix"));

        gridLayout->addWidget(ov_lbl_prix, 0, 0, 1, 1);

        ov_txt_prix_min = new QLineEdit(groupBox);
        ov_txt_prix_min->setObjectName(QStringLiteral("ov_txt_prix_min"));
        ov_txt_prix_min->setInputMethodHints(Qt::ImhNone);
        ov_txt_prix_min->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(ov_txt_prix_min, 0, 1, 1, 1);

        ov_lbl_et1 = new QLabel(groupBox);
        ov_lbl_et1->setObjectName(QStringLiteral("ov_lbl_et1"));

        gridLayout->addWidget(ov_lbl_et1, 0, 2, 1, 1);

        ov_txt_prix_max = new QLineEdit(groupBox);
        ov_txt_prix_max->setObjectName(QStringLiteral("ov_txt_prix_max"));
        ov_txt_prix_max->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(ov_txt_prix_max, 0, 3, 1, 1);

        ov_lbl_pieces = new QLabel(groupBox);
        ov_lbl_pieces->setObjectName(QStringLiteral("ov_lbl_pieces"));

        gridLayout->addWidget(ov_lbl_pieces, 1, 0, 1, 1);

        ov_txt_pieces_min = new QLineEdit(groupBox);
        ov_txt_pieces_min->setObjectName(QStringLiteral("ov_txt_pieces_min"));
        ov_txt_pieces_min->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(ov_txt_pieces_min, 1, 1, 1, 1);

        ov_lbl_et2 = new QLabel(groupBox);
        ov_lbl_et2->setObjectName(QStringLiteral("ov_lbl_et2"));

        gridLayout->addWidget(ov_lbl_et2, 1, 2, 1, 1);

        ov_txt_pieces_max = new QLineEdit(groupBox);
        ov_txt_pieces_max->setObjectName(QStringLiteral("ov_txt_pieces_max"));
        ov_txt_pieces_max->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(ov_txt_pieces_max, 1, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 2, 0, 1, 4);


        horizontalLayout->addLayout(gridLayout_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        ov_cbx_appartement = new QCheckBox(groupBox);
        ov_cbx_appartement->setObjectName(QStringLiteral("ov_cbx_appartement"));

        gridLayout_3->addWidget(ov_cbx_appartement, 1, 1, 1, 2);

        ov_cbx_ferme = new QCheckBox(groupBox);
        ov_cbx_ferme->setObjectName(QStringLiteral("ov_cbx_ferme"));

        gridLayout_3->addWidget(ov_cbx_ferme, 1, 3, 1, 1);

        ov_btn_rechercher = new QPushButton(groupBox);
        ov_btn_rechercher->setObjectName(QStringLiteral("ov_btn_rechercher"));
        ov_btn_rechercher->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_3->addWidget(ov_btn_rechercher, 3, 2, 1, 2);

        ov_cbx_bureau = new QCheckBox(groupBox);
        ov_cbx_bureau->setObjectName(QStringLiteral("ov_cbx_bureau"));

        gridLayout_3->addWidget(ov_cbx_bureau, 2, 1, 1, 2);

        ov_cbx_commerce = new QCheckBox(groupBox);
        ov_cbx_commerce->setObjectName(QStringLiteral("ov_cbx_commerce"));

        gridLayout_3->addWidget(ov_cbx_commerce, 2, 3, 1, 1);

        ov_cbx_maison = new QCheckBox(groupBox);
        ov_cbx_maison->setObjectName(QStringLiteral("ov_cbx_maison"));

        gridLayout_3->addWidget(ov_cbx_maison, 0, 1, 1, 2);

        ov_cbx_chateau = new QCheckBox(groupBox);
        ov_cbx_chateau->setObjectName(QStringLiteral("ov_cbx_chateau"));

        gridLayout_3->addWidget(ov_cbx_chateau, 0, 3, 1, 1);

        ov_btn_stats = new QPushButton(groupBox);
        ov_btn_stats->setObjectName(QStringLiteral("ov_btn_stats"));
        ov_btn_stats->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_3->addWidget(ov_btn_stats, 3, 0, 1, 2);

        ov_lbl_type = new QLabel(groupBox);
        ov_lbl_type->setObjectName(QStringLiteral("ov_lbl_type"));

        gridLayout_3->addWidget(ov_lbl_type, 0, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_3);


        verticalLayout_6->addWidget(groupBox);

        tableOffreVente = new QTableWidget(tab);
        if (tableOffreVente->columnCount() < 7)
            tableOffreVente->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableOffreVente->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableOffreVente->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableOffreVente->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableOffreVente->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableOffreVente->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableOffreVente->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableOffreVente->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableOffreVente->setObjectName(QStringLiteral("tableOffreVente"));
        tableOffreVente->setMinimumSize(QSize(831, 0));
        tableOffreVente->setShowGrid(false);
        tableOffreVente->setGridStyle(Qt::SolidLine);
        tableOffreVente->setColumnCount(7);
        tableOffreVente->verticalHeader()->setVisible(false);

        verticalLayout_6->addWidget(tableOffreVente);


        gridLayout_14->addLayout(verticalLayout_6, 0, 0, 1, 1);

        onglets->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_21 = new QGridLayout(tab_2);
        gridLayout_21->setSpacing(6);
        gridLayout_21->setContentsMargins(11, 11, 11, 11);
        gridLayout_21->setObjectName(QStringLiteral("gridLayout_21"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        groupBox1 = new QGroupBox(tab_2);
        groupBox1->setObjectName(QStringLiteral("groupBox1"));
        horizontalLayout_3 = new QHBoxLayout(groupBox1);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        ol_txt_ville = new QLineEdit(groupBox1);
        ol_txt_ville->setObjectName(QStringLiteral("ol_txt_ville"));

        gridLayout_6->addWidget(ol_txt_ville, 0, 0, 1, 2);

        ol_cbx_photo = new QCheckBox(groupBox1);
        ol_cbx_photo->setObjectName(QStringLiteral("ol_cbx_photo"));

        gridLayout_6->addWidget(ol_cbx_photo, 0, 2, 1, 2);

        ol_lbl_date = new QLabel(groupBox1);
        ol_lbl_date->setObjectName(QStringLiteral("ol_lbl_date"));

        gridLayout_6->addWidget(ol_lbl_date, 1, 0, 1, 1);

        ol_rb_tri_croissant = new QRadioButton(groupBox1);
        ol_rb_tri_croissant->setObjectName(QStringLiteral("ol_rb_tri_croissant"));

        gridLayout_6->addWidget(ol_rb_tri_croissant, 1, 1, 1, 2);

        ol_rb_tri_decroissant = new QRadioButton(groupBox1);
        ol_rb_tri_decroissant->setObjectName(QStringLiteral("ol_rb_tri_decroissant"));

        gridLayout_6->addWidget(ol_rb_tri_decroissant, 1, 3, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        ol_lbl_prix = new QLabel(groupBox1);
        ol_lbl_prix->setObjectName(QStringLiteral("ol_lbl_prix"));

        gridLayout_5->addWidget(ol_lbl_prix, 0, 0, 1, 1);

        ol_txt_prix_min = new QLineEdit(groupBox1);
        ol_txt_prix_min->setObjectName(QStringLiteral("ol_txt_prix_min"));
        ol_txt_prix_min->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(ol_txt_prix_min, 0, 1, 1, 1);

        ol_lbl_et1 = new QLabel(groupBox1);
        ol_lbl_et1->setObjectName(QStringLiteral("ol_lbl_et1"));

        gridLayout_5->addWidget(ol_lbl_et1, 0, 2, 1, 1);

        ol_txt_prix_max = new QLineEdit(groupBox1);
        ol_txt_prix_max->setObjectName(QStringLiteral("ol_txt_prix_max"));
        ol_txt_prix_max->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(ol_txt_prix_max, 0, 3, 1, 1);

        ol_lbl_pieces = new QLabel(groupBox1);
        ol_lbl_pieces->setObjectName(QStringLiteral("ol_lbl_pieces"));

        gridLayout_5->addWidget(ol_lbl_pieces, 1, 0, 1, 1);

        ol_txt_pieces_min = new QLineEdit(groupBox1);
        ol_txt_pieces_min->setObjectName(QStringLiteral("ol_txt_pieces_min"));
        ol_txt_pieces_min->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(ol_txt_pieces_min, 1, 1, 1, 1);

        ol_lbl_et2 = new QLabel(groupBox1);
        ol_lbl_et2->setObjectName(QStringLiteral("ol_lbl_et2"));

        gridLayout_5->addWidget(ol_lbl_et2, 1, 2, 1, 1);

        ol_txt_pieces_max = new QLineEdit(groupBox1);
        ol_txt_pieces_max->setObjectName(QStringLiteral("ol_txt_pieces_max"));
        ol_txt_pieces_max->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(ol_txt_pieces_max, 1, 3, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 2, 0, 1, 4);


        horizontalLayout_3->addLayout(gridLayout_6);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        ol_lbl_type = new QLabel(groupBox1);
        ol_lbl_type->setObjectName(QStringLiteral("ol_lbl_type"));

        gridLayout_4->addWidget(ol_lbl_type, 0, 0, 1, 1);

        ol_cbx_maison = new QCheckBox(groupBox1);
        ol_cbx_maison->setObjectName(QStringLiteral("ol_cbx_maison"));

        gridLayout_4->addWidget(ol_cbx_maison, 0, 1, 1, 2);

        ol_cbx_chateau = new QCheckBox(groupBox1);
        ol_cbx_chateau->setObjectName(QStringLiteral("ol_cbx_chateau"));

        gridLayout_4->addWidget(ol_cbx_chateau, 0, 3, 1, 1);

        ol_cbx_appartement = new QCheckBox(groupBox1);
        ol_cbx_appartement->setObjectName(QStringLiteral("ol_cbx_appartement"));

        gridLayout_4->addWidget(ol_cbx_appartement, 1, 1, 1, 2);

        ol_cbx_ferme = new QCheckBox(groupBox1);
        ol_cbx_ferme->setObjectName(QStringLiteral("ol_cbx_ferme"));

        gridLayout_4->addWidget(ol_cbx_ferme, 1, 3, 1, 1);

        ol_cbx_bureau = new QCheckBox(groupBox1);
        ol_cbx_bureau->setObjectName(QStringLiteral("ol_cbx_bureau"));

        gridLayout_4->addWidget(ol_cbx_bureau, 2, 1, 1, 2);

        ol_cbx_commerce = new QCheckBox(groupBox1);
        ol_cbx_commerce->setObjectName(QStringLiteral("ol_cbx_commerce"));

        gridLayout_4->addWidget(ol_cbx_commerce, 2, 3, 1, 1);

        ol_btn_stats = new QPushButton(groupBox1);
        ol_btn_stats->setObjectName(QStringLiteral("ol_btn_stats"));
        ol_btn_stats->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_4->addWidget(ol_btn_stats, 3, 0, 1, 2);

        ol_btn_rechercher = new QPushButton(groupBox1);
        ol_btn_rechercher->setObjectName(QStringLiteral("ol_btn_rechercher"));
        ol_btn_rechercher->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_4->addWidget(ol_btn_rechercher, 3, 2, 1, 2);


        horizontalLayout_3->addLayout(gridLayout_4);


        verticalLayout_7->addWidget(groupBox1);

        tableOffreLocation = new QTableWidget(tab_2);
        if (tableOffreLocation->columnCount() < 7)
            tableOffreLocation->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableOffreLocation->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableOffreLocation->setHorizontalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableOffreLocation->setHorizontalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableOffreLocation->setHorizontalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableOffreLocation->setHorizontalHeaderItem(4, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableOffreLocation->setHorizontalHeaderItem(5, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableOffreLocation->setHorizontalHeaderItem(6, __qtablewidgetitem13);
        tableOffreLocation->setObjectName(QStringLiteral("tableOffreLocation"));
        tableOffreLocation->setMinimumSize(QSize(831, 0));
        tableOffreLocation->setShowGrid(false);
        tableOffreLocation->setGridStyle(Qt::SolidLine);
        tableOffreLocation->setColumnCount(7);
        tableOffreLocation->verticalHeader()->setVisible(false);

        verticalLayout_7->addWidget(tableOffreLocation);


        gridLayout_21->addLayout(verticalLayout_7, 0, 0, 1, 1);

        onglets->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_20 = new QGridLayout(tab_3);
        gridLayout_20->setSpacing(6);
        gridLayout_20->setContentsMargins(11, 11, 11, 11);
        gridLayout_20->setObjectName(QStringLiteral("gridLayout_20"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        groupBox2 = new QGroupBox(tab_3);
        groupBox2->setObjectName(QStringLiteral("groupBox2"));
        horizontalLayout_4 = new QHBoxLayout(groupBox2);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        gridLayout_13 = new QGridLayout();
        gridLayout_13->setSpacing(6);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        bv_txt_ville = new QLineEdit(groupBox2);
        bv_txt_ville->setObjectName(QStringLiteral("bv_txt_ville"));

        gridLayout_13->addWidget(bv_txt_ville, 0, 0, 1, 2);

        bv_txt_id_client = new QLineEdit(groupBox2);
        bv_txt_id_client->setObjectName(QStringLiteral("bv_txt_id_client"));

        gridLayout_13->addWidget(bv_txt_id_client, 0, 2, 1, 3);

        bv_lbl_date = new QLabel(groupBox2);
        bv_lbl_date->setObjectName(QStringLiteral("bv_lbl_date"));

        gridLayout_13->addWidget(bv_lbl_date, 1, 0, 1, 1);

        bv_date_min = new QDateEdit(groupBox2);
        bv_date_min->setObjectName(QStringLiteral("bv_date_min"));

        gridLayout_13->addWidget(bv_date_min, 1, 1, 1, 2);

        bv_lbl_au = new QLabel(groupBox2);
        bv_lbl_au->setObjectName(QStringLiteral("bv_lbl_au"));

        gridLayout_13->addWidget(bv_lbl_au, 1, 3, 1, 1);

        bv_date_max = new QDateEdit(groupBox2);
        bv_date_max->setObjectName(QStringLiteral("bv_date_max"));

        gridLayout_13->addWidget(bv_date_max, 1, 4, 1, 1);


        verticalLayout_4->addLayout(gridLayout_13);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        bv_rb_tri_croissant = new QRadioButton(groupBox2);
        bv_rb_tri_croissant->setObjectName(QStringLiteral("bv_rb_tri_croissant"));

        horizontalLayout_8->addWidget(bv_rb_tri_croissant);

        bv_rb_tri_decroissant = new QRadioButton(groupBox2);
        bv_rb_tri_decroissant->setObjectName(QStringLiteral("bv_rb_tri_decroissant"));

        horizontalLayout_8->addWidget(bv_rb_tri_decroissant);


        verticalLayout_4->addLayout(horizontalLayout_8);


        verticalLayout_5->addLayout(verticalLayout_4);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        bv_lbl_prix = new QLabel(groupBox2);
        bv_lbl_prix->setObjectName(QStringLiteral("bv_lbl_prix"));

        gridLayout_8->addWidget(bv_lbl_prix, 0, 0, 1, 1);

        bv_txt_prix_min = new QLineEdit(groupBox2);
        bv_txt_prix_min->setObjectName(QStringLiteral("bv_txt_prix_min"));
        bv_txt_prix_min->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(bv_txt_prix_min, 0, 1, 1, 1);

        bv_lbl_et1 = new QLabel(groupBox2);
        bv_lbl_et1->setObjectName(QStringLiteral("bv_lbl_et1"));

        gridLayout_8->addWidget(bv_lbl_et1, 0, 2, 1, 1);

        bv_txt_prix_max = new QLineEdit(groupBox2);
        bv_txt_prix_max->setObjectName(QStringLiteral("bv_txt_prix_max"));
        bv_txt_prix_max->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(bv_txt_prix_max, 0, 3, 1, 1);

        bv_lbl_pieces = new QLabel(groupBox2);
        bv_lbl_pieces->setObjectName(QStringLiteral("bv_lbl_pieces"));

        gridLayout_8->addWidget(bv_lbl_pieces, 1, 0, 1, 1);

        bv_txt_pieces_min = new QLineEdit(groupBox2);
        bv_txt_pieces_min->setObjectName(QStringLiteral("bv_txt_pieces_min"));
        bv_txt_pieces_min->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(bv_txt_pieces_min, 1, 1, 1, 1);

        bv_lbl_et2 = new QLabel(groupBox2);
        bv_lbl_et2->setObjectName(QStringLiteral("bv_lbl_et2"));

        gridLayout_8->addWidget(bv_lbl_et2, 1, 2, 1, 1);

        bv_txt_pieces_max = new QLineEdit(groupBox2);
        bv_txt_pieces_max->setObjectName(QStringLiteral("bv_txt_pieces_max"));
        bv_txt_pieces_max->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(bv_txt_pieces_max, 1, 3, 1, 1);


        verticalLayout_5->addLayout(gridLayout_8);


        horizontalLayout_4->addLayout(verticalLayout_5);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        bv_lbl_type = new QLabel(groupBox2);
        bv_lbl_type->setObjectName(QStringLiteral("bv_lbl_type"));

        gridLayout_7->addWidget(bv_lbl_type, 0, 0, 1, 1);

        bv_cbx_maison = new QCheckBox(groupBox2);
        bv_cbx_maison->setObjectName(QStringLiteral("bv_cbx_maison"));

        gridLayout_7->addWidget(bv_cbx_maison, 0, 1, 1, 2);

        bv_cbx_chateau = new QCheckBox(groupBox2);
        bv_cbx_chateau->setObjectName(QStringLiteral("bv_cbx_chateau"));

        gridLayout_7->addWidget(bv_cbx_chateau, 0, 3, 1, 1);

        bv_cbx_appartement = new QCheckBox(groupBox2);
        bv_cbx_appartement->setObjectName(QStringLiteral("bv_cbx_appartement"));

        gridLayout_7->addWidget(bv_cbx_appartement, 1, 1, 1, 2);

        bv_cbx_ferme = new QCheckBox(groupBox2);
        bv_cbx_ferme->setObjectName(QStringLiteral("bv_cbx_ferme"));

        gridLayout_7->addWidget(bv_cbx_ferme, 1, 3, 1, 1);

        bv_cbx_bureau = new QCheckBox(groupBox2);
        bv_cbx_bureau->setObjectName(QStringLiteral("bv_cbx_bureau"));

        gridLayout_7->addWidget(bv_cbx_bureau, 2, 1, 1, 2);

        bv_cbx_commerce = new QCheckBox(groupBox2);
        bv_cbx_commerce->setObjectName(QStringLiteral("bv_cbx_commerce"));

        gridLayout_7->addWidget(bv_cbx_commerce, 2, 3, 1, 1);

        bv_btn_stats = new QPushButton(groupBox2);
        bv_btn_stats->setObjectName(QStringLiteral("bv_btn_stats"));
        bv_btn_stats->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_7->addWidget(bv_btn_stats, 3, 0, 1, 2);

        bv_btn_rechercher = new QPushButton(groupBox2);
        bv_btn_rechercher->setObjectName(QStringLiteral("bv_btn_rechercher"));
        bv_btn_rechercher->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_7->addWidget(bv_btn_rechercher, 3, 2, 1, 2);


        horizontalLayout_4->addLayout(gridLayout_7);


        verticalLayout_9->addWidget(groupBox2);

        tableBienVendu = new QTableWidget(tab_3);
        if (tableBienVendu->columnCount() < 8)
            tableBienVendu->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableBienVendu->setHorizontalHeaderItem(0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableBienVendu->setHorizontalHeaderItem(1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableBienVendu->setHorizontalHeaderItem(2, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableBienVendu->setHorizontalHeaderItem(3, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableBienVendu->setHorizontalHeaderItem(4, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableBienVendu->setHorizontalHeaderItem(5, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableBienVendu->setHorizontalHeaderItem(6, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableBienVendu->setHorizontalHeaderItem(7, __qtablewidgetitem21);
        tableBienVendu->setObjectName(QStringLiteral("tableBienVendu"));
        tableBienVendu->setMinimumSize(QSize(831, 0));
        tableBienVendu->setShowGrid(false);
        tableBienVendu->setGridStyle(Qt::SolidLine);
        tableBienVendu->setColumnCount(8);
        tableBienVendu->verticalHeader()->setVisible(false);

        verticalLayout_9->addWidget(tableBienVendu);


        gridLayout_20->addLayout(verticalLayout_9, 0, 0, 1, 1);

        onglets->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        gridLayout_19 = new QGridLayout(tab_4);
        gridLayout_19->setSpacing(6);
        gridLayout_19->setContentsMargins(11, 11, 11, 11);
        gridLayout_19->setObjectName(QStringLiteral("gridLayout_19"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        groupBox3 = new QGroupBox(tab_4);
        groupBox3->setObjectName(QStringLiteral("groupBox3"));
        horizontalLayout_6 = new QHBoxLayout(groupBox3);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(6);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        bl_date_min = new QDateEdit(groupBox3);
        bl_date_min->setObjectName(QStringLiteral("bl_date_min"));

        gridLayout_10->addWidget(bl_date_min, 1, 1, 1, 2);

        bl_txt_ville = new QLineEdit(groupBox3);
        bl_txt_ville->setObjectName(QStringLiteral("bl_txt_ville"));

        gridLayout_10->addWidget(bl_txt_ville, 0, 0, 1, 2);

        bl_lbl_date = new QLabel(groupBox3);
        bl_lbl_date->setObjectName(QStringLiteral("bl_lbl_date"));

        gridLayout_10->addWidget(bl_lbl_date, 1, 0, 1, 1);

        bl_date_max = new QDateEdit(groupBox3);
        bl_date_max->setObjectName(QStringLiteral("bl_date_max"));

        gridLayout_10->addWidget(bl_date_max, 1, 4, 1, 1);

        bl_lbl_au = new QLabel(groupBox3);
        bl_lbl_au->setObjectName(QStringLiteral("bl_lbl_au"));

        gridLayout_10->addWidget(bl_lbl_au, 1, 3, 1, 1);

        bl_txt_id_client = new QLineEdit(groupBox3);
        bl_txt_id_client->setObjectName(QStringLiteral("bl_txt_id_client"));
        bl_txt_id_client->setInputMethodHints(Qt::ImhNone);

        gridLayout_10->addWidget(bl_txt_id_client, 0, 2, 1, 3);


        verticalLayout_2->addLayout(gridLayout_10);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        bl_rb_tri_croissant = new QRadioButton(groupBox3);
        bl_rb_tri_croissant->setObjectName(QStringLiteral("bl_rb_tri_croissant"));

        horizontalLayout_5->addWidget(bl_rb_tri_croissant);

        bl_rb_tri_decroissant = new QRadioButton(groupBox3);
        bl_rb_tri_decroissant->setObjectName(QStringLiteral("bl_rb_tri_decroissant"));

        horizontalLayout_5->addWidget(bl_rb_tri_decroissant);


        verticalLayout_2->addLayout(horizontalLayout_5);


        verticalLayout_3->addLayout(verticalLayout_2);

        gridLayout_11 = new QGridLayout();
        gridLayout_11->setSpacing(6);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        bl_lbl_prix = new QLabel(groupBox3);
        bl_lbl_prix->setObjectName(QStringLiteral("bl_lbl_prix"));

        gridLayout_11->addWidget(bl_lbl_prix, 0, 0, 1, 1);

        bl_txt_prix_min = new QLineEdit(groupBox3);
        bl_txt_prix_min->setObjectName(QStringLiteral("bl_txt_prix_min"));
        bl_txt_prix_min->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(bl_txt_prix_min, 0, 1, 1, 1);

        bl_lbl_et1 = new QLabel(groupBox3);
        bl_lbl_et1->setObjectName(QStringLiteral("bl_lbl_et1"));

        gridLayout_11->addWidget(bl_lbl_et1, 0, 2, 1, 1);

        bl_txt_prix_max = new QLineEdit(groupBox3);
        bl_txt_prix_max->setObjectName(QStringLiteral("bl_txt_prix_max"));
        bl_txt_prix_max->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(bl_txt_prix_max, 0, 3, 1, 1);

        bl_lbl_pieces = new QLabel(groupBox3);
        bl_lbl_pieces->setObjectName(QStringLiteral("bl_lbl_pieces"));

        gridLayout_11->addWidget(bl_lbl_pieces, 1, 0, 1, 1);

        bl_txt_pieces_min = new QLineEdit(groupBox3);
        bl_txt_pieces_min->setObjectName(QStringLiteral("bl_txt_pieces_min"));
        bl_txt_pieces_min->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(bl_txt_pieces_min, 1, 1, 1, 1);

        bl_lbl_et2 = new QLabel(groupBox3);
        bl_lbl_et2->setObjectName(QStringLiteral("bl_lbl_et2"));

        gridLayout_11->addWidget(bl_lbl_et2, 1, 2, 1, 1);

        bl_txt_pieces_max = new QLineEdit(groupBox3);
        bl_txt_pieces_max->setObjectName(QStringLiteral("bl_txt_pieces_max"));
        bl_txt_pieces_max->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(bl_txt_pieces_max, 1, 3, 1, 1);


        verticalLayout_3->addLayout(gridLayout_11);


        horizontalLayout_6->addLayout(verticalLayout_3);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setSpacing(6);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        bl_lbl_type = new QLabel(groupBox3);
        bl_lbl_type->setObjectName(QStringLiteral("bl_lbl_type"));

        gridLayout_12->addWidget(bl_lbl_type, 0, 0, 1, 1);

        bl_cbx_maison = new QCheckBox(groupBox3);
        bl_cbx_maison->setObjectName(QStringLiteral("bl_cbx_maison"));

        gridLayout_12->addWidget(bl_cbx_maison, 0, 1, 1, 2);

        bl_cbx_chateau = new QCheckBox(groupBox3);
        bl_cbx_chateau->setObjectName(QStringLiteral("bl_cbx_chateau"));

        gridLayout_12->addWidget(bl_cbx_chateau, 0, 3, 1, 1);

        bl_cbx_appartement = new QCheckBox(groupBox3);
        bl_cbx_appartement->setObjectName(QStringLiteral("bl_cbx_appartement"));

        gridLayout_12->addWidget(bl_cbx_appartement, 1, 1, 1, 2);

        bl_cbx_ferme = new QCheckBox(groupBox3);
        bl_cbx_ferme->setObjectName(QStringLiteral("bl_cbx_ferme"));

        gridLayout_12->addWidget(bl_cbx_ferme, 1, 3, 1, 1);

        bl_cbx_bureau = new QCheckBox(groupBox3);
        bl_cbx_bureau->setObjectName(QStringLiteral("bl_cbx_bureau"));

        gridLayout_12->addWidget(bl_cbx_bureau, 2, 1, 1, 2);

        bl_cbx_commerce = new QCheckBox(groupBox3);
        bl_cbx_commerce->setObjectName(QStringLiteral("bl_cbx_commerce"));

        gridLayout_12->addWidget(bl_cbx_commerce, 2, 3, 1, 1);

        bl_btn_stats = new QPushButton(groupBox3);
        bl_btn_stats->setObjectName(QStringLiteral("bl_btn_stats"));
        bl_btn_stats->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_12->addWidget(bl_btn_stats, 3, 0, 1, 2);

        bl_btn_rechercher = new QPushButton(groupBox3);
        bl_btn_rechercher->setObjectName(QStringLiteral("bl_btn_rechercher"));
        bl_btn_rechercher->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_12->addWidget(bl_btn_rechercher, 3, 2, 1, 2);


        horizontalLayout_6->addLayout(gridLayout_12);


        verticalLayout_10->addWidget(groupBox3);

        tableBienLoue = new QTableWidget(tab_4);
        if (tableBienLoue->columnCount() < 8)
            tableBienLoue->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableBienLoue->setHorizontalHeaderItem(0, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableBienLoue->setHorizontalHeaderItem(1, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableBienLoue->setHorizontalHeaderItem(2, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableBienLoue->setHorizontalHeaderItem(3, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableBienLoue->setHorizontalHeaderItem(4, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableBienLoue->setHorizontalHeaderItem(5, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableBienLoue->setHorizontalHeaderItem(6, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableBienLoue->setHorizontalHeaderItem(7, __qtablewidgetitem29);
        tableBienLoue->setObjectName(QStringLiteral("tableBienLoue"));
        tableBienLoue->setMinimumSize(QSize(831, 0));
        tableBienLoue->setShowGrid(false);
        tableBienLoue->setGridStyle(Qt::SolidLine);
        tableBienLoue->setColumnCount(8);
        tableBienLoue->verticalHeader()->setVisible(false);

        verticalLayout_10->addWidget(tableBienLoue);


        gridLayout_19->addLayout(verticalLayout_10, 0, 0, 1, 1);

        onglets->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        gridLayout_18 = new QGridLayout(tab_5);
        gridLayout_18->setSpacing(6);
        gridLayout_18->setContentsMargins(11, 11, 11, 11);
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        groupBox4 = new QGroupBox(tab_5);
        groupBox4->setObjectName(QStringLiteral("groupBox4"));
        horizontalLayout_12 = new QHBoxLayout(groupBox4);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        cl_txt_id_client = new QLineEdit(groupBox4);
        cl_txt_id_client->setObjectName(QStringLiteral("cl_txt_id_client"));

        horizontalLayout_10->addWidget(cl_txt_id_client);

        cl_txt_nom = new QLineEdit(groupBox4);
        cl_txt_nom->setObjectName(QStringLiteral("cl_txt_nom"));

        horizontalLayout_10->addWidget(cl_txt_nom);

        cl_txt_ville = new QLineEdit(groupBox4);
        cl_txt_ville->setObjectName(QStringLiteral("cl_txt_ville"));

        horizontalLayout_10->addWidget(cl_txt_ville);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        cl_lbl_date = new QLabel(groupBox4);
        cl_lbl_date->setObjectName(QStringLiteral("cl_lbl_date"));

        horizontalLayout_9->addWidget(cl_lbl_date);

        cl_rb_tri_croissant = new QRadioButton(groupBox4);
        cl_rb_tri_croissant->setObjectName(QStringLiteral("cl_rb_tri_croissant"));

        horizontalLayout_9->addWidget(cl_rb_tri_croissant);

        cl_rb_tri_decroissant = new QRadioButton(groupBox4);
        cl_rb_tri_decroissant->setObjectName(QStringLiteral("cl_rb_tri_decroissant"));

        horizontalLayout_9->addWidget(cl_rb_tri_decroissant);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        cl_lbl_nb_contrats = new QLabel(groupBox4);
        cl_lbl_nb_contrats->setObjectName(QStringLiteral("cl_lbl_nb_contrats"));

        horizontalLayout_7->addWidget(cl_lbl_nb_contrats);

        cl_txt_nb_min = new QLineEdit(groupBox4);
        cl_txt_nb_min->setObjectName(QStringLiteral("cl_txt_nb_min"));
        cl_txt_nb_min->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(cl_txt_nb_min);

        cl_lbl_et = new QLabel(groupBox4);
        cl_lbl_et->setObjectName(QStringLiteral("cl_lbl_et"));

        horizontalLayout_7->addWidget(cl_lbl_et);

        cl_txt_nb_max = new QLineEdit(groupBox4);
        cl_txt_nb_max->setObjectName(QStringLiteral("cl_txt_nb_max"));
        cl_txt_nb_max->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(cl_txt_nb_max);


        verticalLayout->addLayout(horizontalLayout_7);


        horizontalLayout_12->addLayout(verticalLayout);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        cl_btn_stats = new QPushButton(groupBox4);
        cl_btn_stats->setObjectName(QStringLiteral("cl_btn_stats"));

        horizontalLayout_11->addWidget(cl_btn_stats);

        cl_btn_rechercher = new QPushButton(groupBox4);
        cl_btn_rechercher->setObjectName(QStringLiteral("cl_btn_rechercher"));

        horizontalLayout_11->addWidget(cl_btn_rechercher);


        horizontalLayout_12->addLayout(horizontalLayout_11);


        verticalLayout_11->addWidget(groupBox4);

        tableClient = new QTableWidget(tab_5);
        if (tableClient->columnCount() < 6)
            tableClient->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableClient->setHorizontalHeaderItem(0, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableClient->setHorizontalHeaderItem(1, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableClient->setHorizontalHeaderItem(2, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableClient->setHorizontalHeaderItem(3, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableClient->setHorizontalHeaderItem(4, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableClient->setHorizontalHeaderItem(5, __qtablewidgetitem35);
        tableClient->setObjectName(QStringLiteral("tableClient"));
        tableClient->setMinimumSize(QSize(831, 0));
        tableClient->setShowGrid(false);
        tableClient->setGridStyle(Qt::SolidLine);
        tableClient->setColumnCount(6);
        tableClient->verticalHeader()->setVisible(false);

        verticalLayout_11->addWidget(tableClient);


        gridLayout_18->addLayout(verticalLayout_11, 0, 0, 1, 1);

        onglets->addTab(tab_5, QString());

        gridLayout_9->addWidget(onglets, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        pushButton->setDefault(false);
        ajout_client->setDefault(false);
        onglets->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "BestResidence", 0));
        l_icon->setText(QApplication::translate("MainWindow", "BestResidence", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Ajouter une annonce", 0));
        ajout_client->setText(QApplication::translate("MainWindow", "Ajouter un client", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Recherche", 0));
        ov_rb_tri_croissant->setText(QApplication::translate("MainWindow", "Tri par date croissante", 0));
        ov_txt_ville->setPlaceholderText(QApplication::translate("MainWindow", "  Ville ou code postal", 0));
        ov_cbx_photo->setText(QApplication::translate("MainWindow", "Uniquement avec photo", 0));
        ov_lbl_date->setText(QApplication::translate("MainWindow", "Date        ", 0));
        ov_rb_tri_decroissant->setText(QApplication::translate("MainWindow", "Tri par date d\303\251croissante", 0));
        ov_lbl_prix->setText(QApplication::translate("MainWindow", "Prix entre", 0));
        ov_txt_prix_min->setPlaceholderText(QApplication::translate("MainWindow", "Prix min", 0));
        ov_lbl_et1->setText(QApplication::translate("MainWindow", "et/ou", 0));
        ov_txt_prix_max->setPlaceholderText(QApplication::translate("MainWindow", "Prix max", 0));
        ov_lbl_pieces->setText(QApplication::translate("MainWindow", "Pi\303\250ces entre", 0));
        ov_txt_pieces_min->setPlaceholderText(QApplication::translate("MainWindow", "Pi\303\250ces min", 0));
        ov_lbl_et2->setText(QApplication::translate("MainWindow", "et/ou", 0));
        ov_txt_pieces_max->setPlaceholderText(QApplication::translate("MainWindow", "Pi\303\250ces max", 0));
        ov_cbx_appartement->setText(QApplication::translate("MainWindow", "Appartement", 0));
        ov_cbx_ferme->setText(QApplication::translate("MainWindow", "Ferme", 0));
        ov_btn_rechercher->setText(QApplication::translate("MainWindow", "RECHERCHER", 0));
        ov_cbx_bureau->setText(QApplication::translate("MainWindow", "Bureau", 0));
        ov_cbx_commerce->setText(QApplication::translate("MainWindow", "Commerce", 0));
        ov_cbx_maison->setText(QApplication::translate("MainWindow", "Maison", 0));
        ov_cbx_chateau->setText(QApplication::translate("MainWindow", "Ch\303\242teau", 0));
        ov_btn_stats->setText(QApplication::translate("MainWindow", "STATISTIQUES", 0));
        ov_lbl_type->setText(QApplication::translate("MainWindow", "Type :", 0));
        QTableWidgetItem *___qtablewidgetitem = tableOffreVente->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Photo", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableOffreVente->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Bien", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableOffreVente->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Pi\303\250ces", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableOffreVente->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Superficie", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableOffreVente->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Ville", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableOffreVente->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Prix", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableOffreVente->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Date de l'offre", 0));
        onglets->setTabText(onglets->indexOf(tab), QApplication::translate("MainWindow", "Offres de ventes", 0));
        groupBox1->setTitle(QApplication::translate("MainWindow", "Recherche", 0));
        ol_txt_ville->setPlaceholderText(QApplication::translate("MainWindow", "  Ville ou code postal", 0));
        ol_cbx_photo->setText(QApplication::translate("MainWindow", "Uniquement avec photo", 0));
        ol_lbl_date->setText(QApplication::translate("MainWindow", "Date", 0));
        ol_rb_tri_croissant->setText(QApplication::translate("MainWindow", "Tri par date croissante", 0));
        ol_rb_tri_decroissant->setText(QApplication::translate("MainWindow", "Tri par date d\303\251croissante", 0));
        ol_lbl_prix->setText(QApplication::translate("MainWindow", "Prix entre", 0));
        ol_txt_prix_min->setPlaceholderText(QApplication::translate("MainWindow", "Prix min", 0));
        ol_lbl_et1->setText(QApplication::translate("MainWindow", "et/ou", 0));
        ol_txt_prix_max->setPlaceholderText(QApplication::translate("MainWindow", "Prix max", 0));
        ol_lbl_pieces->setText(QApplication::translate("MainWindow", "Pi\303\250ces entre", 0));
        ol_txt_pieces_min->setPlaceholderText(QApplication::translate("MainWindow", "Pi\303\250ces min", 0));
        ol_lbl_et2->setText(QApplication::translate("MainWindow", "et/ou", 0));
        ol_txt_pieces_max->setPlaceholderText(QApplication::translate("MainWindow", "Pi\303\250ces max", 0));
        ol_lbl_type->setText(QApplication::translate("MainWindow", "Type :", 0));
        ol_cbx_maison->setText(QApplication::translate("MainWindow", "Maison", 0));
        ol_cbx_chateau->setText(QApplication::translate("MainWindow", "Ch\303\242teau", 0));
        ol_cbx_appartement->setText(QApplication::translate("MainWindow", "Appartement", 0));
        ol_cbx_ferme->setText(QApplication::translate("MainWindow", "Ferme", 0));
        ol_cbx_bureau->setText(QApplication::translate("MainWindow", "Bureau", 0));
        ol_cbx_commerce->setText(QApplication::translate("MainWindow", "Commerce", 0));
        ol_btn_stats->setText(QApplication::translate("MainWindow", "STATISTIQUES", 0));
        ol_btn_rechercher->setText(QApplication::translate("MainWindow", "RECHERCHER", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableOffreLocation->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "Photo", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableOffreLocation->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "Bien", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableOffreLocation->horizontalHeaderItem(2);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "Pi\303\250ces", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableOffreLocation->horizontalHeaderItem(3);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "Superficie", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableOffreLocation->horizontalHeaderItem(4);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "Ville", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tableOffreLocation->horizontalHeaderItem(5);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "Loyer", 0));
        QTableWidgetItem *___qtablewidgetitem13 = tableOffreLocation->horizontalHeaderItem(6);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "Date de l'offre", 0));
        onglets->setTabText(onglets->indexOf(tab_2), QApplication::translate("MainWindow", "Offres de locations", 0));
        groupBox2->setTitle(QApplication::translate("MainWindow", "Recherche", 0));
        bv_txt_ville->setPlaceholderText(QApplication::translate("MainWindow", "  Ville ou code postal", 0));
        bv_txt_id_client->setText(QString());
        bv_txt_id_client->setPlaceholderText(QApplication::translate("MainWindow", "  Identifiant client", 0));
        bv_lbl_date->setText(QApplication::translate("MainWindow", "Date de vente", 0));
        bv_lbl_au->setText(QApplication::translate("MainWindow", "au", 0));
        bv_rb_tri_croissant->setText(QApplication::translate("MainWindow", "Tri par date croissante", 0));
        bv_rb_tri_decroissant->setText(QApplication::translate("MainWindow", "Tri par date d\303\251croissante", 0));
        bv_lbl_prix->setText(QApplication::translate("MainWindow", "Prix entre", 0));
        bv_txt_prix_min->setPlaceholderText(QApplication::translate("MainWindow", "Prix min", 0));
        bv_lbl_et1->setText(QApplication::translate("MainWindow", "et/ou", 0));
        bv_txt_prix_max->setPlaceholderText(QApplication::translate("MainWindow", "Prix max", 0));
        bv_lbl_pieces->setText(QApplication::translate("MainWindow", "Pi\303\250ces entre", 0));
        bv_txt_pieces_min->setPlaceholderText(QApplication::translate("MainWindow", "Pi\303\250ces min", 0));
        bv_lbl_et2->setText(QApplication::translate("MainWindow", "et/ou", 0));
        bv_txt_pieces_max->setPlaceholderText(QApplication::translate("MainWindow", "Pi\303\250ces max", 0));
        bv_lbl_type->setText(QApplication::translate("MainWindow", "Type :", 0));
        bv_cbx_maison->setText(QApplication::translate("MainWindow", "Maison", 0));
        bv_cbx_chateau->setText(QApplication::translate("MainWindow", "Ch\303\242teau", 0));
        bv_cbx_appartement->setText(QApplication::translate("MainWindow", "Appartement", 0));
        bv_cbx_ferme->setText(QApplication::translate("MainWindow", "Ferme", 0));
        bv_cbx_bureau->setText(QApplication::translate("MainWindow", "Bureau", 0));
        bv_cbx_commerce->setText(QApplication::translate("MainWindow", "Commerce", 0));
        bv_btn_stats->setText(QApplication::translate("MainWindow", "STATISTIQUES", 0));
        bv_btn_rechercher->setText(QApplication::translate("MainWindow", "RECHERCHER", 0));
        QTableWidgetItem *___qtablewidgetitem14 = tableBienVendu->horizontalHeaderItem(0);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "Photo", 0));
        QTableWidgetItem *___qtablewidgetitem15 = tableBienVendu->horizontalHeaderItem(1);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "Bien", 0));
        QTableWidgetItem *___qtablewidgetitem16 = tableBienVendu->horizontalHeaderItem(2);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "Pi\303\250ces", 0));
        QTableWidgetItem *___qtablewidgetitem17 = tableBienVendu->horizontalHeaderItem(3);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "Superficie", 0));
        QTableWidgetItem *___qtablewidgetitem18 = tableBienVendu->horizontalHeaderItem(4);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "Ville", 0));
        QTableWidgetItem *___qtablewidgetitem19 = tableBienVendu->horizontalHeaderItem(5);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "Prix", 0));
        QTableWidgetItem *___qtablewidgetitem20 = tableBienVendu->horizontalHeaderItem(6);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "Date de vente", 0));
        QTableWidgetItem *___qtablewidgetitem21 = tableBienVendu->horizontalHeaderItem(7);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "B\303\251n\303\251ficiaire", 0));
        onglets->setTabText(onglets->indexOf(tab_3), QApplication::translate("MainWindow", "Biens vendus", 0));
        groupBox3->setTitle(QApplication::translate("MainWindow", "Recherche", 0));
        bl_txt_ville->setPlaceholderText(QApplication::translate("MainWindow", "  Ville ou code postal", 0));
        bl_lbl_date->setText(QApplication::translate("MainWindow", "Date de location", 0));
        bl_lbl_au->setText(QApplication::translate("MainWindow", "au", 0));
        bl_txt_id_client->setText(QString());
        bl_txt_id_client->setPlaceholderText(QApplication::translate("MainWindow", "  Identifiant client", 0));
        bl_rb_tri_croissant->setText(QApplication::translate("MainWindow", "Tri par date croissante", 0));
        bl_rb_tri_decroissant->setText(QApplication::translate("MainWindow", "Tri par date d\303\251croissante", 0));
        bl_lbl_prix->setText(QApplication::translate("MainWindow", "Prix entre", 0));
        bl_txt_prix_min->setPlaceholderText(QApplication::translate("MainWindow", "Prix min", 0));
        bl_lbl_et1->setText(QApplication::translate("MainWindow", "et/ou", 0));
        bl_txt_prix_max->setPlaceholderText(QApplication::translate("MainWindow", "Prix max", 0));
        bl_lbl_pieces->setText(QApplication::translate("MainWindow", "Pi\303\250ces entre", 0));
        bl_txt_pieces_min->setPlaceholderText(QApplication::translate("MainWindow", "Pi\303\250ces min", 0));
        bl_lbl_et2->setText(QApplication::translate("MainWindow", "et/ou", 0));
        bl_txt_pieces_max->setPlaceholderText(QApplication::translate("MainWindow", "Pi\303\250ces max", 0));
        bl_lbl_type->setText(QApplication::translate("MainWindow", "Type :", 0));
        bl_cbx_maison->setText(QApplication::translate("MainWindow", "Maison", 0));
        bl_cbx_chateau->setText(QApplication::translate("MainWindow", "Ch\303\242teau", 0));
        bl_cbx_appartement->setText(QApplication::translate("MainWindow", "Appartement", 0));
        bl_cbx_ferme->setText(QApplication::translate("MainWindow", "Ferme", 0));
        bl_cbx_bureau->setText(QApplication::translate("MainWindow", "Bureau", 0));
        bl_cbx_commerce->setText(QApplication::translate("MainWindow", "Commerce", 0));
        bl_btn_stats->setText(QApplication::translate("MainWindow", "STATISTIQUES", 0));
        bl_btn_rechercher->setText(QApplication::translate("MainWindow", "RECHERCHER", 0));
        QTableWidgetItem *___qtablewidgetitem22 = tableBienLoue->horizontalHeaderItem(0);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWindow", "Photo", 0));
        QTableWidgetItem *___qtablewidgetitem23 = tableBienLoue->horizontalHeaderItem(1);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWindow", "Bien", 0));
        QTableWidgetItem *___qtablewidgetitem24 = tableBienLoue->horizontalHeaderItem(2);
        ___qtablewidgetitem24->setText(QApplication::translate("MainWindow", "Pi\303\250ces", 0));
        QTableWidgetItem *___qtablewidgetitem25 = tableBienLoue->horizontalHeaderItem(3);
        ___qtablewidgetitem25->setText(QApplication::translate("MainWindow", "Superficie", 0));
        QTableWidgetItem *___qtablewidgetitem26 = tableBienLoue->horizontalHeaderItem(4);
        ___qtablewidgetitem26->setText(QApplication::translate("MainWindow", "Ville", 0));
        QTableWidgetItem *___qtablewidgetitem27 = tableBienLoue->horizontalHeaderItem(5);
        ___qtablewidgetitem27->setText(QApplication::translate("MainWindow", "Loyer", 0));
        QTableWidgetItem *___qtablewidgetitem28 = tableBienLoue->horizontalHeaderItem(6);
        ___qtablewidgetitem28->setText(QApplication::translate("MainWindow", "Date de location", 0));
        QTableWidgetItem *___qtablewidgetitem29 = tableBienLoue->horizontalHeaderItem(7);
        ___qtablewidgetitem29->setText(QApplication::translate("MainWindow", "B\303\251n\303\251ficiaire", 0));
        onglets->setTabText(onglets->indexOf(tab_4), QApplication::translate("MainWindow", "Biens lou\303\251s", 0));
        groupBox4->setTitle(QApplication::translate("MainWindow", "Recherche", 0));
        cl_txt_id_client->setText(QString());
        cl_txt_id_client->setPlaceholderText(QApplication::translate("MainWindow", "  Identifiant client", 0));
        cl_txt_nom->setText(QString());
        cl_txt_nom->setPlaceholderText(QApplication::translate("MainWindow", "  Nom", 0));
        cl_txt_ville->setPlaceholderText(QApplication::translate("MainWindow", "  Ville ou code postal", 0));
        cl_lbl_date->setText(QApplication::translate("MainWindow", "Date", 0));
        cl_rb_tri_croissant->setText(QApplication::translate("MainWindow", "Tri par date croissante", 0));
        cl_rb_tri_decroissant->setText(QApplication::translate("MainWindow", "Tri par date d\303\251croissante", 0));
        cl_lbl_nb_contrats->setText(QApplication::translate("MainWindow", "Nombre de contrats", 0));
        cl_txt_nb_min->setPlaceholderText(QApplication::translate("MainWindow", "Nombre min", 0));
        cl_lbl_et->setText(QApplication::translate("MainWindow", "et/ou", 0));
        cl_txt_nb_max->setPlaceholderText(QApplication::translate("MainWindow", "Nombre max", 0));
        cl_btn_stats->setText(QApplication::translate("MainWindow", "STATISTIQUES", 0));
        cl_btn_rechercher->setText(QApplication::translate("MainWindow", "RECHERCHER", 0));
        QTableWidgetItem *___qtablewidgetitem30 = tableClient->horizontalHeaderItem(0);
        ___qtablewidgetitem30->setText(QApplication::translate("MainWindow", "Identifiant", 0));
        QTableWidgetItem *___qtablewidgetitem31 = tableClient->horizontalHeaderItem(1);
        ___qtablewidgetitem31->setText(QApplication::translate("MainWindow", "Nom", 0));
        QTableWidgetItem *___qtablewidgetitem32 = tableClient->horizontalHeaderItem(2);
        ___qtablewidgetitem32->setText(QApplication::translate("MainWindow", "Pr\303\251nom", 0));
        QTableWidgetItem *___qtablewidgetitem33 = tableClient->horizontalHeaderItem(3);
        ___qtablewidgetitem33->setText(QApplication::translate("MainWindow", "Ville", 0));
        QTableWidgetItem *___qtablewidgetitem34 = tableClient->horizontalHeaderItem(4);
        ___qtablewidgetitem34->setText(QApplication::translate("MainWindow", "Courriel", 0));
        QTableWidgetItem *___qtablewidgetitem35 = tableClient->horizontalHeaderItem(5);
        ___qtablewidgetitem35->setText(QApplication::translate("MainWindow", "T\303\251l\303\251phone", 0));
        onglets->setTabText(onglets->indexOf(tab_5), QApplication::translate("MainWindow", "Clients", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
