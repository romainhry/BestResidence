/********************************************************************************
** Form generated from reading UI file 'ajoutclient.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTCLIENT_H
#define UI_AJOUTCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_ajoutClient
{
public:
    QGridLayout *gridLayout_21;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *l_typeAnnonce;
    QComboBox *genre;
    QLabel *l_nom;
    QLineEdit *q_nom;
    QLabel *l_prenom;
    QLineEdit *q_prenom;
    QLabel *l_adresse_2;
    QDateEdit *date;
    QGroupBox *groupBox1;
    QGridLayout *gridLayout_2;
    QLabel *l_adresse;
    QLineEdit *q_adresse;
    QLabel *l_ville;
    QLineEdit *q_ville;
    QLabel *l_codePostal;
    QLineEdit *q_codePostal;
    QGroupBox *groupBox2;
    QGridLayout *gridLayout_3;
    QLabel *l_courriel;
    QLineEdit *q_courriel;
    QLabel *l_telephone;
    QLineEdit *q_telephone;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *b_annuler;
    QPushButton *b_valider;

    void setupUi(QDialog *ajoutClient)
    {
        if (ajoutClient->objectName().isEmpty())
            ajoutClient->setObjectName(QStringLiteral("ajoutClient"));
        ajoutClient->resize(490, 465);
        gridLayout_21 = new QGridLayout(ajoutClient);
        gridLayout_21->setObjectName(QStringLiteral("gridLayout_21"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        groupBox = new QGroupBox(ajoutClient);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        l_typeAnnonce = new QLabel(groupBox);
        l_typeAnnonce->setObjectName(QStringLiteral("l_typeAnnonce"));

        gridLayout->addWidget(l_typeAnnonce, 0, 0, 1, 1);

        genre = new QComboBox(groupBox);
        genre->setObjectName(QStringLiteral("genre"));
        genre->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(genre, 0, 1, 1, 1);

        l_nom = new QLabel(groupBox);
        l_nom->setObjectName(QStringLiteral("l_nom"));

        gridLayout->addWidget(l_nom, 1, 0, 1, 1);

        q_nom = new QLineEdit(groupBox);
        q_nom->setObjectName(QStringLiteral("q_nom"));

        gridLayout->addWidget(q_nom, 1, 1, 1, 1);

        l_prenom = new QLabel(groupBox);
        l_prenom->setObjectName(QStringLiteral("l_prenom"));

        gridLayout->addWidget(l_prenom, 2, 0, 1, 1);

        q_prenom = new QLineEdit(groupBox);
        q_prenom->setObjectName(QStringLiteral("q_prenom"));

        gridLayout->addWidget(q_prenom, 2, 1, 1, 1);

        l_adresse_2 = new QLabel(groupBox);
        l_adresse_2->setObjectName(QStringLiteral("l_adresse_2"));

        gridLayout->addWidget(l_adresse_2, 3, 0, 1, 1);

        date = new QDateEdit(groupBox);
        date->setObjectName(QStringLiteral("date"));

        gridLayout->addWidget(date, 3, 1, 1, 1);


        gridLayout_4->addWidget(groupBox, 0, 0, 1, 1);

        groupBox1 = new QGroupBox(ajoutClient);
        groupBox1->setObjectName(QStringLiteral("groupBox1"));
        gridLayout_2 = new QGridLayout(groupBox1);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        l_adresse = new QLabel(groupBox1);
        l_adresse->setObjectName(QStringLiteral("l_adresse"));

        gridLayout_2->addWidget(l_adresse, 0, 0, 1, 1);

        q_adresse = new QLineEdit(groupBox1);
        q_adresse->setObjectName(QStringLiteral("q_adresse"));

        gridLayout_2->addWidget(q_adresse, 0, 1, 1, 3);

        l_ville = new QLabel(groupBox1);
        l_ville->setObjectName(QStringLiteral("l_ville"));

        gridLayout_2->addWidget(l_ville, 1, 0, 1, 1);

        q_ville = new QLineEdit(groupBox1);
        q_ville->setObjectName(QStringLiteral("q_ville"));

        gridLayout_2->addWidget(q_ville, 1, 1, 1, 1);

        l_codePostal = new QLabel(groupBox1);
        l_codePostal->setObjectName(QStringLiteral("l_codePostal"));

        gridLayout_2->addWidget(l_codePostal, 1, 2, 1, 1);

        q_codePostal = new QLineEdit(groupBox1);
        q_codePostal->setObjectName(QStringLiteral("q_codePostal"));

        gridLayout_2->addWidget(q_codePostal, 1, 3, 1, 1);


        gridLayout_4->addWidget(groupBox1, 1, 0, 1, 1);

        groupBox2 = new QGroupBox(ajoutClient);
        groupBox2->setObjectName(QStringLiteral("groupBox2"));
        gridLayout_3 = new QGridLayout(groupBox2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        l_courriel = new QLabel(groupBox2);
        l_courriel->setObjectName(QStringLiteral("l_courriel"));

        gridLayout_3->addWidget(l_courriel, 0, 0, 1, 1);

        q_courriel = new QLineEdit(groupBox2);
        q_courriel->setObjectName(QStringLiteral("q_courriel"));

        gridLayout_3->addWidget(q_courriel, 0, 1, 1, 1);

        l_telephone = new QLabel(groupBox2);
        l_telephone->setObjectName(QStringLiteral("l_telephone"));

        gridLayout_3->addWidget(l_telephone, 0, 2, 1, 1);

        q_telephone = new QLineEdit(groupBox2);
        q_telephone->setObjectName(QStringLiteral("q_telephone"));

        gridLayout_3->addWidget(q_telephone, 0, 3, 1, 1);


        gridLayout_4->addWidget(groupBox2, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        b_annuler = new QPushButton(ajoutClient);
        b_annuler->setObjectName(QStringLiteral("b_annuler"));
        b_annuler->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(b_annuler);

        b_valider = new QPushButton(ajoutClient);
        b_valider->setObjectName(QStringLiteral("b_valider"));
        b_valider->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(b_valider);


        gridLayout_4->addLayout(horizontalLayout, 3, 0, 1, 1);


        gridLayout_21->addLayout(gridLayout_4, 0, 0, 1, 1);


        retranslateUi(ajoutClient);

        QMetaObject::connectSlotsByName(ajoutClient);
    } // setupUi

    void retranslateUi(QDialog *ajoutClient)
    {
        ajoutClient->setWindowTitle(QApplication::translate("ajoutClient", "Ajouter un client ", 0));
        groupBox->setTitle(QApplication::translate("ajoutClient", "Identit\303\251", 0));
        l_typeAnnonce->setText(QApplication::translate("ajoutClient", "Genre", 0));
        genre->clear();
        genre->insertItems(0, QStringList()
         << QApplication::translate("ajoutClient", "Mr.", 0)
         << QApplication::translate("ajoutClient", "Mlle.", 0)
         << QApplication::translate("ajoutClient", "Mme.", 0)
        );
        l_nom->setText(QApplication::translate("ajoutClient", "Nom", 0));
        q_nom->setPlaceholderText(QString());
        l_prenom->setText(QApplication::translate("ajoutClient", "Pr\303\251nom", 0));
        q_prenom->setText(QString());
        q_prenom->setPlaceholderText(QString());
        l_adresse_2->setText(QApplication::translate("ajoutClient", "Date de naissance", 0));
        groupBox1->setTitle(QApplication::translate("ajoutClient", "Localisation", 0));
        l_adresse->setText(QApplication::translate("ajoutClient", "Adresse", 0));
        l_ville->setText(QApplication::translate("ajoutClient", "Ville", 0));
        l_codePostal->setText(QApplication::translate("ajoutClient", "Code Postal", 0));
        q_codePostal->setText(QString());
        q_codePostal->setPlaceholderText(QString());
        groupBox2->setTitle(QApplication::translate("ajoutClient", "Contacts", 0));
        l_courriel->setText(QApplication::translate("ajoutClient", "Courriel", 0));
        q_courriel->setText(QString());
        l_telephone->setText(QApplication::translate("ajoutClient", "T\303\251l\303\251phone", 0));
        b_annuler->setText(QApplication::translate("ajoutClient", "Annuler", 0));
        b_valider->setText(QApplication::translate("ajoutClient", "Valider", 0));
    } // retranslateUi

};

namespace Ui {
    class ajoutClient: public Ui_ajoutClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTCLIENT_H
