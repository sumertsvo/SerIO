/********************************************************************************
** Form generated from reading UI file 'configdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGDIALOG_H
#define UI_CONFIGDIALOG_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ConfigDialog
{
public:
    QGroupBox *groupCnfFonts;
    QLabel *labelFont1;
    QFontComboBox *fontCombo1;
    QComboBox *comboFontSize1;
    QLabel *labelFont2;
    QLabel *labelFont3;
    QLabel *labelFont4;
    QFontComboBox *fontCombo2;
    QFontComboBox *fontCombo3;
    QFontComboBox *fontCombo4;
    QComboBox *comboFontSize2;
    QComboBox *comboFontSize3;
    QComboBox *comboFontSize4;
    QLabel *labelFont5;
    QFontComboBox *fontCombo5;
    QComboBox *comboFontSize5;
    QPushButton *pushFontBold1;
    QPushButton *pushFontItalic1;
    QPushButton *pushFontBold2;
    QPushButton *pushFontItalic2;
    QPushButton *pushFontBold3;
    QPushButton *pushFontItalic3;
    QPushButton *pushFontBold4;
    QPushButton *pushFontItalic4;
    QPushButton *pushFontBold5;
    QPushButton *pushFontItalic5;
    QGroupBox *groupCnfPort;
    QLabel *labelPortSpeed;
    QPlainTextEdit *plainPortSpeed;
    QPushButton *pushApply;
    QCheckBox *checkUpdates;
    QLineEdit *lineLinkUpdates;

    void setupUi(QDialog *ConfigDialog)
    {
        if (ConfigDialog->objectName().isEmpty())
            ConfigDialog->setObjectName(QString::fromUtf8("ConfigDialog"));
        ConfigDialog->setWindowModality(Qt::ApplicationModal);
        ConfigDialog->resize(531, 311);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ConfigDialog->sizePolicy().hasHeightForWidth());
        ConfigDialog->setSizePolicy(sizePolicy);
        ConfigDialog->setMinimumSize(QSize(531, 311));
        ConfigDialog->setMaximumSize(QSize(531, 311));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(208, 208, 208, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(231, 231, 231, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(104, 104, 104, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(139, 139, 139, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush7(QColor(0, 0, 0, 128));
        brush7.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        ConfigDialog->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu"));
        font.setPointSize(9);
        ConfigDialog->setFont(font);
        ConfigDialog->setWindowTitle(QString::fromUtf8("Config"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/Icons/serio-win.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ConfigDialog->setWindowIcon(icon);
#if QT_CONFIG(tooltip)
        ConfigDialog->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        ConfigDialog->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        ConfigDialog->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        ConfigDialog->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        ConfigDialog->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        ConfigDialog->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        ConfigDialog->setWindowFilePath(QString::fromUtf8(""));
        ConfigDialog->setModal(true);
        groupCnfFonts = new QGroupBox(ConfigDialog);
        groupCnfFonts->setObjectName(QString::fromUtf8("groupCnfFonts"));
        groupCnfFonts->setGeometry(QRect(150, 5, 371, 236));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Ubuntu"));
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        groupCnfFonts->setFont(font1);
#if QT_CONFIG(tooltip)
        groupCnfFonts->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        groupCnfFonts->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        groupCnfFonts->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        groupCnfFonts->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        groupCnfFonts->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        labelFont1 = new QLabel(groupCnfFonts);
        labelFont1->setObjectName(QString::fromUtf8("labelFont1"));
        labelFont1->setGeometry(QRect(10, 25, 231, 16));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Ubuntu"));
        font2.setPointSize(8);
        font2.setBold(false);
        font2.setWeight(50);
        labelFont1->setFont(font2);
#if QT_CONFIG(tooltip)
        labelFont1->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        labelFont1->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        labelFont1->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        labelFont1->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        labelFont1->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        fontCombo1 = new QFontComboBox(groupCnfFonts);
        fontCombo1->setObjectName(QString::fromUtf8("fontCombo1"));
        fontCombo1->setGeometry(QRect(10, 40, 251, 23));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Ubuntu"));
        font3.setPointSize(9);
        font3.setBold(false);
        font3.setWeight(50);
        fontCombo1->setFont(font3);
        fontCombo1->setFocusPolicy(Qt::ClickFocus);
#if QT_CONFIG(tooltip)
        fontCombo1->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        fontCombo1->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        fontCombo1->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        fontCombo1->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        fontCombo1->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        fontCombo1->setCurrentText(QString::fromUtf8("Ubuntu"));
        fontCombo1->setPlaceholderText(QString::fromUtf8(""));
        fontCombo1->setWritingSystem(QFontDatabase::Any);
        fontCombo1->setCurrentFont(font3);
        comboFontSize1 = new QComboBox(groupCnfFonts);
        comboFontSize1->addItem(QString());
        comboFontSize1->addItem(QString());
        comboFontSize1->addItem(QString());
        comboFontSize1->addItem(QString());
        comboFontSize1->addItem(QString());
        comboFontSize1->setObjectName(QString::fromUtf8("comboFontSize1"));
        comboFontSize1->setGeometry(QRect(260, 40, 51, 23));
        comboFontSize1->setFont(font3);
        comboFontSize1->setFocusPolicy(Qt::ClickFocus);
#if QT_CONFIG(tooltip)
        comboFontSize1->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        comboFontSize1->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        comboFontSize1->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        comboFontSize1->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        comboFontSize1->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        comboFontSize1->setCurrentText(QString::fromUtf8("12"));
        comboFontSize1->setPlaceholderText(QString::fromUtf8(""));
        comboFontSize1->setFrame(true);
        labelFont2 = new QLabel(groupCnfFonts);
        labelFont2->setObjectName(QString::fromUtf8("labelFont2"));
        labelFont2->setGeometry(QRect(10, 65, 231, 16));
        labelFont2->setFont(font2);
#if QT_CONFIG(tooltip)
        labelFont2->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        labelFont2->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        labelFont2->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        labelFont2->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        labelFont2->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        labelFont3 = new QLabel(groupCnfFonts);
        labelFont3->setObjectName(QString::fromUtf8("labelFont3"));
        labelFont3->setGeometry(QRect(10, 105, 231, 16));
        labelFont3->setFont(font2);
#if QT_CONFIG(tooltip)
        labelFont3->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        labelFont3->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        labelFont3->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        labelFont3->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        labelFont3->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        labelFont4 = new QLabel(groupCnfFonts);
        labelFont4->setObjectName(QString::fromUtf8("labelFont4"));
        labelFont4->setGeometry(QRect(10, 145, 231, 16));
        labelFont4->setFont(font2);
#if QT_CONFIG(tooltip)
        labelFont4->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        labelFont4->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        labelFont4->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        labelFont4->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        labelFont4->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        fontCombo2 = new QFontComboBox(groupCnfFonts);
        fontCombo2->setObjectName(QString::fromUtf8("fontCombo2"));
        fontCombo2->setGeometry(QRect(10, 80, 251, 23));
        fontCombo2->setFont(font3);
        fontCombo2->setFocusPolicy(Qt::ClickFocus);
#if QT_CONFIG(tooltip)
        fontCombo2->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        fontCombo2->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        fontCombo2->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        fontCombo2->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        fontCombo2->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        fontCombo2->setCurrentText(QString::fromUtf8("Ubuntu"));
        fontCombo2->setPlaceholderText(QString::fromUtf8(""));
        fontCombo2->setWritingSystem(QFontDatabase::Any);
        fontCombo2->setCurrentFont(font3);
        fontCombo3 = new QFontComboBox(groupCnfFonts);
        fontCombo3->setObjectName(QString::fromUtf8("fontCombo3"));
        fontCombo3->setGeometry(QRect(10, 120, 251, 23));
        fontCombo3->setFont(font3);
        fontCombo3->setFocusPolicy(Qt::ClickFocus);
#if QT_CONFIG(tooltip)
        fontCombo3->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        fontCombo3->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        fontCombo3->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        fontCombo3->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        fontCombo3->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        fontCombo3->setCurrentText(QString::fromUtf8("Ubuntu"));
        fontCombo3->setPlaceholderText(QString::fromUtf8(""));
        fontCombo3->setWritingSystem(QFontDatabase::Any);
        fontCombo3->setCurrentFont(font3);
        fontCombo4 = new QFontComboBox(groupCnfFonts);
        fontCombo4->setObjectName(QString::fromUtf8("fontCombo4"));
        fontCombo4->setGeometry(QRect(10, 160, 251, 23));
        QPalette palette1;
        QBrush brush8(QColor(0, 80, 112, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush8);
        QBrush brush9(QColor(0, 80, 112, 128));
        brush9.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        QBrush brush10(QColor(0, 112, 64, 128));
        brush10.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        fontCombo4->setPalette(palette1);
        QFont font4;
        font4.setFamily(QString::fromUtf8("FreeMono"));
        font4.setPointSize(10);
        font4.setBold(false);
        font4.setWeight(50);
        fontCombo4->setFont(font4);
        fontCombo4->setFocusPolicy(Qt::ClickFocus);
#if QT_CONFIG(tooltip)
        fontCombo4->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        fontCombo4->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        fontCombo4->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        fontCombo4->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        fontCombo4->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        fontCombo4->setCurrentText(QString::fromUtf8("DejaVu Sans Mono"));
        fontCombo4->setPlaceholderText(QString::fromUtf8(""));
        fontCombo4->setWritingSystem(QFontDatabase::Any);
        fontCombo4->setFontFilters(QFontComboBox::MonospacedFonts);
        QFont font5;
        font5.setFamily(QString::fromUtf8("DejaVu Sans Mono"));
        font5.setPointSize(9);
        font5.setBold(false);
        font5.setWeight(50);
        fontCombo4->setCurrentFont(font5);
        comboFontSize2 = new QComboBox(groupCnfFonts);
        comboFontSize2->addItem(QString());
        comboFontSize2->addItem(QString());
        comboFontSize2->addItem(QString());
        comboFontSize2->addItem(QString());
        comboFontSize2->addItem(QString());
        comboFontSize2->setObjectName(QString::fromUtf8("comboFontSize2"));
        comboFontSize2->setGeometry(QRect(260, 80, 51, 23));
        comboFontSize2->setFont(font3);
        comboFontSize2->setFocusPolicy(Qt::ClickFocus);
#if QT_CONFIG(tooltip)
        comboFontSize2->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        comboFontSize2->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        comboFontSize2->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        comboFontSize2->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        comboFontSize2->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        comboFontSize2->setCurrentText(QString::fromUtf8("12"));
        comboFontSize2->setPlaceholderText(QString::fromUtf8(""));
        comboFontSize2->setFrame(true);
        comboFontSize3 = new QComboBox(groupCnfFonts);
        comboFontSize3->addItem(QString());
        comboFontSize3->addItem(QString());
        comboFontSize3->addItem(QString());
        comboFontSize3->addItem(QString());
        comboFontSize3->addItem(QString());
        comboFontSize3->setObjectName(QString::fromUtf8("comboFontSize3"));
        comboFontSize3->setGeometry(QRect(260, 120, 51, 23));
        comboFontSize3->setFont(font3);
        comboFontSize3->setFocusPolicy(Qt::ClickFocus);
#if QT_CONFIG(tooltip)
        comboFontSize3->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        comboFontSize3->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        comboFontSize3->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        comboFontSize3->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        comboFontSize3->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        comboFontSize3->setCurrentText(QString::fromUtf8("12"));
        comboFontSize3->setPlaceholderText(QString::fromUtf8(""));
        comboFontSize3->setFrame(true);
        comboFontSize4 = new QComboBox(groupCnfFonts);
        comboFontSize4->addItem(QString());
        comboFontSize4->addItem(QString());
        comboFontSize4->addItem(QString());
        comboFontSize4->addItem(QString());
        comboFontSize4->addItem(QString());
        comboFontSize4->setObjectName(QString::fromUtf8("comboFontSize4"));
        comboFontSize4->setGeometry(QRect(260, 160, 51, 23));
        comboFontSize4->setFont(font3);
        comboFontSize4->setFocusPolicy(Qt::ClickFocus);
#if QT_CONFIG(tooltip)
        comboFontSize4->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        comboFontSize4->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        comboFontSize4->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        comboFontSize4->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        comboFontSize4->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        comboFontSize4->setCurrentText(QString::fromUtf8("12"));
        comboFontSize4->setPlaceholderText(QString::fromUtf8(""));
        comboFontSize4->setFrame(true);
        labelFont5 = new QLabel(groupCnfFonts);
        labelFont5->setObjectName(QString::fromUtf8("labelFont5"));
        labelFont5->setGeometry(QRect(10, 185, 231, 16));
        labelFont5->setFont(font2);
#if QT_CONFIG(tooltip)
        labelFont5->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        labelFont5->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        labelFont5->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        labelFont5->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        labelFont5->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        fontCombo5 = new QFontComboBox(groupCnfFonts);
        fontCombo5->setObjectName(QString::fromUtf8("fontCombo5"));
        fontCombo5->setGeometry(QRect(10, 200, 251, 23));
        QPalette palette2;
        QBrush brush11(QColor(101, 50, 36, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush11);
        QBrush brush12(QColor(101, 50, 36, 128));
        brush12.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush11);
        QBrush brush13(QColor(101, 50, 36, 128));
        brush13.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush13);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        QBrush brush14(QColor(101, 50, 36, 128));
        brush14.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        fontCombo5->setPalette(palette2);
        QFont font6;
        font6.setFamily(QString::fromUtf8("FreeMono"));
        font6.setPointSize(9);
        font6.setBold(false);
        font6.setWeight(50);
        fontCombo5->setFont(font6);
        fontCombo5->setFocusPolicy(Qt::ClickFocus);
#if QT_CONFIG(tooltip)
        fontCombo5->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        fontCombo5->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        fontCombo5->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        fontCombo5->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        fontCombo5->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        fontCombo5->setCurrentText(QString::fromUtf8("DejaVu Sans Mono"));
        fontCombo5->setPlaceholderText(QString::fromUtf8(""));
        fontCombo5->setWritingSystem(QFontDatabase::Any);
        fontCombo5->setFontFilters(QFontComboBox::MonospacedFonts);
        fontCombo5->setCurrentFont(font5);
        comboFontSize5 = new QComboBox(groupCnfFonts);
        comboFontSize5->addItem(QString());
        comboFontSize5->addItem(QString());
        comboFontSize5->addItem(QString());
        comboFontSize5->addItem(QString());
        comboFontSize5->addItem(QString());
        comboFontSize5->setObjectName(QString::fromUtf8("comboFontSize5"));
        comboFontSize5->setGeometry(QRect(260, 200, 51, 23));
        comboFontSize5->setFont(font3);
        comboFontSize5->setFocusPolicy(Qt::ClickFocus);
#if QT_CONFIG(tooltip)
        comboFontSize5->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        comboFontSize5->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        comboFontSize5->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        comboFontSize5->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        comboFontSize5->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        comboFontSize5->setCurrentText(QString::fromUtf8("12"));
        comboFontSize5->setPlaceholderText(QString::fromUtf8(""));
        comboFontSize5->setFrame(true);
        pushFontBold1 = new QPushButton(groupCnfFonts);
        pushFontBold1->setObjectName(QString::fromUtf8("pushFontBold1"));
        pushFontBold1->setGeometry(QRect(310, 40, 26, 23));
        pushFontBold1->setFont(font3);
        pushFontBold1->setFocusPolicy(Qt::ClickFocus);
#if QT_CONFIG(tooltip)
        pushFontBold1->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pushFontBold1->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        pushFontBold1->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        pushFontBold1->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        pushFontBold1->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        pushFontBold1->setText(QString::fromUtf8("B"));
#if QT_CONFIG(shortcut)
        pushFontBold1->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        pushFontBold1->setCheckable(true);
        pushFontBold1->setAutoDefault(false);
        pushFontItalic1 = new QPushButton(groupCnfFonts);
        pushFontItalic1->setObjectName(QString::fromUtf8("pushFontItalic1"));
        pushFontItalic1->setGeometry(QRect(335, 40, 26, 23));
        pushFontItalic1->setFont(font3);
        pushFontItalic1->setFocusPolicy(Qt::ClickFocus);
#if QT_CONFIG(tooltip)
        pushFontItalic1->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pushFontItalic1->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        pushFontItalic1->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        pushFontItalic1->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        pushFontItalic1->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        pushFontItalic1->setText(QString::fromUtf8("I"));
#if QT_CONFIG(shortcut)
        pushFontItalic1->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        pushFontItalic1->setCheckable(true);
        pushFontItalic1->setAutoDefault(false);
        pushFontBold2 = new QPushButton(groupCnfFonts);
        pushFontBold2->setObjectName(QString::fromUtf8("pushFontBold2"));
        pushFontBold2->setGeometry(QRect(310, 80, 26, 23));
        pushFontBold2->setFont(font3);
        pushFontBold2->setFocusPolicy(Qt::ClickFocus);
#if QT_CONFIG(tooltip)
        pushFontBold2->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pushFontBold2->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        pushFontBold2->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        pushFontBold2->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        pushFontBold2->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        pushFontBold2->setText(QString::fromUtf8("B"));
#if QT_CONFIG(shortcut)
        pushFontBold2->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        pushFontBold2->setCheckable(true);
        pushFontBold2->setAutoDefault(false);
        pushFontItalic2 = new QPushButton(groupCnfFonts);
        pushFontItalic2->setObjectName(QString::fromUtf8("pushFontItalic2"));
        pushFontItalic2->setGeometry(QRect(335, 80, 26, 23));
        pushFontItalic2->setFont(font3);
        pushFontItalic2->setFocusPolicy(Qt::ClickFocus);
#if QT_CONFIG(tooltip)
        pushFontItalic2->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pushFontItalic2->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        pushFontItalic2->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        pushFontItalic2->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        pushFontItalic2->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        pushFontItalic2->setText(QString::fromUtf8("I"));
#if QT_CONFIG(shortcut)
        pushFontItalic2->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        pushFontItalic2->setCheckable(true);
        pushFontItalic2->setAutoDefault(false);
        pushFontBold3 = new QPushButton(groupCnfFonts);
        pushFontBold3->setObjectName(QString::fromUtf8("pushFontBold3"));
        pushFontBold3->setGeometry(QRect(310, 120, 26, 23));
        pushFontBold3->setFont(font3);
        pushFontBold3->setFocusPolicy(Qt::ClickFocus);
#if QT_CONFIG(tooltip)
        pushFontBold3->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pushFontBold3->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        pushFontBold3->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        pushFontBold3->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        pushFontBold3->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        pushFontBold3->setText(QString::fromUtf8("B"));
#if QT_CONFIG(shortcut)
        pushFontBold3->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        pushFontBold3->setCheckable(true);
        pushFontBold3->setAutoDefault(false);
        pushFontItalic3 = new QPushButton(groupCnfFonts);
        pushFontItalic3->setObjectName(QString::fromUtf8("pushFontItalic3"));
        pushFontItalic3->setGeometry(QRect(335, 120, 26, 23));
        pushFontItalic3->setFont(font3);
        pushFontItalic3->setFocusPolicy(Qt::ClickFocus);
#if QT_CONFIG(tooltip)
        pushFontItalic3->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pushFontItalic3->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        pushFontItalic3->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        pushFontItalic3->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        pushFontItalic3->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        pushFontItalic3->setText(QString::fromUtf8("I"));
#if QT_CONFIG(shortcut)
        pushFontItalic3->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        pushFontItalic3->setCheckable(true);
        pushFontItalic3->setAutoDefault(false);
        pushFontBold4 = new QPushButton(groupCnfFonts);
        pushFontBold4->setObjectName(QString::fromUtf8("pushFontBold4"));
        pushFontBold4->setGeometry(QRect(310, 160, 26, 23));
        pushFontBold4->setFont(font3);
        pushFontBold4->setFocusPolicy(Qt::ClickFocus);
#if QT_CONFIG(tooltip)
        pushFontBold4->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pushFontBold4->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        pushFontBold4->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        pushFontBold4->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        pushFontBold4->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        pushFontBold4->setText(QString::fromUtf8("B"));
#if QT_CONFIG(shortcut)
        pushFontBold4->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        pushFontBold4->setCheckable(true);
        pushFontBold4->setAutoDefault(false);
        pushFontItalic4 = new QPushButton(groupCnfFonts);
        pushFontItalic4->setObjectName(QString::fromUtf8("pushFontItalic4"));
        pushFontItalic4->setGeometry(QRect(335, 160, 26, 23));
        pushFontItalic4->setFont(font3);
        pushFontItalic4->setFocusPolicy(Qt::ClickFocus);
#if QT_CONFIG(tooltip)
        pushFontItalic4->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pushFontItalic4->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        pushFontItalic4->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        pushFontItalic4->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        pushFontItalic4->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        pushFontItalic4->setText(QString::fromUtf8("I"));
#if QT_CONFIG(shortcut)
        pushFontItalic4->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        pushFontItalic4->setCheckable(true);
        pushFontItalic4->setAutoDefault(false);
        pushFontBold5 = new QPushButton(groupCnfFonts);
        pushFontBold5->setObjectName(QString::fromUtf8("pushFontBold5"));
        pushFontBold5->setGeometry(QRect(310, 200, 26, 23));
        pushFontBold5->setFont(font3);
        pushFontBold5->setFocusPolicy(Qt::ClickFocus);
#if QT_CONFIG(tooltip)
        pushFontBold5->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pushFontBold5->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        pushFontBold5->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        pushFontBold5->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        pushFontBold5->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        pushFontBold5->setText(QString::fromUtf8("B"));
#if QT_CONFIG(shortcut)
        pushFontBold5->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        pushFontBold5->setCheckable(true);
        pushFontBold5->setAutoDefault(false);
        pushFontItalic5 = new QPushButton(groupCnfFonts);
        pushFontItalic5->setObjectName(QString::fromUtf8("pushFontItalic5"));
        pushFontItalic5->setGeometry(QRect(335, 200, 26, 23));
        pushFontItalic5->setFont(font3);
        pushFontItalic5->setFocusPolicy(Qt::ClickFocus);
#if QT_CONFIG(tooltip)
        pushFontItalic5->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pushFontItalic5->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        pushFontItalic5->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        pushFontItalic5->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        pushFontItalic5->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        pushFontItalic5->setText(QString::fromUtf8("I"));
#if QT_CONFIG(shortcut)
        pushFontItalic5->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        pushFontItalic5->setCheckable(true);
        pushFontItalic5->setAutoDefault(false);
        groupCnfPort = new QGroupBox(ConfigDialog);
        groupCnfPort->setObjectName(QString::fromUtf8("groupCnfPort"));
        groupCnfPort->setGeometry(QRect(10, 5, 131, 296));
        groupCnfPort->setFont(font1);
#if QT_CONFIG(tooltip)
        groupCnfPort->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        groupCnfPort->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        groupCnfPort->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        groupCnfPort->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        groupCnfPort->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        labelPortSpeed = new QLabel(groupCnfPort);
        labelPortSpeed->setObjectName(QString::fromUtf8("labelPortSpeed"));
        labelPortSpeed->setGeometry(QRect(10, 25, 111, 16));
        labelPortSpeed->setFont(font2);
#if QT_CONFIG(tooltip)
        labelPortSpeed->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        labelPortSpeed->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        labelPortSpeed->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        labelPortSpeed->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        labelPortSpeed->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        plainPortSpeed = new QPlainTextEdit(groupCnfPort);
        plainPortSpeed->setObjectName(QString::fromUtf8("plainPortSpeed"));
        plainPortSpeed->setGeometry(QRect(10, 40, 111, 246));
        plainPortSpeed->setFont(font3);
        plainPortSpeed->setFocusPolicy(Qt::ClickFocus);
#if QT_CONFIG(tooltip)
        plainPortSpeed->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        plainPortSpeed->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        plainPortSpeed->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        plainPortSpeed->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        plainPortSpeed->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        plainPortSpeed->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        plainPortSpeed->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainPortSpeed->setDocumentTitle(QString::fromUtf8(""));
        plainPortSpeed->setLineWrapMode(QPlainTextEdit::NoWrap);
        plainPortSpeed->setPlainText(QString::fromUtf8("1200\n"
"2400\n"
"4800\n"
"9600\n"
"19200\n"
"38400\n"
"57600\n"
"115200\n"
"230400\n"
"460800\n"
"921600"));
        plainPortSpeed->setPlaceholderText(QString::fromUtf8(""));
        pushApply = new QPushButton(ConfigDialog);
        pushApply->setObjectName(QString::fromUtf8("pushApply"));
        pushApply->setGeometry(QRect(450, 270, 61, 23));
        pushApply->setFocusPolicy(Qt::ClickFocus);
#if QT_CONFIG(tooltip)
        pushApply->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pushApply->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        pushApply->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        pushApply->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        pushApply->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        pushApply->setText(QString::fromUtf8("Apply"));
#if QT_CONFIG(shortcut)
        pushApply->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        pushApply->setCheckable(false);
        pushApply->setAutoDefault(false);
        checkUpdates = new QCheckBox(ConfigDialog);
        checkUpdates->setObjectName(QString::fromUtf8("checkUpdates"));
        checkUpdates->setGeometry(QRect(160, 250, 251, 22));
        checkUpdates->setFont(font3);
        checkUpdates->setFocusPolicy(Qt::ClickFocus);
#if QT_CONFIG(tooltip)
        checkUpdates->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        checkUpdates->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        checkUpdates->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        checkUpdates->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        checkUpdates->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        checkUpdates->setText(QString::fromUtf8("Checking updates application"));
        checkUpdates->setCheckable(true);
        checkUpdates->setChecked(true);
        lineLinkUpdates = new QLineEdit(ConfigDialog);
        lineLinkUpdates->setObjectName(QString::fromUtf8("lineLinkUpdates"));
        lineLinkUpdates->setEnabled(true);
        lineLinkUpdates->setGeometry(QRect(160, 270, 251, 23));
        QPalette palette3;
        QBrush brush15(QColor(52, 101, 164, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush15);
        QBrush brush16(QColor(232, 232, 232, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush16);
        QBrush brush17(QColor(52, 101, 164, 128));
        brush17.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush17);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush15);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush16);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush17);
#endif
        QBrush brush18(QColor(190, 190, 190, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush18);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        lineLinkUpdates->setPalette(palette3);
        lineLinkUpdates->setFont(font3);
        lineLinkUpdates->setFocusPolicy(Qt::ClickFocus);
#if QT_CONFIG(tooltip)
        lineLinkUpdates->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        lineLinkUpdates->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        lineLinkUpdates->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        lineLinkUpdates->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        lineLinkUpdates->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        lineLinkUpdates->setInputMask(QString::fromUtf8(""));
        lineLinkUpdates->setText(QString::fromUtf8("http://"));
        lineLinkUpdates->setPlaceholderText(QString::fromUtf8(""));

        retranslateUi(ConfigDialog);

        QMetaObject::connectSlotsByName(ConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *ConfigDialog)
    {
        groupCnfFonts->setTitle(QCoreApplication::translate("ConfigDialog", "FONTS", nullptr));
        labelFont1->setText(QCoreApplication::translate("ConfigDialog", "Groups:", nullptr));
        comboFontSize1->setItemText(0, QCoreApplication::translate("ConfigDialog", "12", nullptr));
        comboFontSize1->setItemText(1, QCoreApplication::translate("ConfigDialog", "11", nullptr));
        comboFontSize1->setItemText(2, QCoreApplication::translate("ConfigDialog", "10", nullptr));
        comboFontSize1->setItemText(3, QCoreApplication::translate("ConfigDialog", "9", nullptr));
        comboFontSize1->setItemText(4, QCoreApplication::translate("ConfigDialog", "8", nullptr));

        labelFont2->setText(QCoreApplication::translate("ConfigDialog", "Labels:", nullptr));
        labelFont3->setText(QCoreApplication::translate("ConfigDialog", "Controls:", nullptr));
        labelFont4->setText(QCoreApplication::translate("ConfigDialog", "Receive & Transmit data (mono):", nullptr));
        comboFontSize2->setItemText(0, QCoreApplication::translate("ConfigDialog", "12", nullptr));
        comboFontSize2->setItemText(1, QCoreApplication::translate("ConfigDialog", "11", nullptr));
        comboFontSize2->setItemText(2, QCoreApplication::translate("ConfigDialog", "10", nullptr));
        comboFontSize2->setItemText(3, QCoreApplication::translate("ConfigDialog", "9", nullptr));
        comboFontSize2->setItemText(4, QCoreApplication::translate("ConfigDialog", "8", nullptr));

        comboFontSize3->setItemText(0, QCoreApplication::translate("ConfigDialog", "12", nullptr));
        comboFontSize3->setItemText(1, QCoreApplication::translate("ConfigDialog", "11", nullptr));
        comboFontSize3->setItemText(2, QCoreApplication::translate("ConfigDialog", "10", nullptr));
        comboFontSize3->setItemText(3, QCoreApplication::translate("ConfigDialog", "9", nullptr));
        comboFontSize3->setItemText(4, QCoreApplication::translate("ConfigDialog", "8", nullptr));

        comboFontSize4->setItemText(0, QCoreApplication::translate("ConfigDialog", "12", nullptr));
        comboFontSize4->setItemText(1, QCoreApplication::translate("ConfigDialog", "11", nullptr));
        comboFontSize4->setItemText(2, QCoreApplication::translate("ConfigDialog", "10", nullptr));
        comboFontSize4->setItemText(3, QCoreApplication::translate("ConfigDialog", "9", nullptr));
        comboFontSize4->setItemText(4, QCoreApplication::translate("ConfigDialog", "8", nullptr));

        labelFont5->setText(QCoreApplication::translate("ConfigDialog", "File & Table data (mono):", nullptr));
        comboFontSize5->setItemText(0, QCoreApplication::translate("ConfigDialog", "12", nullptr));
        comboFontSize5->setItemText(1, QCoreApplication::translate("ConfigDialog", "11", nullptr));
        comboFontSize5->setItemText(2, QCoreApplication::translate("ConfigDialog", "10", nullptr));
        comboFontSize5->setItemText(3, QCoreApplication::translate("ConfigDialog", "9", nullptr));
        comboFontSize5->setItemText(4, QCoreApplication::translate("ConfigDialog", "8", nullptr));

        groupCnfPort->setTitle(QCoreApplication::translate("ConfigDialog", "SERIAL PORT", nullptr));
        labelPortSpeed->setText(QCoreApplication::translate("ConfigDialog", "Speed list:", nullptr));
        (void)ConfigDialog;
    } // retranslateUi

};

namespace Ui {
    class ConfigDialog: public Ui_ConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGDIALOG_H
