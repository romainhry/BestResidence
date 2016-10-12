/********************************************************************************
** Form generated from reading UI file 'stats_immo.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATS_IMMO_H
#define UI_STATS_IMMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_StatsImmo
{
public:
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QLabel *biens_dispo;
    QLabel *label_2;
    QLabel *biens_archives;
    QLabel *label_3;
    QLabel *nb_clients;
    QGroupBox *groupBox1;
    QGridLayout *gridLayout;
    QLabel *label_7;
    QLabel *nb_annonces;
    QLabel *label_8;
    QLabel *prix_moyen;
    QLabel *label_9;
    QLabel *pieces_moyenne;
    QLabel *label_10;
    QLabel *annonces_photo;
    QLabel *label_11;
    QLabel *annonce_recente;
    QLabel *label_12;
    QLabel *annonce_ancienne;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_fermer;

    void setupUi(QDialog *StatsImmo)
    {
        if (StatsImmo->objectName().isEmpty())
            StatsImmo->setObjectName(QStringLiteral("StatsImmo"));
        StatsImmo->resize(452, 370);
        gridLayout_4 = new QGridLayout(StatsImmo);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(StatsImmo);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        biens_dispo = new QLabel(groupBox);
        biens_dispo->setObjectName(QStringLiteral("biens_dispo"));

        gridLayout_3->addWidget(biens_dispo, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        biens_archives = new QLabel(groupBox);
        biens_archives->setObjectName(QStringLiteral("biens_archives"));

        gridLayout_3->addWidget(biens_archives, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);

        nb_clients = new QLabel(groupBox);
        nb_clients->setObjectName(QStringLiteral("nb_clients"));

        gridLayout_3->addWidget(nb_clients, 2, 1, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        groupBox1 = new QGroupBox(StatsImmo);
        groupBox1->setObjectName(QStringLiteral("groupBox1"));
        gridLayout = new QGridLayout(groupBox1);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_7 = new QLabel(groupBox1);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        nb_annonces = new QLabel(groupBox1);
        nb_annonces->setObjectName(QStringLiteral("nb_annonces"));

        gridLayout->addWidget(nb_annonces, 0, 1, 1, 1);

        label_8 = new QLabel(groupBox1);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 1, 0, 1, 1);

        prix_moyen = new QLabel(groupBox1);
        prix_moyen->setObjectName(QStringLiteral("prix_moyen"));

        gridLayout->addWidget(prix_moyen, 1, 1, 1, 1);

        label_9 = new QLabel(groupBox1);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 2, 0, 1, 1);

        pieces_moyenne = new QLabel(groupBox1);
        pieces_moyenne->setObjectName(QStringLiteral("pieces_moyenne"));

        gridLayout->addWidget(pieces_moyenne, 2, 1, 1, 1);

        label_10 = new QLabel(groupBox1);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 3, 0, 1, 1);

        annonces_photo = new QLabel(groupBox1);
        annonces_photo->setObjectName(QStringLiteral("annonces_photo"));

        gridLayout->addWidget(annonces_photo, 3, 1, 1, 1);

        label_11 = new QLabel(groupBox1);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 4, 0, 1, 1);

        annonce_recente = new QLabel(groupBox1);
        annonce_recente->setObjectName(QStringLiteral("annonce_recente"));

        gridLayout->addWidget(annonce_recente, 4, 1, 1, 1);

        label_12 = new QLabel(groupBox1);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 5, 0, 1, 1);

        annonce_ancienne = new QLabel(groupBox1);
        annonce_ancienne->setObjectName(QStringLiteral("annonce_ancienne"));

        gridLayout->addWidget(annonce_ancienne, 5, 1, 1, 1);


        gridLayout_2->addWidget(groupBox1, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_fermer = new QPushButton(StatsImmo);
        btn_fermer->setObjectName(QStringLiteral("btn_fermer"));
        btn_fermer->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(btn_fermer);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 0, 0, 1, 1);


        retranslateUi(StatsImmo);

        QMetaObject::connectSlotsByName(StatsImmo);
    } // setupUi

    void retranslateUi(QDialog *StatsImmo)
    {
        StatsImmo->setWindowTitle(QApplication::translate("StatsImmo", "Statistiques immobili\303\250res", 0));
        groupBox->setTitle(QApplication::translate("StatsImmo", "Statistiques g\303\251n\303\251rales", 0));
        label->setText(QApplication::translate("StatsImmo", "Nombre de biens disponibles :", 0));
        biens_dispo->setText(QApplication::translate("StatsImmo", "TextLabel", 0));
        label_2->setText(QApplication::translate("StatsImmo", "Nombre de biens archiv\303\251s :", 0));
        biens_archives->setText(QApplication::translate("StatsImmo", "TextLabel", 0));
        label_3->setText(QApplication::translate("StatsImmo", "Nombre de clients :", 0));
        nb_clients->setText(QApplication::translate("StatsImmo", "TextLabel", 0));
        groupBox1->setTitle(QApplication::translate("StatsImmo", "Statistiques selon la recherche", 0));
        label_7->setText(QApplication::translate("StatsImmo", "Nombre d'annonces :", 0));
        nb_annonces->setText(QApplication::translate("StatsImmo", "TextLabel", 0));
        label_8->setText(QApplication::translate("StatsImmo", "Prix moyen :", 0));
        prix_moyen->setText(QApplication::translate("StatsImmo", "TextLabel", 0));
        label_9->setText(QApplication::translate("StatsImmo", "Nombre de pi\303\250ces en moyenne :", 0));
        pieces_moyenne->setText(QApplication::translate("StatsImmo", "TextLabel", 0));
        label_10->setText(QApplication::translate("StatsImmo", "Annonces avec photo(s) :", 0));
        annonces_photo->setText(QApplication::translate("StatsImmo", "TextLabel", 0));
        label_11->setText(QApplication::translate("StatsImmo", "Annonce la plus r\303\251cente :", 0));
        annonce_recente->setText(QApplication::translate("StatsImmo", "TextLabel", 0));
        label_12->setText(QApplication::translate("StatsImmo", "Annonce la plus ancienne :", 0));
        annonce_ancienne->setText(QApplication::translate("StatsImmo", "TextLabel", 0));
        btn_fermer->setText(QApplication::translate("StatsImmo", "Fermer", 0));
    } // retranslateUi

};

namespace Ui {
    class StatsImmo: public Ui_StatsImmo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATS_IMMO_H
