/********************************************************************************
** Form generated from reading UI file 'ajout.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUT_H
#define UI_AJOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLineEdit *q_codePostal;
    QComboBox *q_typeAnnonce;
    QLabel *l_typeAnnonce;
    QLabel *l_ville;
    QLabel *l_typeBien;
    QComboBox *q_typeBien;
    QLabel *l_adresse;
    QLineEdit *q_ville;
    QLineEdit *q_adresse;
    QComboBox *q_client;
    QLabel *l_client;
    QGroupBox *groupBox1;
    QGridLayout *gridLayout_2;
    QLabel *l_mCarre;
    QLabel *l_euros;
    QSpinBox *q_superficieTerrain;
    QTextEdit *q_description;
    QLabel *l_description;
    QLabel *l_prix;
    QSpinBox *q_nbPieces;
    QLabel *l_nbPieces;
    QLabel *l_superficieTerrain;
    QDoubleSpinBox *q_prix;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *b_annuler;
    QPushButton *b_valider;
    QGroupBox *groupBox2;
    QGridLayout *gridLayout_3;
    QLineEdit *q_photoPrincipale;
    QPushButton *b_parcourirPrincipal;
    QPushButton *b_ajouterSupp;
    QLabel *l_photoPrincipale;
    QLineEdit *q_photosSupp;
    QPushButton *b_parcourirSupp;
    QPushButton *b_supprPrincipale;
    QListWidget *listWidget;
    QLabel *l_photosSupp;
    QPushButton *b_ajouterPrincipal;
    QPushButton *b_supprSupp;
    QLabel *l_photoPrincipal;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(623, 699);
        gridLayout_7 = new QGridLayout(Dialog);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        q_codePostal = new QLineEdit(groupBox);
        q_codePostal->setObjectName(QStringLiteral("q_codePostal"));

        gridLayout->addWidget(q_codePostal, 4, 2, 1, 1);

        q_typeAnnonce = new QComboBox(groupBox);
        q_typeAnnonce->setObjectName(QStringLiteral("q_typeAnnonce"));
        q_typeAnnonce->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(q_typeAnnonce, 0, 1, 1, 1);

        l_typeAnnonce = new QLabel(groupBox);
        l_typeAnnonce->setObjectName(QStringLiteral("l_typeAnnonce"));

        gridLayout->addWidget(l_typeAnnonce, 0, 0, 1, 1);

        l_ville = new QLabel(groupBox);
        l_ville->setObjectName(QStringLiteral("l_ville"));

        gridLayout->addWidget(l_ville, 4, 0, 1, 1);

        l_typeBien = new QLabel(groupBox);
        l_typeBien->setObjectName(QStringLiteral("l_typeBien"));

        gridLayout->addWidget(l_typeBien, 2, 0, 1, 1);

        q_typeBien = new QComboBox(groupBox);
        q_typeBien->setObjectName(QStringLiteral("q_typeBien"));
        q_typeBien->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(q_typeBien, 2, 1, 1, 1);

        l_adresse = new QLabel(groupBox);
        l_adresse->setObjectName(QStringLiteral("l_adresse"));

        gridLayout->addWidget(l_adresse, 3, 0, 1, 1);

        q_ville = new QLineEdit(groupBox);
        q_ville->setObjectName(QStringLiteral("q_ville"));

        gridLayout->addWidget(q_ville, 4, 1, 1, 1);

        q_adresse = new QLineEdit(groupBox);
        q_adresse->setObjectName(QStringLiteral("q_adresse"));

        gridLayout->addWidget(q_adresse, 3, 1, 1, 2);

        q_client = new QComboBox(groupBox);
        q_client->setObjectName(QStringLiteral("q_client"));

        gridLayout->addWidget(q_client, 1, 1, 1, 1);

        l_client = new QLabel(groupBox);
        l_client->setObjectName(QStringLiteral("l_client"));

        gridLayout->addWidget(l_client, 1, 0, 1, 1);


        gridLayout_5->addWidget(groupBox, 0, 0, 1, 1);

        groupBox1 = new QGroupBox(Dialog);
        groupBox1->setObjectName(QStringLiteral("groupBox1"));
        gridLayout_2 = new QGridLayout(groupBox1);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        l_mCarre = new QLabel(groupBox1);
        l_mCarre->setObjectName(QStringLiteral("l_mCarre"));

        gridLayout_2->addWidget(l_mCarre, 0, 6, 1, 2);

        l_euros = new QLabel(groupBox1);
        l_euros->setObjectName(QStringLiteral("l_euros"));

        gridLayout_2->addWidget(l_euros, 2, 7, 1, 1);

        q_superficieTerrain = new QSpinBox(groupBox1);
        q_superficieTerrain->setObjectName(QStringLiteral("q_superficieTerrain"));
        q_superficieTerrain->setCursor(QCursor(Qt::ArrowCursor));
        q_superficieTerrain->setMaximum(100000);

        gridLayout_2->addWidget(q_superficieTerrain, 0, 5, 1, 1);

        q_description = new QTextEdit(groupBox1);
        q_description->setObjectName(QStringLiteral("q_description"));
        q_description->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));

        gridLayout_2->addWidget(q_description, 1, 1, 1, 7);

        l_description = new QLabel(groupBox1);
        l_description->setObjectName(QStringLiteral("l_description"));

        gridLayout_2->addWidget(l_description, 1, 0, 1, 1);

        l_prix = new QLabel(groupBox1);
        l_prix->setObjectName(QStringLiteral("l_prix"));

        gridLayout_2->addWidget(l_prix, 2, 3, 1, 1);

        q_nbPieces = new QSpinBox(groupBox1);
        q_nbPieces->setObjectName(QStringLiteral("q_nbPieces"));
        q_nbPieces->setMaximum(1000);

        gridLayout_2->addWidget(q_nbPieces, 0, 2, 1, 1);

        l_nbPieces = new QLabel(groupBox1);
        l_nbPieces->setObjectName(QStringLiteral("l_nbPieces"));

        gridLayout_2->addWidget(l_nbPieces, 0, 0, 1, 2);

        l_superficieTerrain = new QLabel(groupBox1);
        l_superficieTerrain->setObjectName(QStringLiteral("l_superficieTerrain"));

        gridLayout_2->addWidget(l_superficieTerrain, 0, 3, 1, 2);

        q_prix = new QDoubleSpinBox(groupBox1);
        q_prix->setObjectName(QStringLiteral("q_prix"));
        q_prix->setMaximum(1e+09);

        gridLayout_2->addWidget(q_prix, 2, 4, 1, 3);


        gridLayout_5->addWidget(groupBox1, 1, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 0, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        b_annuler = new QPushButton(Dialog);
        b_annuler->setObjectName(QStringLiteral("b_annuler"));
        b_annuler->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(b_annuler);

        b_valider = new QPushButton(Dialog);
        b_valider->setObjectName(QStringLiteral("b_valider"));
        b_valider->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(b_valider);


        gridLayout_4->addLayout(horizontalLayout, 1, 0, 1, 1);

        groupBox2 = new QGroupBox(Dialog);
        groupBox2->setObjectName(QStringLiteral("groupBox2"));
        gridLayout_3 = new QGridLayout(groupBox2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        q_photoPrincipale = new QLineEdit(groupBox2);
        q_photoPrincipale->setObjectName(QStringLiteral("q_photoPrincipale"));

        gridLayout_3->addWidget(q_photoPrincipale, 0, 1, 1, 1);

        b_parcourirPrincipal = new QPushButton(groupBox2);
        b_parcourirPrincipal->setObjectName(QStringLiteral("b_parcourirPrincipal"));
        b_parcourirPrincipal->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_3->addWidget(b_parcourirPrincipal, 0, 2, 1, 1);

        b_ajouterSupp = new QPushButton(groupBox2);
        b_ajouterSupp->setObjectName(QStringLiteral("b_ajouterSupp"));
        b_ajouterSupp->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_3->addWidget(b_ajouterSupp, 2, 3, 1, 1);

        l_photoPrincipale = new QLabel(groupBox2);
        l_photoPrincipale->setObjectName(QStringLiteral("l_photoPrincipale"));

        gridLayout_3->addWidget(l_photoPrincipale, 0, 0, 1, 1);

        q_photosSupp = new QLineEdit(groupBox2);
        q_photosSupp->setObjectName(QStringLiteral("q_photosSupp"));

        gridLayout_3->addWidget(q_photosSupp, 2, 1, 1, 1);

        b_parcourirSupp = new QPushButton(groupBox2);
        b_parcourirSupp->setObjectName(QStringLiteral("b_parcourirSupp"));
        b_parcourirSupp->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_3->addWidget(b_parcourirSupp, 2, 2, 1, 1);

        b_supprPrincipale = new QPushButton(groupBox2);
        b_supprPrincipale->setObjectName(QStringLiteral("b_supprPrincipale"));
        b_supprPrincipale->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_3->addWidget(b_supprPrincipale, 0, 4, 1, 1);

        listWidget = new QListWidget(groupBox2);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setEnabled(true);

        gridLayout_3->addWidget(listWidget, 3, 1, 1, 4);

        l_photosSupp = new QLabel(groupBox2);
        l_photosSupp->setObjectName(QStringLiteral("l_photosSupp"));

        gridLayout_3->addWidget(l_photosSupp, 2, 0, 1, 1);

        b_ajouterPrincipal = new QPushButton(groupBox2);
        b_ajouterPrincipal->setObjectName(QStringLiteral("b_ajouterPrincipal"));
        b_ajouterPrincipal->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_3->addWidget(b_ajouterPrincipal, 0, 3, 1, 1);

        b_supprSupp = new QPushButton(groupBox2);
        b_supprSupp->setObjectName(QStringLiteral("b_supprSupp"));
        b_supprSupp->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_3->addWidget(b_supprSupp, 2, 4, 1, 1);

        l_photoPrincipal = new QLabel(groupBox2);
        l_photoPrincipal->setObjectName(QStringLiteral("l_photoPrincipal"));

        gridLayout_3->addWidget(l_photoPrincipal, 1, 1, 1, 4);


        gridLayout_4->addWidget(groupBox2, 0, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_4, 1, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 0, 0, 1, 1);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Ajouter une annonce", 0));
        groupBox->setTitle(QApplication::translate("Dialog", "Informations g\303\251n\303\251rales", 0));
        q_codePostal->setText(QString());
        q_codePostal->setPlaceholderText(QApplication::translate("Dialog", "Code Postal", 0));
        q_typeAnnonce->clear();
        q_typeAnnonce->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "Location", 0)
         << QApplication::translate("Dialog", "Vente", 0)
        );
        l_typeAnnonce->setText(QApplication::translate("Dialog", "Type d'annonce :", 0));
        l_ville->setText(QApplication::translate("Dialog", "Ville :", 0));
        l_typeBien->setText(QApplication::translate("Dialog", "Type de bien :", 0));
        q_typeBien->clear();
        q_typeBien->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "Maison", 0)
         << QApplication::translate("Dialog", "Appartement", 0)
         << QApplication::translate("Dialog", "Ch\303\242teau", 0)
         << QApplication::translate("Dialog", "Ferme", 0)
         << QApplication::translate("Dialog", "Bureau", 0)
         << QApplication::translate("Dialog", "Commerce", 0)
        );
        l_adresse->setText(QApplication::translate("Dialog", "Adresse :", 0));
        l_client->setText(QApplication::translate("Dialog", "Client propri\303\251taire :", 0));
        groupBox1->setTitle(QApplication::translate("Dialog", "Descriptif", 0));
        l_mCarre->setText(QApplication::translate("Dialog", "m2", 0));
        l_euros->setText(QApplication::translate("Dialog", "\342\202\254", 0));
        l_description->setText(QApplication::translate("Dialog", "Description du bien :", 0));
        l_prix->setText(QApplication::translate("Dialog", "Prix :", 0));
        l_nbPieces->setText(QApplication::translate("Dialog", "Nombre de pi\303\250ces :", 0));
        l_superficieTerrain->setText(QApplication::translate("Dialog", "Superficie du terrain :", 0));
        b_annuler->setText(QApplication::translate("Dialog", "Annuler", 0));
        b_valider->setText(QApplication::translate("Dialog", "Valider", 0));
        groupBox2->setTitle(QApplication::translate("Dialog", "Photos", 0));
        b_parcourirPrincipal->setText(QApplication::translate("Dialog", "...", 0));
        b_ajouterSupp->setText(QApplication::translate("Dialog", "Ajouter", 0));
        l_photoPrincipale->setText(QApplication::translate("Dialog", " Photo principale :", 0));
        b_parcourirSupp->setText(QApplication::translate("Dialog", "...", 0));
        b_supprPrincipale->setText(QApplication::translate("Dialog", "Supprimer", 0));
        l_photosSupp->setText(QApplication::translate("Dialog", " Photos suppl\303\251mentaires :", 0));
        b_ajouterPrincipal->setText(QApplication::translate("Dialog", "Ajouter", 0));
        b_supprSupp->setText(QApplication::translate("Dialog", "Supprimer", 0));
        l_photoPrincipal->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUT_H
