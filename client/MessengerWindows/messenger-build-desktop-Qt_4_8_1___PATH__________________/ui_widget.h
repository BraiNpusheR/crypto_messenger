/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created: Wed Dec 4 19:09:19 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *Registration;
    QPushButton *Authorization;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(241, 355);
        Registration = new QPushButton(Widget);
        Registration->setObjectName(QString::fromUtf8("Registration"));
        Registration->setGeometry(QRect(80, 260, 98, 27));
        Authorization = new QPushButton(Widget);
        Authorization->setObjectName(QString::fromUtf8("Authorization"));
        Authorization->setGeometry(QRect(80, 300, 98, 27));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 0, 141, 51));
        QFont font;
        font.setPointSize(18);
        font.setUnderline(true);
        label->setFont(font);
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(50, 100, 151, 27));
        lineEdit_2 = new QLineEdit(Widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(50, 170, 151, 27));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 70, 66, 21));
        QFont font1;
        font1.setPointSize(14);
        label_2->setFont(font1);
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 140, 91, 17));
        label_3->setFont(font1);
        QWidget::setTabOrder(Authorization, lineEdit);
        QWidget::setTabOrder(lineEdit, Registration);
        QWidget::setTabOrder(Registration, lineEdit_2);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
        Registration->setText(QApplication::translate("Widget", "Register", 0, QApplication::UnicodeUTF8));
        Authorization->setText(QApplication::translate("Widget", "Authorize", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Widget", "MESSENGER", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Widget", "Login:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Widget", "Password:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
