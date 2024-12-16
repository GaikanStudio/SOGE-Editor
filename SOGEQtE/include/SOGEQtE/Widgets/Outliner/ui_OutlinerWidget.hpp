/********************************************************************************
** Form generated from reading UI file 'OutlinerWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef OUTLINERWIDGET_H
#define OUTLINERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OutlinerWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QTreeWidget *treeWidget;

    void setupUi(QWidget *OutlinerWidget)
    {
        if (OutlinerWidget->objectName().isEmpty())
            OutlinerWidget->setObjectName("OutlinerWidget");
        OutlinerWidget->resize(310, 677);
        verticalLayout_2 = new QVBoxLayout(OutlinerWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(OutlinerWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(OutlinerWidget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(OutlinerWidget);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(OutlinerWidget);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);

        lineEdit = new QLineEdit(OutlinerWidget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout_3->addWidget(lineEdit);


        verticalLayout_2->addLayout(horizontalLayout_3);

        scrollArea = new QScrollArea(OutlinerWidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 290, 597));
        scrollAreaWidgetContents->setMinimumSize(QSize(0, 592));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setObjectName("verticalLayout_3");
        treeWidget = new QTreeWidget(scrollAreaWidgetContents);
        treeWidget->setObjectName("treeWidget");

        verticalLayout_3->addWidget(treeWidget);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);


        retranslateUi(OutlinerWidget);

        QMetaObject::connectSlotsByName(OutlinerWidget);
    } // setupUi

    void retranslateUi(QWidget *OutlinerWidget)
    {
        OutlinerWidget->setWindowTitle(QCoreApplication::translate("OutlinerWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("OutlinerWidget", "Display", nullptr));
        label_2->setText(QCoreApplication::translate("OutlinerWidget", "Show", nullptr));
        label_3->setText(QCoreApplication::translate("OutlinerWidget", "Help", nullptr));
        label_4->setText(QCoreApplication::translate("OutlinerWidget", "Search", nullptr));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("OutlinerWidget", "Search...", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("OutlinerWidget", "Root", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OutlinerWidget: public Ui_OutlinerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // OUTLINERWIDGET_H
