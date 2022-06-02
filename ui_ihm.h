/********************************************************************************
** Form generated from reading UI file 'ihm.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IHM_H
#define UI_IHM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IHM
{
public:
    QAction *action_R_seau;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QPushButton *buttonConnect;
    QTextEdit *tESC;
    QLabel *label_7;
    QLabel *label_8;
    QTextEdit *tESF;
    QLabel *label_9;
    QTextEdit *tESB;
    QPushButton *startCycle;
    QPushButton *stopCycle;
    QPushButton *razButton;
    QPushButton *pauseCycle;
    QWidget *tab;
    QTextEdit *tEFanuc;
    QTextEdit *tEBraccio;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *idC;
    QSpinBox *idF;
    QSpinBox *idB;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QTextEdit *tEConvoyeur;
    QPushButton *exitButton;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *IHM)
    {
        if (IHM->objectName().isEmpty())
            IHM->setObjectName(QString::fromUtf8("IHM"));
        IHM->resize(1300, 700);
        IHM->setMinimumSize(QSize(1300, 700));
        IHM->setWindowOpacity(1.000000000000000);
        IHM->setAutoFillBackground(false);
        IHM->setStyleSheet(QString::fromUtf8("background-color: grey;"));
        action_R_seau = new QAction(IHM);
        action_R_seau->setObjectName(QString::fromUtf8("action_R_seau"));
        centralwidget = new QWidget(IHM);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(10, 40, 1261, 591));
        tabWidget->setAcceptDrops(true);
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: #0070FF;\n"
"opacity: 1;\n"
"margin-top: auto;\n"
"margin-bottom: auto;\n"
"margin-left: auto;\n"
"margin-right: auto;"));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        buttonConnect = new QPushButton(tab_3);
        buttonConnect->setObjectName(QString::fromUtf8("buttonConnect"));
        buttonConnect->setGeometry(QRect(70, 30, 141, 61));
        QFont font;
        font.setPointSize(16);
        buttonConnect->setFont(font);
        buttonConnect->setStyleSheet(QString::fromUtf8("opacity: 1;\n"
"color: black;\n"
"background-color: white;"));
        tESC = new QTextEdit(tab_3);
        tESC->setObjectName(QString::fromUtf8("tESC"));
        tESC->setEnabled(false);
        tESC->setGeometry(QRect(120, 180, 171, 41));
        QFont font1;
        font1.setPointSize(28);
        font1.setBold(false);
        tESC->setFont(font1);
        tESC->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color:#625a87;"));
        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 180, 111, 41));
        QFont font2;
        font2.setPointSize(14);
        label_7->setFont(font2);
        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 290, 111, 41));
        label_8->setFont(font2);
        tESF = new QTextEdit(tab_3);
        tESF->setObjectName(QString::fromUtf8("tESF"));
        tESF->setEnabled(false);
        tESF->setGeometry(QRect(120, 290, 171, 41));
        tESF->setFont(font1);
        tESF->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color:#625a87;"));
        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 400, 111, 41));
        label_9->setFont(font2);
        tESB = new QTextEdit(tab_3);
        tESB->setObjectName(QString::fromUtf8("tESB"));
        tESB->setEnabled(false);
        tESB->setGeometry(QRect(120, 400, 171, 41));
        tESB->setFont(font1);
        tESB->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color:#625a87;"));
        startCycle = new QPushButton(tab_3);
        startCycle->setObjectName(QString::fromUtf8("startCycle"));
        startCycle->setEnabled(false);
        startCycle->setGeometry(QRect(430, 180, 181, 61));
        startCycle->setFont(font);
        startCycle->setStyleSheet(QString::fromUtf8("opacity: 1;\n"
"color: black;\n"
"background-color: white;"));
        stopCycle = new QPushButton(tab_3);
        stopCycle->setObjectName(QString::fromUtf8("stopCycle"));
        stopCycle->setEnabled(true);
        stopCycle->setGeometry(QRect(430, 270, 171, 61));
        stopCycle->setFont(font);
        stopCycle->setStyleSheet(QString::fromUtf8("opacity: 1;\n"
"color: black;\n"
"background-color: white;"));
        razButton = new QPushButton(tab_3);
        razButton->setObjectName(QString::fromUtf8("razButton"));
        razButton->setEnabled(true);
        razButton->setGeometry(QRect(1130, 480, 101, 61));
        razButton->setFont(font);
        razButton->setStyleSheet(QString::fromUtf8("opacity: 1;\n"
"color: black;\n"
"background-color: white;"));
        pauseCycle = new QPushButton(tab_3);
        pauseCycle->setObjectName(QString::fromUtf8("pauseCycle"));
        pauseCycle->setEnabled(true);
        pauseCycle->setGeometry(QRect(640, 230, 171, 61));
        pauseCycle->setFont(font);
        pauseCycle->setStyleSheet(QString::fromUtf8("opacity: 1;\n"
"color: black;\n"
"background-color: white;"));
        tabWidget->addTab(tab_3, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tab->setEnabled(true);
        tEFanuc = new QTextEdit(tab);
        tEFanuc->setObjectName(QString::fromUtf8("tEFanuc"));
        tEFanuc->setGeometry(QRect(300, 240, 501, 61));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("DejaVu Sans")});
        font3.setPointSize(26);
        tEFanuc->setFont(font3);
        tEFanuc->setStyleSheet(QString::fromUtf8("opacity: 1;\n"
"color: black;\n"
"background-color:white;"));
        tEBraccio = new QTextEdit(tab);
        tEBraccio->setObjectName(QString::fromUtf8("tEBraccio"));
        tEBraccio->setGeometry(QRect(300, 400, 501, 61));
        tEBraccio->setFont(font);
        tEBraccio->setStyleSheet(QString::fromUtf8("opacity: 1;\n"
"color: black;\n"
"background-color:white;"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 80, 171, 61));
        label->setFont(font);
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 240, 101, 61));
        label_2->setFont(font);
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(120, 400, 141, 61));
        label_3->setFont(font);
        idC = new QSpinBox(tab);
        idC->setObjectName(QString::fromUtf8("idC"));
        idC->setGeometry(QRect(870, 80, 111, 61));
        idC->setFont(font);
        idC->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: black;"));
        idF = new QSpinBox(tab);
        idF->setObjectName(QString::fromUtf8("idF"));
        idF->setGeometry(QRect(870, 240, 111, 61));
        idF->setFont(font);
        idF->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: black;"));
        idB = new QSpinBox(tab);
        idB->setObjectName(QString::fromUtf8("idB"));
        idB->setGeometry(QRect(870, 400, 111, 61));
        idB->setFont(font);
        idB->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: black;"));
        idB->setValue(1);
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(830, 80, 31, 61));
        label_4->setFont(font);
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(830, 240, 31, 61));
        label_5->setFont(font);
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(830, 400, 31, 61));
        label_6->setFont(font);
        tEConvoyeur = new QTextEdit(tab);
        tEConvoyeur->setObjectName(QString::fromUtf8("tEConvoyeur"));
        tEConvoyeur->setGeometry(QRect(300, 80, 501, 61));
        tEConvoyeur->setFont(font3);
        tEConvoyeur->setStyleSheet(QString::fromUtf8("opacity: 1;\n"
"color: black;\n"
"background-color:white;"));
        tabWidget->addTab(tab, QString());
        exitButton = new QPushButton(centralwidget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(550, 10, 101, 31));
        exitButton->setFont(font);
        exitButton->setStyleSheet(QString::fromUtf8("opacity: 1;\n"
"color: black;\n"
"background-color: white;"));
        IHM->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(IHM);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        IHM->setStatusBar(statusbar);
        toolBar = new QToolBar(IHM);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        IHM->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(IHM);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(IHM);
    } // setupUi

    void retranslateUi(QMainWindow *IHM)
    {
        IHM->setWindowTitle(QCoreApplication::translate("IHM", "IHM", nullptr));
        action_R_seau->setText(QCoreApplication::translate("IHM", "---Param\303\250tres R\303\251seaux---", nullptr));
        buttonConnect->setText(QCoreApplication::translate("IHM", "CONNEXION", nullptr));
        tESC->setHtml(QCoreApplication::translate("IHM", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:28pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:37px; margin-bottom:37px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:16pt;\">DECONNECTE</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("IHM", "Convoyeur:", nullptr));
        label_8->setText(QCoreApplication::translate("IHM", "Fannuc:", nullptr));
        tESF->setHtml(QCoreApplication::translate("IHM", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:28pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:37px; margin-bottom:37px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:16pt;\">DECONNECTE</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("IHM", "Braccio:", nullptr));
        tESB->setHtml(QCoreApplication::translate("IHM", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:28pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:37px; margin-bottom:37px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:16pt;\">DECONNECTE</span></p></body></html>", nullptr));
        startCycle->setText(QCoreApplication::translate("IHM", "LANCER CYCLE", nullptr));
        stopCycle->setText(QCoreApplication::translate("IHM", "STOP CYCLE", nullptr));
        razButton->setText(QCoreApplication::translate("IHM", "RAZ ", nullptr));
        pauseCycle->setText(QCoreApplication::translate("IHM", "PAUSE CYCLE", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("IHM", "Tableau de bord", nullptr));
        tEFanuc->setHtml(QCoreApplication::translate("IHM", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:26pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:16pt;\">0</span></p></body></html>", nullptr));
        tEBraccio->setHtml(QCoreApplication::translate("IHM", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">0</p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("IHM", "IP CONVOYEUR:", nullptr));
        label_2->setText(QCoreApplication::translate("IHM", "IP FANUC:", nullptr));
        label_3->setText(QCoreApplication::translate("IHM", "IP BRACCIO:", nullptr));
        label_4->setText(QCoreApplication::translate("IHM", "ID:", nullptr));
        label_5->setText(QCoreApplication::translate("IHM", "ID:", nullptr));
        label_6->setText(QCoreApplication::translate("IHM", "ID:", nullptr));
        tEConvoyeur->setHtml(QCoreApplication::translate("IHM", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:26pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:16pt;\">0</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("IHM", "Param\303\250tres R\303\251seaux", nullptr));
        exitButton->setText(QCoreApplication::translate("IHM", "Quitter", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("IHM", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IHM: public Ui_IHM {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IHM_H
