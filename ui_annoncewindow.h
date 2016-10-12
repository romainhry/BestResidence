/********************************************************************************
** Form generated from reading UI file 'annoncewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANNONCEWINDOW_H
#define UI_ANNONCEWINDOW_H

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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogAnnonce
{
public:
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QWidget *photoPrincipale;
    QLabel *l_photo;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *l_client;
    QLabel *l_id;
    QLabel *l_contact;
    QGridLayout *gridLayout;
    QLabel *l_loyer;
    QLabel *l_surface;
    QLabel *label;
    QLabel *l_pieces;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *l_adresse;
    QLabel *label_4;
    QLabel *l_codeP;
    QLabel *l_ville;
    QLabel *l_prix;
    QTextEdit *description;
    QLabel *date;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupPhotos;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QLabel *label_9;
    QLabel *label_6;
    QLabel *photoSupp;
    QPushButton *b_previous;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_8;
    QPushButton *b_next;
    QLabel *l_nbPhotos;
    QHBoxLayout *horizontalLayout;
    QPushButton *b_typeAnnonce;
    QSpacerItem *horizontalSpacer;
    QPushButton *b_modifier;
    QPushButton *b_supprimer;
    QPushButton *b_retour;

    void setupUi(QDialog *DialogAnnonce)
    {
        if (DialogAnnonce->objectName().isEmpty())
            DialogAnnonce->setObjectName(QStringLiteral("DialogAnnonce"));
        DialogAnnonce->resize(586, 670);
        gridLayout_5 = new QGridLayout(DialogAnnonce);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox_3 = new QGroupBox(DialogAnnonce);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        photoPrincipale = new QWidget(groupBox_3);
        photoPrincipale->setObjectName(QStringLiteral("photoPrincipale"));
        l_photo = new QLabel(photoPrincipale);
        l_photo->setObjectName(QStringLiteral("l_photo"));
        l_photo->setGeometry(QRect(10, 10, 291, 201));

        gridLayout_2->addWidget(photoPrincipale, 0, 0, 2, 1);

        groupBox = new QGroupBox(groupBox_3);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        l_client = new QLabel(groupBox);
        l_client->setObjectName(QStringLiteral("l_client"));

        verticalLayout->addWidget(l_client);

        l_id = new QLabel(groupBox);
        l_id->setObjectName(QStringLiteral("l_id"));

        verticalLayout->addWidget(l_id);

        l_contact = new QLabel(groupBox);
        l_contact->setObjectName(QStringLiteral("l_contact"));

        verticalLayout->addWidget(l_contact);


        gridLayout_2->addWidget(groupBox, 0, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        l_loyer = new QLabel(groupBox_3);
        l_loyer->setObjectName(QStringLiteral("l_loyer"));

        gridLayout->addWidget(l_loyer, 0, 0, 1, 1);

        l_surface = new QLabel(groupBox_3);
        l_surface->setObjectName(QStringLiteral("l_surface"));

        gridLayout->addWidget(l_surface, 1, 1, 1, 1);

        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 2, 1, 1);

        l_pieces = new QLabel(groupBox_3);
        l_pieces->setObjectName(QStringLiteral("l_pieces"));

        gridLayout->addWidget(l_pieces, 1, 3, 1, 1);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        l_adresse = new QLabel(groupBox_3);
        l_adresse->setObjectName(QStringLiteral("l_adresse"));

        gridLayout->addWidget(l_adresse, 4, 1, 1, 3);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        l_codeP = new QLabel(groupBox_3);
        l_codeP->setObjectName(QStringLiteral("l_codeP"));

        gridLayout->addWidget(l_codeP, 3, 1, 1, 2);

        l_ville = new QLabel(groupBox_3);
        l_ville->setObjectName(QStringLiteral("l_ville"));

        gridLayout->addWidget(l_ville, 2, 1, 1, 3);

        l_prix = new QLabel(groupBox_3);
        l_prix->setObjectName(QStringLiteral("l_prix"));

        gridLayout->addWidget(l_prix, 0, 1, 1, 3);


        gridLayout_2->addLayout(gridLayout, 1, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox_3);

        description = new QTextEdit(DialogAnnonce);
        description->setObjectName(QStringLiteral("description"));

        verticalLayout_2->addWidget(description);


        verticalLayout_3->addLayout(verticalLayout_2);

        date = new QLabel(DialogAnnonce);
        date->setObjectName(QStringLiteral("date"));

        verticalLayout_3->addWidget(date);


        gridLayout_5->addLayout(verticalLayout_3, 0, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        groupPhotos = new QGroupBox(DialogAnnonce);
        groupPhotos->setObjectName(QStringLiteral("groupPhotos"));
        gridLayout_4 = new QGridLayout(groupPhotos);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_9 = new QLabel(groupPhotos);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_3->addWidget(label_9, 1, 0, 1, 1);

        label_6 = new QLabel(groupPhotos);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 6, 0, 1, 1);

        photoSupp = new QLabel(groupPhotos);
        photoSupp->setObjectName(QStringLiteral("photoSupp"));

        gridLayout_3->addWidget(photoSupp, 0, 1, 6, 3);

        b_previous = new QPushButton(groupPhotos);
        b_previous->setObjectName(QStringLiteral("b_previous"));
        b_previous->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_3->addWidget(b_previous, 3, 0, 1, 1);

        label_10 = new QLabel(groupPhotos);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_3->addWidget(label_10, 6, 4, 1, 1);

        label_11 = new QLabel(groupPhotos);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_3->addWidget(label_11, 5, 4, 1, 1);

        label_12 = new QLabel(groupPhotos);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_3->addWidget(label_12, 1, 4, 1, 1);

        label_8 = new QLabel(groupPhotos);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_3->addWidget(label_8, 0, 0, 1, 1);

        b_next = new QPushButton(groupPhotos);
        b_next->setObjectName(QStringLiteral("b_next"));
        b_next->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_3->addWidget(b_next, 3, 4, 1, 1);

        l_nbPhotos = new QLabel(groupPhotos);
        l_nbPhotos->setObjectName(QStringLiteral("l_nbPhotos"));

        gridLayout_3->addWidget(l_nbPhotos, 6, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);


        verticalLayout_4->addWidget(groupPhotos);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        b_typeAnnonce = new QPushButton(DialogAnnonce);
        b_typeAnnonce->setObjectName(QStringLiteral("b_typeAnnonce"));
        b_typeAnnonce->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(b_typeAnnonce);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        b_modifier = new QPushButton(DialogAnnonce);
        b_modifier->setObjectName(QStringLiteral("b_modifier"));
        b_modifier->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(b_modifier);

        b_supprimer = new QPushButton(DialogAnnonce);
        b_supprimer->setObjectName(QStringLiteral("b_supprimer"));
        b_supprimer->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(b_supprimer);

        b_retour = new QPushButton(DialogAnnonce);
        b_retour->setObjectName(QStringLiteral("b_retour"));
        b_retour->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(b_retour);


        verticalLayout_4->addLayout(horizontalLayout);


        gridLayout_5->addLayout(verticalLayout_4, 1, 0, 1, 1);

        b_next->raise();
        b_next->raise();

        retranslateUi(DialogAnnonce);

        QMetaObject::connectSlotsByName(DialogAnnonce);
    } // setupUi

    void retranslateUi(QDialog *DialogAnnonce)
    {
        DialogAnnonce->setWindowTitle(QApplication::translate("DialogAnnonce", "D\303\251tails de l'annonce", 0));
        groupBox_3->setTitle(QString());
        l_photo->setText(QString());
        groupBox->setTitle(QApplication::translate("DialogAnnonce", "Contact", 0));
        l_client->setText(QApplication::translate("DialogAnnonce", "Nom - Pr\303\251nom - identifiants", 0));
        l_id->setText(QApplication::translate("DialogAnnonce", "TextLabel", 0));
        l_contact->setText(QApplication::translate("DialogAnnonce", "Contact", 0));
        l_loyer->setText(QApplication::translate("DialogAnnonce", "Prix :", 0));
        l_surface->setText(QApplication::translate("DialogAnnonce", "Surface", 0));
        label->setText(QApplication::translate("DialogAnnonce", "Pi\303\250ces :", 0));
        l_pieces->setText(QApplication::translate("DialogAnnonce", "Pi\303\250ces", 0));
        label_3->setText(QApplication::translate("DialogAnnonce", "Ville :", 0));
        label_5->setText(QApplication::translate("DialogAnnonce", "Adresse :", 0));
        label_2->setText(QApplication::translate("DialogAnnonce", "Surface :", 0));
        l_adresse->setText(QApplication::translate("DialogAnnonce", "Adresse", 0));
        label_4->setText(QApplication::translate("DialogAnnonce", "Code postal :", 0));
        l_codeP->setText(QApplication::translate("DialogAnnonce", "Code postal", 0));
        l_ville->setText(QApplication::translate("DialogAnnonce", "Ville", 0));
        l_prix->setText(QApplication::translate("DialogAnnonce", "Prix", 0));
        date->setText(QApplication::translate("DialogAnnonce", "Offre disponible depuis le ", 0));
        groupPhotos->setTitle(QApplication::translate("DialogAnnonce", "Photos", 0));
        label_9->setText(QString());
        label_6->setText(QString());
        photoSupp->setText(QString());
        b_previous->setText(QApplication::translate("DialogAnnonce", "<", 0));
        label_10->setText(QString());
        label_11->setText(QString());
        label_12->setText(QString());
        label_8->setText(QString());
        b_next->setText(QApplication::translate("DialogAnnonce", ">", 0));
        l_nbPhotos->setText(QApplication::translate("DialogAnnonce", "x photos disponibles", 0));
        b_typeAnnonce->setText(QApplication::translate("DialogAnnonce", "Vendu", 0));
        b_typeAnnonce->setShortcut(QApplication::translate("DialogAnnonce", "Esc", 0));
        b_modifier->setText(QApplication::translate("DialogAnnonce", "Modifier", 0));
        b_supprimer->setText(QApplication::translate("DialogAnnonce", "Supprimer", 0));
        b_supprimer->setShortcut(QApplication::translate("DialogAnnonce", "Esc", 0));
        b_retour->setText(QApplication::translate("DialogAnnonce", "Retour", 0));
        b_retour->setShortcut(QApplication::translate("DialogAnnonce", "Esc", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogAnnonce: public Ui_DialogAnnonce {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANNONCEWINDOW_H
