/********************************************************************************
** Form generated from reading UI file 'clientwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTWINDOW_H
#define UI_CLIENTWINDOW_H

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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogClient
{
public:
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *l_nom;
    QLabel *l_dateNaissance;
    QLabel *l_id;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *l_dateCreation;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QLabel *l_nbContrats_2;
    QLabel *l_nbContrats;
    QGroupBox *groupBox1;
    QGridLayout *gridLayout_2;
    QLabel *l_ville;
    QLabel *l_adresse;
    QLabel *l_codeP;
    QGroupBox *groupBox2;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *l_courriel_2;
    QLabel *l_courriel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *l_courriel_3;
    QLabel *l_telephone;
    QPushButton *b_modifier;
    QPushButton *b_supprimer;
    QPushButton *b_retour;

    void setupUi(QDialog *DialogClient)
    {
        if (DialogClient->objectName().isEmpty())
            DialogClient->setObjectName(QStringLiteral("DialogClient"));
        DialogClient->resize(383, 429);
        gridLayout_4 = new QGridLayout(DialogClient);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(DialogClient);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        l_nom = new QLabel(groupBox);
        l_nom->setObjectName(QStringLiteral("l_nom"));

        verticalLayout->addWidget(l_nom);

        l_dateNaissance = new QLabel(groupBox);
        l_dateNaissance->setObjectName(QStringLiteral("l_dateNaissance"));

        verticalLayout->addWidget(l_dateNaissance);

        l_id = new QLabel(groupBox);
        l_id->setObjectName(QStringLiteral("l_id"));

        verticalLayout->addWidget(l_id);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        l_dateCreation = new QLabel(DialogClient);
        l_dateCreation->setObjectName(QStringLiteral("l_dateCreation"));

        horizontalLayout->addWidget(l_dateCreation);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        l_nbContrats_2 = new QLabel(DialogClient);
        l_nbContrats_2->setObjectName(QStringLiteral("l_nbContrats_2"));

        horizontalLayout_4->addWidget(l_nbContrats_2);

        l_nbContrats = new QLabel(DialogClient);
        l_nbContrats->setObjectName(QStringLiteral("l_nbContrats"));

        horizontalLayout_4->addWidget(l_nbContrats);


        gridLayout->addLayout(horizontalLayout_4, 2, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        groupBox1 = new QGroupBox(DialogClient);
        groupBox1->setObjectName(QStringLiteral("groupBox1"));
        gridLayout_2 = new QGridLayout(groupBox1);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        l_ville = new QLabel(groupBox1);
        l_ville->setObjectName(QStringLiteral("l_ville"));

        gridLayout_2->addWidget(l_ville, 3, 0, 1, 1);

        l_adresse = new QLabel(groupBox1);
        l_adresse->setObjectName(QStringLiteral("l_adresse"));

        gridLayout_2->addWidget(l_adresse, 1, 0, 1, 1);

        l_codeP = new QLabel(groupBox1);
        l_codeP->setObjectName(QStringLiteral("l_codeP"));

        gridLayout_2->addWidget(l_codeP, 3, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox1);

        groupBox2 = new QGroupBox(DialogClient);
        groupBox2->setObjectName(QStringLiteral("groupBox2"));
        gridLayout_3 = new QGridLayout(groupBox2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        l_courriel_2 = new QLabel(groupBox2);
        l_courriel_2->setObjectName(QStringLiteral("l_courriel_2"));

        horizontalLayout_2->addWidget(l_courriel_2);

        l_courriel = new QLabel(groupBox2);
        l_courriel->setObjectName(QStringLiteral("l_courriel"));

        horizontalLayout_2->addWidget(l_courriel);


        gridLayout_3->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        l_courriel_3 = new QLabel(groupBox2);
        l_courriel_3->setObjectName(QStringLiteral("l_courriel_3"));

        horizontalLayout_3->addWidget(l_courriel_3);

        l_telephone = new QLabel(groupBox2);
        l_telephone->setObjectName(QStringLiteral("l_telephone"));

        horizontalLayout_3->addWidget(l_telephone);


        gridLayout_3->addLayout(horizontalLayout_3, 1, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox2);


        gridLayout_4->addLayout(verticalLayout_2, 0, 0, 1, 3);

        b_modifier = new QPushButton(DialogClient);
        b_modifier->setObjectName(QStringLiteral("b_modifier"));
        b_modifier->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_4->addWidget(b_modifier, 1, 0, 1, 1);

        b_supprimer = new QPushButton(DialogClient);
        b_supprimer->setObjectName(QStringLiteral("b_supprimer"));
        b_supprimer->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_4->addWidget(b_supprimer, 1, 1, 1, 1);

        b_retour = new QPushButton(DialogClient);
        b_retour->setObjectName(QStringLiteral("b_retour"));
        b_retour->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_4->addWidget(b_retour, 1, 2, 1, 1);


        retranslateUi(DialogClient);

        QMetaObject::connectSlotsByName(DialogClient);
    } // setupUi

    void retranslateUi(QDialog *DialogClient)
    {
        DialogClient->setWindowTitle(QApplication::translate("DialogClient", "D\303\251tails du client", 0));
        groupBox->setTitle(QApplication::translate("DialogClient", "Identit\303\251", 0));
        l_nom->setText(QApplication::translate("DialogClient", "TextLabel", 0));
        l_dateNaissance->setText(QApplication::translate("DialogClient", "TextLabel", 0));
        l_id->setText(QApplication::translate("DialogClient", "TextLabel", 0));
        l_dateCreation->setText(QApplication::translate("DialogClient", "TextLabel", 0));
        l_nbContrats_2->setText(QApplication::translate("DialogClient", "Nombre de contrats :", 0));
        l_nbContrats->setText(QApplication::translate("DialogClient", "TextLabel", 0));
        groupBox1->setTitle(QApplication::translate("DialogClient", "Localisation", 0));
        l_ville->setText(QApplication::translate("DialogClient", "TextLabel", 0));
        l_adresse->setText(QApplication::translate("DialogClient", "TextLabel", 0));
        l_codeP->setText(QApplication::translate("DialogClient", "TextLabel", 0));
        groupBox2->setTitle(QApplication::translate("DialogClient", "Contact", 0));
        l_courriel_2->setText(QApplication::translate("DialogClient", "Courriel :", 0));
        l_courriel->setText(QApplication::translate("DialogClient", "TextLabel", 0));
        l_courriel_3->setText(QApplication::translate("DialogClient", "T\303\251l\303\251phone :", 0));
        l_telephone->setText(QApplication::translate("DialogClient", "TextLabel", 0));
        b_modifier->setText(QApplication::translate("DialogClient", "Modifier", 0));
        b_supprimer->setText(QApplication::translate("DialogClient", "Supprimer", 0));
        b_retour->setText(QApplication::translate("DialogClient", "Retour", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogClient: public Ui_DialogClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWINDOW_H
