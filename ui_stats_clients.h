/********************************************************************************
** Form generated from reading UI file 'stats_clients.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATS_CLIENTS_H
#define UI_STATS_CLIENTS_H

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

class Ui_StatsClients
{
public:
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_7;
    QLabel *nb_clients_rech;
    QLabel *label_8;
    QLabel *contrats_moyenne;
    QLabel *label_10;
    QLabel *client_recent;
    QLabel *label_9;
    QLabel *client_ancien;
    QGroupBox *groupBox1;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *biens_dispos;
    QLabel *label_2;
    QLabel *biens_archives;
    QLabel *label_3;
    QLabel *nb_clients;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_fermer;

    void setupUi(QDialog *StatsClients)
    {
        if (StatsClients->objectName().isEmpty())
            StatsClients->setObjectName(QStringLiteral("StatsClients"));
        StatsClients->resize(433, 316);
        gridLayout_4 = new QGridLayout(StatsClients);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBox = new QGroupBox(StatsClients);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        nb_clients_rech = new QLabel(groupBox);
        nb_clients_rech->setObjectName(QStringLiteral("nb_clients_rech"));

        gridLayout->addWidget(nb_clients_rech, 0, 1, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 1, 0, 1, 1);

        contrats_moyenne = new QLabel(groupBox);
        contrats_moyenne->setObjectName(QStringLiteral("contrats_moyenne"));

        gridLayout->addWidget(contrats_moyenne, 1, 1, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 2, 0, 1, 1);

        client_recent = new QLabel(groupBox);
        client_recent->setObjectName(QStringLiteral("client_recent"));

        gridLayout->addWidget(client_recent, 2, 1, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 3, 0, 1, 1);

        client_ancien = new QLabel(groupBox);
        client_ancien->setObjectName(QStringLiteral("client_ancien"));

        gridLayout->addWidget(client_ancien, 3, 1, 1, 1);


        gridLayout_3->addWidget(groupBox, 1, 0, 1, 1);

        groupBox1 = new QGroupBox(StatsClients);
        groupBox1->setObjectName(QStringLiteral("groupBox1"));
        gridLayout_2 = new QGridLayout(groupBox1);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(groupBox1);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        biens_dispos = new QLabel(groupBox1);
        biens_dispos->setObjectName(QStringLiteral("biens_dispos"));

        gridLayout_2->addWidget(biens_dispos, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox1);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        biens_archives = new QLabel(groupBox1);
        biens_archives->setObjectName(QStringLiteral("biens_archives"));

        gridLayout_2->addWidget(biens_archives, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox1);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        nb_clients = new QLabel(groupBox1);
        nb_clients->setObjectName(QStringLiteral("nb_clients"));

        gridLayout_2->addWidget(nb_clients, 2, 1, 1, 1);


        gridLayout_3->addWidget(groupBox1, 0, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_fermer = new QPushButton(StatsClients);
        btn_fermer->setObjectName(QStringLiteral("btn_fermer"));
        btn_fermer->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(btn_fermer);


        gridLayout_4->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(StatsClients);

        QMetaObject::connectSlotsByName(StatsClients);
    } // setupUi

    void retranslateUi(QDialog *StatsClients)
    {
        StatsClients->setWindowTitle(QApplication::translate("StatsClients", "Statistiques clients", 0));
        groupBox->setTitle(QApplication::translate("StatsClients", "Statistiques selon la recherche", 0));
        label_7->setText(QApplication::translate("StatsClients", "Nombre de clients :", 0));
        nb_clients_rech->setText(QApplication::translate("StatsClients", "TextLabel", 0));
        label_8->setText(QApplication::translate("StatsClients", "Nombre de contrats en moyenne :", 0));
        contrats_moyenne->setText(QApplication::translate("StatsClients", "TextLabel", 0));
        label_10->setText(QApplication::translate("StatsClients", "Client le plus r\303\251cemment inscrit :", 0));
        client_recent->setText(QApplication::translate("StatsClients", "TextLabel", 0));
        label_9->setText(QApplication::translate("StatsClients", "Client le plus anciennement inscrit :", 0));
        client_ancien->setText(QApplication::translate("StatsClients", "TextLabel", 0));
        groupBox1->setTitle(QApplication::translate("StatsClients", "Statistiques g\303\251n\303\251rales", 0));
        label->setText(QApplication::translate("StatsClients", "Nombre de biens disponibles :", 0));
        biens_dispos->setText(QApplication::translate("StatsClients", "TextLabel", 0));
        label_2->setText(QApplication::translate("StatsClients", "Nombre de biens archiv\303\251s :", 0));
        biens_archives->setText(QApplication::translate("StatsClients", "TextLabel", 0));
        label_3->setText(QApplication::translate("StatsClients", "Nombre de clients :", 0));
        nb_clients->setText(QApplication::translate("StatsClients", "TextLabel", 0));
        btn_fermer->setText(QApplication::translate("StatsClients", "Fermer", 0));
    } // retranslateUi

};

namespace Ui {
    class StatsClients: public Ui_StatsClients {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATS_CLIENTS_H
