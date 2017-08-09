/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionClear;
    QAction *actionQuit;
    QAction *actionHelp;
    QAction *actionAbout;
    QWidget *centralWidget;
    QTextEdit *textEditDisplay;
    QPushButton *pushButtonCount;
    QGroupBox *groupBoxTextInfo;
    QLabel *label1;
    QLabel *label2;
    QLineEdit *lineEditTotal;
    QLineEdit *lineEditLetter;
    QLineEdit *lineEditLetterNum;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(500, 471);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionClear = new QAction(MainWindow);
        actionClear->setObjectName(QStringLiteral("actionClear"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEditDisplay = new QTextEdit(centralWidget);
        textEditDisplay->setObjectName(QStringLiteral("textEditDisplay"));
        textEditDisplay->setGeometry(QRect(10, 10, 480, 250));
        pushButtonCount = new QPushButton(centralWidget);
        pushButtonCount->setObjectName(QStringLiteral("pushButtonCount"));
        pushButtonCount->setGeometry(QRect(50, 290, 130, 111));
        groupBoxTextInfo = new QGroupBox(centralWidget);
        groupBoxTextInfo->setObjectName(QStringLiteral("groupBoxTextInfo"));
        groupBoxTextInfo->setGeometry(QRect(240, 280, 231, 131));
        label1 = new QLabel(groupBoxTextInfo);
        label1->setObjectName(QStringLiteral("label1"));
        label1->setGeometry(QRect(10, 30, 80, 20));
        label2 = new QLabel(groupBoxTextInfo);
        label2->setObjectName(QStringLiteral("label2"));
        label2->setGeometry(QRect(10, 90, 80, 20));
        lineEditTotal = new QLineEdit(groupBoxTextInfo);
        lineEditTotal->setObjectName(QStringLiteral("lineEditTotal"));
        lineEditTotal->setGeometry(QRect(110, 30, 80, 20));
        lineEditLetter = new QLineEdit(groupBoxTextInfo);
        lineEditLetter->setObjectName(QStringLiteral("lineEditLetter"));
        lineEditLetter->setGeometry(QRect(110, 90, 80, 20));
        lineEditLetterNum = new QLineEdit(groupBoxTextInfo);
        lineEditLetterNum->setObjectName(QStringLiteral("lineEditLetterNum"));
        lineEditLetterNum->setGeometry(QRect(110, 60, 80, 20));
        label = new QLabel(groupBoxTextInfo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 60, 80, 20));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 500, 23));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuEdit->addAction(actionClear);
        menuHelp->addAction(actionHelp);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "Open(&O)...", 0));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\346\234\254", 0));
#endif // QT_NO_TOOLTIP
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        actionSave->setText(QApplication::translate("MainWindow", "Save(&S)", 0));
#ifndef QT_NO_TOOLTIP
        actionSave->setToolTip(QApplication::translate("MainWindow", "\344\277\235\345\255\230\346\226\207\346\234\254\344\277\241\346\201\257", 0));
#endif // QT_NO_TOOLTIP
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        actionClear->setText(QApplication::translate("MainWindow", "Clear(&C)", 0));
#ifndef QT_NO_TOOLTIP
        actionClear->setToolTip(QApplication::translate("MainWindow", "\346\270\205\351\231\244\347\274\223\345\255\230", 0));
#endif // QT_NO_TOOLTIP
        actionQuit->setText(QApplication::translate("MainWindow", "Quit(&Q)", 0));
#ifndef QT_NO_TOOLTIP
        actionQuit->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272", 0));
#endif // QT_NO_TOOLTIP
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0));
        actionHelp->setText(QApplication::translate("MainWindow", "Help(&H)", 0));
#ifndef QT_NO_TOOLTIP
        actionHelp->setToolTip(QApplication::translate("MainWindow", "\345\270\256\345\212\251", 0));
#endif // QT_NO_TOOLTIP
        actionHelp->setShortcut(QApplication::translate("MainWindow", "F1", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About(&A)", 0));
#ifndef QT_NO_TOOLTIP
        actionAbout->setToolTip(QApplication::translate("MainWindow", "\345\205\263\344\272\216\346\234\254\350\275\257\344\273\266", 0));
#endif // QT_NO_TOOLTIP
        pushButtonCount->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\347\273\237\350\256\241", 0));
        groupBoxTextInfo->setTitle(QApplication::translate("MainWindow", "\346\226\207\346\234\254\344\277\241\346\201\257\347\273\237\350\256\241", 0));
        label1->setText(QApplication::translate("MainWindow", "\345\255\227\344\270\262\351\225\277\345\272\246", 0));
        label2->setText(QApplication::translate("MainWindow", "\351\242\221\346\254\241\346\234\200\345\244\232\345\255\227\346\257\215", 0));
        label->setText(QApplication::translate("MainWindow", "\345\207\272\347\216\260\345\255\227\346\257\215\346\200\273\350\256\241", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", 0));
        menuEdit->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221(&E)", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251(&H)", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
