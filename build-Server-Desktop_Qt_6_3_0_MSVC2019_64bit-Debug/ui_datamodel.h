/********************************************************************************
** Form generated from reading UI file 'datamodel.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAMODEL_H
#define UI_DATAMODEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataModel
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QPushButton *submitButton;
    QPushButton *rollbackButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DataModel)
    {
        if (DataModel->objectName().isEmpty())
            DataModel->setObjectName(QString::fromUtf8("DataModel"));
        centralwidget = new QWidget(DataModel);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);

        addButton = new QPushButton(centralwidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        verticalLayout->addWidget(addButton);

        deleteButton = new QPushButton(centralwidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        verticalLayout->addWidget(deleteButton);

        submitButton = new QPushButton(centralwidget);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));

        verticalLayout->addWidget(submitButton);

        rollbackButton = new QPushButton(centralwidget);
        rollbackButton->setObjectName(QString::fromUtf8("rollbackButton"));

        verticalLayout->addWidget(rollbackButton);

        DataModel->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DataModel);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 408, 25));
        DataModel->setMenuBar(menubar);
        statusbar = new QStatusBar(DataModel);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        DataModel->setStatusBar(statusbar);

        retranslateUi(DataModel);

        QMetaObject::connectSlotsByName(DataModel);
    } // setupUi

    void retranslateUi(QMainWindow *DataModel)
    {
        DataModel->setWindowTitle(QCoreApplication::translate("DataModel", "MainWindow", nullptr));
        addButton->setText(QCoreApplication::translate("DataModel", "\346\267\273\345\212\240\350\256\260\345\275\225", nullptr));
        deleteButton->setText(QCoreApplication::translate("DataModel", "\345\210\240\351\231\244\351\200\211\344\270\255\350\241\214", nullptr));
        submitButton->setText(QCoreApplication::translate("DataModel", "\346\217\220\344\272\244\344\277\256\346\224\271", nullptr));
        rollbackButton->setText(QCoreApplication::translate("DataModel", "\346\222\244\351\224\200\344\277\256\346\224\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataModel: public Ui_DataModel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAMODEL_H
