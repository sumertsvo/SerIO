/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QLabel *labelProgName;
    QTextBrowser *textBrowserAbout;
    QLabel *labelIcon1;
    QLabel *labelIcon2;
    QLabel *labelProgVersion;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->setWindowModality(Qt::ApplicationModal);
        AboutDialog->resize(431, 301);
        AboutDialog->setMinimumSize(QSize(431, 301));
        AboutDialog->setMaximumSize(QSize(431, 301));
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu"));
        font.setPointSize(9);
        AboutDialog->setFont(font);
        AboutDialog->setWindowTitle(QString::fromUtf8("About"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/Icons/serio-win.ico"), QSize(), QIcon::Normal, QIcon::Off);
        AboutDialog->setWindowIcon(icon);
#if QT_CONFIG(tooltip)
        AboutDialog->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        AboutDialog->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        AboutDialog->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        AboutDialog->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        AboutDialog->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        AboutDialog->setStyleSheet(QString::fromUtf8(""));
        AboutDialog->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        AboutDialog->setWindowFilePath(QString::fromUtf8(""));
        AboutDialog->setSizeGripEnabled(false);
        AboutDialog->setModal(true);
        labelProgName = new QLabel(AboutDialog);
        labelProgName->setObjectName(QString::fromUtf8("labelProgName"));
        labelProgName->setGeometry(QRect(95, 20, 241, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Ubuntu"));
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setWeight(75);
        labelProgName->setFont(font1);
#if QT_CONFIG(tooltip)
        labelProgName->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        labelProgName->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        labelProgName->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        labelProgName->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        labelProgName->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        labelProgName->setStyleSheet(QString::fromUtf8("color: rgb(32, 74, 135);"));
        labelProgName->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        labelProgName->setText(QString::fromUtf8("Program Name"));
        labelProgName->setAlignment(Qt::AlignCenter);
        textBrowserAbout = new QTextBrowser(AboutDialog);
        textBrowserAbout->setObjectName(QString::fromUtf8("textBrowserAbout"));
        textBrowserAbout->setGeometry(QRect(5, 90, 421, 206));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Ubuntu"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        textBrowserAbout->setFont(font2);
        textBrowserAbout->setFocusPolicy(Qt::NoFocus);
#if QT_CONFIG(tooltip)
        textBrowserAbout->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        textBrowserAbout->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        textBrowserAbout->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        textBrowserAbout->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        textBrowserAbout->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        textBrowserAbout->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        textBrowserAbout->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        textBrowserAbout->setFrameShape(QFrame::NoFrame);
        textBrowserAbout->setFrameShadow(QFrame::Plain);
        textBrowserAbout->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        textBrowserAbout->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowserAbout->setDocumentTitle(QString::fromUtf8(""));
        textBrowserAbout->setReadOnly(true);
        textBrowserAbout->setMarkdown(QString::fromUtf8("This is a cross-platform terminal program, designed for\n"
"data exchange with\n"
"various electronic modules and devices.\n"
"This is free software. Distributed\n"
"without warranty of any kind.\n"
"\n"
"Development environment: Open Source \n"
"[Qt Creator](https://www.qt.io/)\n"
"License: \n"
"[GNU General Public License](https://www.gnu.org/licenses/gpl-3.0.html) version\n"
"3 or higher.\n"
"Author: Kozhevnikov Yury \302\2512020 Russia\n"
"Feedback: \n"
"[tvm-system@yandex.ru\n"
"](mailto:tvm-system@yandex.ru)Source: \n"
"[tvm-system.ru](http://tvm-system.ru/index/serio/0-8)\n"
"\n"
"**PROJECT PARTNERS**\n"
" \n"
"[Boitsev Alexey](mailto:alex@dominant.spb.ru) (sponsor/advisor) Russia\n"
"\n"
""));
        textBrowserAbout->setHtml(QString::fromUtf8("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">This is a cross-platform terminal program, designed for<br />data exchange with various electronic modules and devices.<br />This is free software. Distributed without warranty of any kind.<br /><br />Development environment: Open Source <a href=\"https://www.qt.io/\"><span style=\" color:#0060b0;\">Qt Creator</span></a><br />License: <a href=\"https://www.gnu.org/licenses/gpl-3.0.html\"><span style=\" color:#0060b0;\">GNU General Public License</span></a> version 3 or higher.<br />Author: Kozhevnikov Yury \302\2512020 Russia<br />Feedback: <a h"
                        "ref=\"mailto:tvm-system@yandex.ru\"><span style=\" color:#0060b0;\">tvm-system@yandex.ru<br /></span></a>Source: <a href=\"http://tvm-system.ru/index/serio/0-8\"><span style=\" color:#0060b0;\">tvm-system.ru</span></a><br /><br /><span style=\" font-weight:792; color:#505050;\">PROJECT PARTNERS</span><br /> <a href=\"mailto:alex@dominant.spb.ru\"><span style=\" color:#0060b0;\">Boitsev Alexey</span></a> (sponsor/advisor) Russia</p></body></html>"));
        textBrowserAbout->setOverwriteMode(true);
        textBrowserAbout->setPlaceholderText(QString::fromUtf8(""));
        textBrowserAbout->setSource(QUrl(QString::fromUtf8("qrc:/files/serio.html")));
        textBrowserAbout->setSearchPaths(QStringList());
        textBrowserAbout->setOpenExternalLinks(true);
        textBrowserAbout->setOpenLinks(true);
        labelIcon1 = new QLabel(AboutDialog);
        labelIcon1->setObjectName(QString::fromUtf8("labelIcon1"));
        labelIcon1->setGeometry(QRect(25, 20, 61, 61));
#if QT_CONFIG(tooltip)
        labelIcon1->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        labelIcon1->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        labelIcon1->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        labelIcon1->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        labelIcon1->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        labelIcon1->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        labelIcon1->setText(QString::fromUtf8(""));
        labelIcon1->setPixmap(QPixmap(QString::fromUtf8(":/icons/Icons/serio-128.png")));
        labelIcon1->setScaledContents(true);
        labelIcon2 = new QLabel(AboutDialog);
        labelIcon2->setObjectName(QString::fromUtf8("labelIcon2"));
        labelIcon2->setGeometry(QRect(345, 20, 61, 61));
#if QT_CONFIG(tooltip)
        labelIcon2->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        labelIcon2->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        labelIcon2->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        labelIcon2->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        labelIcon2->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        labelIcon2->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        labelIcon2->setText(QString::fromUtf8(""));
        labelIcon2->setPixmap(QPixmap(QString::fromUtf8(":/icons/Icons/BasedOnQt.png")));
        labelIcon2->setScaledContents(true);
        labelProgVersion = new QLabel(AboutDialog);
        labelProgVersion->setObjectName(QString::fromUtf8("labelProgVersion"));
        labelProgVersion->setGeometry(QRect(95, 55, 241, 26));
        QPalette palette;
        QBrush brush(QColor(92, 53, 102, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush1(QColor(80, 80, 80, 128));
        brush1.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        QBrush brush2(QColor(64, 64, 64, 128));
        brush2.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        labelProgVersion->setPalette(palette);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Ubuntu"));
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        labelProgVersion->setFont(font3);
#if QT_CONFIG(tooltip)
        labelProgVersion->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        labelProgVersion->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        labelProgVersion->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        labelProgVersion->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        labelProgVersion->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        labelProgVersion->setStyleSheet(QString::fromUtf8("color: rgb(92, 53, 102);"));
        labelProgVersion->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        labelProgVersion->setText(QString::fromUtf8("Version"));
        labelProgVersion->setAlignment(Qt::AlignCenter);
        textBrowserAbout->raise();
        labelProgName->raise();
        labelIcon1->raise();
        labelIcon2->raise();
        labelProgVersion->raise();

        retranslateUi(AboutDialog);

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        (void)AboutDialog;
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
