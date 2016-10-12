/********************************************************************************
** Form generated from reading UI file 'choix_client.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOIX_CLIENT_H
#define UI_CHOIX_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ChoixClient
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *cbo_choix_client;
    QPushButton *btn_annuler;
    QPushButton *btn_valider;

    void setupUi(QDialog *ChoixClient)
    {
        if (ChoixClient->objectName().isEmpty())
            ChoixClient->setObjectName(QStringLiteral("ChoixClient"));
        ChoixClient->resize(340, 107);
        gridLayout_2 = new QGridLayout(ChoixClient);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(ChoixClient);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        cbo_choix_client = new QComboBox(ChoixClient);
        cbo_choix_client->setObjectName(QStringLiteral("cbo_choix_client"));

        gridLayout->addWidget(cbo_choix_client, 0, 1, 1, 2);

        btn_annuler = new QPushButton(ChoixClient);
        btn_annuler->setObjectName(QStringLiteral("btn_annuler"));
        btn_annuler->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(btn_annuler, 1, 1, 1, 1);

        btn_valider = new QPushButton(ChoixClient);
        btn_valider->setObjectName(QStringLiteral("btn_valider"));
        btn_valider->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(btn_valider, 1, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(ChoixClient);

        QMetaObject::connectSlotsByName(ChoixClient);
    } // setupUi

    void retranslateUi(QDialog *ChoixClient)
    {
        ChoixClient->setWindowTitle(QApplication::translate("ChoixClient", "Choix client", 0));
        label->setText(QApplication::translate("ChoixClient", "Client b\303\251n\303\251ficiaire :", 0));
        btn_annuler->setText(QApplication::translate("ChoixClient", "Annuler", 0));
        btn_valider->setText(QApplication::translate("ChoixClient", "Valider", 0));
    } // retranslateUi

};

namespace Ui {
    class ChoixClient: public Ui_ChoixClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOIX_CLIENT_H
