/********************************************************************************
** Form generated from reading UI file 'ViewportWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef VIEWPORTWIDGET_H
#define VIEWPORTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Viewport
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *Viewport)
    {
        if (Viewport->objectName().isEmpty())
            Viewport->setObjectName("Viewport");
        Viewport->resize(707, 461);
        gridLayout = new QGridLayout(Viewport);
        gridLayout->setObjectName("gridLayout");
        frame = new QFrame(Viewport);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(Viewport);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(Viewport);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(Viewport);

        QMetaObject::connectSlotsByName(Viewport);
    } // setupUi

    void retranslateUi(QWidget *Viewport)
    {
        Viewport->setWindowTitle(QCoreApplication::translate("Viewport", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Viewport", "Play", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Viewport", "Pause", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Viewport: public Ui_Viewport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // VIEWPORTWIDGET_H
