/********************************************************************************
** Form generated from reading UI file 'ContentBrowser.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef CONTENTBROWSER_H
#define CONTENTBROWSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ContentBrowser
{
public:
    QHBoxLayout *horizontalLayout;
    QTreeWidget *treeWidget;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *ContentBrowser)
    {
        if (ContentBrowser->objectName().isEmpty())
            ContentBrowser->setObjectName("ContentBrowser");
        ContentBrowser->resize(776, 389);
        horizontalLayout = new QHBoxLayout(ContentBrowser);
        horizontalLayout->setObjectName("horizontalLayout");
        treeWidget = new QTreeWidget(ContentBrowser);
        treeWidget->setObjectName("treeWidget");
        treeWidget->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(treeWidget);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        retranslateUi(ContentBrowser);

        QMetaObject::connectSlotsByName(ContentBrowser);
    } // setupUi

    void retranslateUi(QWidget *ContentBrowser)
    {
        ContentBrowser->setWindowTitle(QCoreApplication::translate("ContentBrowser", "Form", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("ContentBrowser", "Root", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ContentBrowser: public Ui_ContentBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // CONTENTBROWSER_H
