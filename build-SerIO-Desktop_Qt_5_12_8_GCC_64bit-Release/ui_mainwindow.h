/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGroupBox *groupTxTemplates;
    QTableWidget *tableData;
    QPushButton *pushSelectFile1;
    QPushButton *pushSendFile1;
    QLabel *labelTable;
    QLineEdit *lineFile1;
    QLabel *labelFile1;
    QComboBox *comboPattern;
    QLabel *labelPattern;
    QPushButton *pushSendPattern;
    QLabel *labelPatternInfo;
    QLabel *labelFileInfo1;
    QLabel *labelTableInfo;
    QLabel *labelFile2;
    QLabel *labelFileInfo2;
    QPushButton *pushSelectFile2;
    QLineEdit *lineFile2;
    QPushButton *pushSendFile2;
    QGroupBox *groupTxData;
    QGridLayout *gridLayout_4;
    QFrame *frameTD;
    QPushButton *pushSendTx;
    QLineEdit *lineTotalTxA;
    QLabel *labelTypeTx;
    QLineEdit *lineDataTx;
    QComboBox *comboSendPort;
    QPushButton *pushMarkerTx;
    QLabel *labelEndTx;
    QPushButton *pushLocalEcho;
    QComboBox *comboTypeTx;
    QLabel *labelSendPort;
    QLabel *labelTotalTxA;
    QComboBox *comboEndTx;
    QComboBox *comboFormatTx;
    QLabel *labelFormatTx;
    QLabel *labelTotalTxB;
    QLineEdit *lineTotalTxB;
    QFrame *frameACR;
    QPushButton *pushAbout;
    QPushButton *pushConfig;
    QPushButton *pushReport;
    QGroupBox *groupRxData;
    QGridLayout *gridLayout_2;
    QGraphicsView *graphicsDataRx;
    QTextEdit *textDataRx;
    QFrame *frameRD;
    QPushButton *pushWordWrap;
    QComboBox *comboTypeRx;
    QPushButton *pushMarkerRx;
    QLabel *labelTotalRxA;
    QLineEdit *lineTotalRxA;
    QLineEdit *lineTotalRxB;
    QComboBox *comboFrameRx;
    QComboBox *comboFormatRx;
    QLabel *labelTotalRxB;
    QLabel *labelTypeRx;
    QLabel *labelFormatRx;
    QPushButton *pushClearRx;
    QPushButton *pushSingleMode;
    QLabel *labelFrameRx;
    QGroupBox *groupTxTimer;
    QLabel *labelTmrSource;
    QComboBox *comboTmrSourceA;
    QComboBox *comboTmrTime;
    QLabel *labelTmrTime;
    QPushButton *pushTmrRun;
    QLabel *labelTmrCount;
    QComboBox *comboTmrSourceB;
    QLabel *labelTmrPortA;
    QLabel *labelTmrPortB;
    QPushButton *pushTmrSend;
    QGroupBox *groupPort;
    QGridLayout *gridLayout_3;
    QFrame *frameP;
    QComboBox *comboModePortA;
    QLabel *labelModePort;
    QLabel *labelSpeedPort;
    QComboBox *comboSelectPortB;
    QComboBox *comboFlowPortB;
    QComboBox *comboRTO;
    QPushButton *pushPortA;
    QLabel *labelSelectPort;
    QComboBox *comboSelectPortA;
    QComboBox *comboSpeedPortB;
    QLabel *labelFlowPort;
    QComboBox *comboModePortB;
    QComboBox *comboSpeedPortA;
    QLabel *labelRTO;
    QComboBox *comboFlowPortA;
    QPushButton *pushPortB;
    QGroupBox *groupProfile;
    QComboBox *comboProfile;
    QPushButton *pushSaveProfile;
    QLabel *labelProfile;
    QPushButton *pushNewProfile;
    QPushButton *pushRenProfile;
    QPushButton *pushDelProfile;
    QPushButton *pushSkipProfile;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1011, 641);
        MainWindow->setMinimumSize(QSize(1011, 641));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
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
        QBrush brush6(QColor(240, 240, 240, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush8(QColor(0, 0, 0, 128));
        brush8.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
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
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        QBrush brush9(QColor(144, 144, 144, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        MainWindow->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu"));
        font.setPointSize(9);
        font.setKerning(true);
        MainWindow->setFont(font);
        MainWindow->setWindowTitle(QString::fromUtf8("SerIO"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/Icons/serio-win.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
#ifndef QT_NO_TOOLTIP
        MainWindow->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        MainWindow->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        MainWindow->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        MainWindow->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        MainWindow->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        MainWindow->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        MainWindow->setWindowFilePath(QString::fromUtf8(""));
        MainWindow->setInputMethodHints(Qt::ImhNone);
        MainWindow->setIconSize(QSize(24, 24));
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(9);
        gridLayout->setVerticalSpacing(4);
        gridLayout->setContentsMargins(-1, 4, -1, -1);
        groupTxTemplates = new QGroupBox(centralwidget);
        groupTxTemplates->setObjectName(QString::fromUtf8("groupTxTemplates"));
        groupTxTemplates->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupTxTemplates->sizePolicy().hasHeightForWidth());
        groupTxTemplates->setSizePolicy(sizePolicy);
        groupTxTemplates->setMinimumSize(QSize(361, 408));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Ubuntu"));
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        font1.setKerning(true);
        groupTxTemplates->setFont(font1);
        groupTxTemplates->setContextMenuPolicy(Qt::DefaultContextMenu);
#ifndef QT_NO_TOOLTIP
        groupTxTemplates->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        groupTxTemplates->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        groupTxTemplates->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        groupTxTemplates->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        groupTxTemplates->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        groupTxTemplates->setFlat(false);
        tableData = new QTableWidget(groupTxTemplates);
        if (tableData->columnCount() < 3)
            tableData->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        tableData->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        tableData->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        tableData->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableData->rowCount() < 12)
            tableData->setRowCount(12);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableData->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableData->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableData->setVerticalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableData->setVerticalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableData->setVerticalHeaderItem(4, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableData->setVerticalHeaderItem(5, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableData->setVerticalHeaderItem(6, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableData->setVerticalHeaderItem(7, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableData->setVerticalHeaderItem(8, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableData->setVerticalHeaderItem(9, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableData->setVerticalHeaderItem(10, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableData->setVerticalHeaderItem(11, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableData->setItem(0, 0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableData->setItem(0, 1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableData->setItem(0, 2, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableData->setItem(1, 0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableData->setItem(1, 1, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableData->setItem(1, 2, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableData->setItem(2, 0, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableData->setItem(2, 1, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableData->setItem(2, 2, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableData->setItem(3, 0, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableData->setItem(3, 1, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableData->setItem(3, 2, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableData->setItem(4, 0, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableData->setItem(4, 1, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableData->setItem(4, 2, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableData->setItem(5, 0, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableData->setItem(5, 1, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableData->setItem(5, 2, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableData->setItem(6, 0, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableData->setItem(6, 1, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableData->setItem(6, 2, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableData->setItem(7, 0, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableData->setItem(7, 1, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableData->setItem(7, 2, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableData->setItem(8, 0, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableData->setItem(8, 1, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableData->setItem(8, 2, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tableData->setItem(9, 0, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tableData->setItem(9, 1, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tableData->setItem(9, 2, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tableData->setItem(10, 0, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tableData->setItem(10, 1, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        tableData->setItem(10, 2, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        tableData->setItem(11, 0, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        tableData->setItem(11, 1, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        tableData->setItem(11, 2, __qtablewidgetitem50);
        tableData->setObjectName(QString::fromUtf8("tableData"));
        tableData->setGeometry(QRect(10, 160, 341, 236));
        sizePolicy.setHeightForWidth(tableData->sizePolicy().hasHeightForWidth());
        tableData->setSizePolicy(sizePolicy);
        QPalette palette1;
        QBrush brush10(QColor(112, 56, 40, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush10);
        QBrush brush11(QColor(48, 140, 198, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush11);
        palette1.setBrush(QPalette::Active, QPalette::HighlightedText, brush2);
        QBrush brush12(QColor(112, 56, 40, 128));
        brush12.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush2);
        QBrush brush13(QColor(112, 56, 40, 128));
        brush13.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush13);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        QBrush brush14(QColor(145, 145, 145, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush2);
        QBrush brush15(QColor(112, 56, 40, 128));
        brush15.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        tableData->setPalette(palette1);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Ubuntu Mono"));
        font2.setPointSize(9);
        font2.setBold(false);
        font2.setWeight(50);
        font2.setKerning(true);
        tableData->setFont(font2);
        tableData->setFocusPolicy(Qt::ClickFocus);
        tableData->setContextMenuPolicy(Qt::CustomContextMenu);
#ifndef QT_NO_TOOLTIP
        tableData->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        tableData->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        tableData->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        tableData->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        tableData->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        tableData->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableData->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableData->setAutoScroll(false);
        tableData->setAutoScrollMargin(20);
        tableData->setEditTriggers(QAbstractItemView::DoubleClicked);
        tableData->setDragDropOverwriteMode(true);
        tableData->setSelectionMode(QAbstractItemView::SingleSelection);
        tableData->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableData->setWordWrap(false);
        tableData->setCornerButtonEnabled(true);
        tableData->horizontalHeader()->setMinimumSectionSize(30);
        tableData->horizontalHeader()->setDefaultSectionSize(110);
        tableData->horizontalHeader()->setHighlightSections(false);
        tableData->horizontalHeader()->setStretchLastSection(false);
        tableData->verticalHeader()->setMinimumSectionSize(18);
        tableData->verticalHeader()->setDefaultSectionSize(18);
        pushSelectFile1 = new QPushButton(groupTxTemplates);
        pushSelectFile1->setObjectName(QString::fromUtf8("pushSelectFile1"));
        pushSelectFile1->setGeometry(QRect(10, 80, 26, 23));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Ubuntu"));
        font3.setPointSize(9);
        font3.setBold(false);
        font3.setWeight(50);
        font3.setKerning(true);
        pushSelectFile1->setFont(font3);
        pushSelectFile1->setFocusPolicy(Qt::ClickFocus);
#ifndef QT_NO_TOOLTIP
        pushSelectFile1->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushSelectFile1->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pushSelectFile1->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        pushSelectFile1->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushSelectFile1->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        pushSelectFile1->setText(QString::fromUtf8("..."));
#ifndef QT_NO_SHORTCUT
        pushSelectFile1->setShortcut(QString::fromUtf8(""));
#endif // QT_NO_SHORTCUT
        pushSendFile1 = new QPushButton(groupTxTemplates);
        pushSendFile1->setObjectName(QString::fromUtf8("pushSendFile1"));
        pushSendFile1->setEnabled(false);
        pushSendFile1->setGeometry(QRect(290, 80, 61, 23));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Ubuntu"));
        font4.setPointSize(9);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        font4.setKerning(true);
        pushSendFile1->setFont(font4);
        pushSendFile1->setFocusPolicy(Qt::ClickFocus);
#ifndef QT_NO_TOOLTIP
        pushSendFile1->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushSendFile1->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pushSendFile1->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        pushSendFile1->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushSendFile1->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        pushSendFile1->setText(QString::fromUtf8("Send"));
#ifndef QT_NO_SHORTCUT
        pushSendFile1->setShortcut(QString::fromUtf8(""));
#endif // QT_NO_SHORTCUT
        labelTable = new QLabel(groupTxTemplates);
        labelTable->setObjectName(QString::fromUtf8("labelTable"));
        labelTable->setGeometry(QRect(10, 145, 66, 16));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Ubuntu"));
        font5.setPointSize(8);
        font5.setBold(false);
        font5.setItalic(false);
        font5.setWeight(50);
        font5.setKerning(true);
        labelTable->setFont(font5);
#ifndef QT_NO_TOOLTIP
        labelTable->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        labelTable->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        labelTable->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        labelTable->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        labelTable->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        lineFile1 = new QLineEdit(groupTxTemplates);
        lineFile1->setObjectName(QString::fromUtf8("lineFile1"));
        lineFile1->setGeometry(QRect(35, 80, 256, 23));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Text, brush10);
        QBrush brush16(QColor(112, 56, 40, 113));
        brush16.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush16);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush16);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush16);
#endif
        lineFile1->setPalette(palette2);
        QFont font6;
        font6.setFamily(QString::fromUtf8("Ubuntu Mono"));
        font6.setPointSize(10);
        font6.setBold(false);
        font6.setWeight(50);
        font6.setKerning(true);
        lineFile1->setFont(font6);
        lineFile1->setMouseTracking(false);
        lineFile1->setFocusPolicy(Qt::ClickFocus);
        lineFile1->setContextMenuPolicy(Qt::CustomContextMenu);
#ifndef QT_NO_TOOLTIP
        lineFile1->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        lineFile1->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        lineFile1->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        lineFile1->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        lineFile1->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        lineFile1->setStyleSheet(QString::fromUtf8(""));
        lineFile1->setInputMask(QString::fromUtf8(""));
        lineFile1->setText(QString::fromUtf8(""));
        lineFile1->setPlaceholderText(QString::fromUtf8(""));
        lineFile1->setClearButtonEnabled(true);
        labelFile1 = new QLabel(groupTxTemplates);
        labelFile1->setObjectName(QString::fromUtf8("labelFile1"));
        labelFile1->setGeometry(QRect(10, 65, 66, 16));
        labelFile1->setFont(font5);
#ifndef QT_NO_TOOLTIP
        labelFile1->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        labelFile1->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        labelFile1->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        labelFile1->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        labelFile1->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        comboPattern = new QComboBox(groupTxTemplates);
        comboPattern->setObjectName(QString::fromUtf8("comboPattern"));
        comboPattern->setGeometry(QRect(10, 40, 281, 23));
        comboPattern->setFont(font4);
        comboPattern->setFocusPolicy(Qt::ClickFocus);
        comboPattern->setContextMenuPolicy(Qt::NoContextMenu);
#ifndef QT_NO_TOOLTIP
        comboPattern->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        comboPattern->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        comboPattern->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        comboPattern->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        comboPattern->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        comboPattern->setCurrentText(QString::fromUtf8(""));
        //comboPattern->setPlaceholderText(QString::fromUtf8(""));
        labelPattern = new QLabel(groupTxTemplates);
        labelPattern->setObjectName(QString::fromUtf8("labelPattern"));
        labelPattern->setGeometry(QRect(10, 25, 66, 16));
        labelPattern->setFont(font5);
#ifndef QT_NO_TOOLTIP
        labelPattern->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        labelPattern->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        labelPattern->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        labelPattern->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        labelPattern->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        pushSendPattern = new QPushButton(groupTxTemplates);
        pushSendPattern->setObjectName(QString::fromUtf8("pushSendPattern"));
        pushSendPattern->setEnabled(false);
        pushSendPattern->setGeometry(QRect(290, 40, 61, 23));
        pushSendPattern->setFont(font4);
        pushSendPattern->setFocusPolicy(Qt::ClickFocus);
#ifndef QT_NO_TOOLTIP
        pushSendPattern->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushSendPattern->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pushSendPattern->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        pushSendPattern->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushSendPattern->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        pushSendPattern->setText(QString::fromUtf8("Send"));
#ifndef QT_NO_SHORTCUT
        pushSendPattern->setShortcut(QString::fromUtf8(""));
#endif // QT_NO_SHORTCUT
        labelPatternInfo = new QLabel(groupTxTemplates);
        labelPatternInfo->setObjectName(QString::fromUtf8("labelPatternInfo"));
        labelPatternInfo->setGeometry(QRect(85, 25, 206, 16));
        labelPatternInfo->setFont(font5);
#ifndef QT_NO_TOOLTIP
        labelPatternInfo->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        labelPatternInfo->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        labelPatternInfo->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        labelPatternInfo->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        labelPatternInfo->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        labelPatternInfo->setStyleSheet(QString::fromUtf8("color: rgb(100, 100, 100);"));
        labelFileInfo1 = new QLabel(groupTxTemplates);
        labelFileInfo1->setObjectName(QString::fromUtf8("labelFileInfo1"));
        labelFileInfo1->setGeometry(QRect(85, 65, 206, 16));
        labelFileInfo1->setFont(font5);
#ifndef QT_NO_TOOLTIP
        labelFileInfo1->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        labelFileInfo1->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        labelFileInfo1->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        labelFileInfo1->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        labelFileInfo1->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        labelFileInfo1->setStyleSheet(QString::fromUtf8("color: rgb(100, 100, 100);"));
        labelTableInfo = new QLabel(groupTxTemplates);
        labelTableInfo->setObjectName(QString::fromUtf8("labelTableInfo"));
        labelTableInfo->setGeometry(QRect(85, 145, 206, 16));
        labelTableInfo->setFont(font5);
#ifndef QT_NO_TOOLTIP
        labelTableInfo->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        labelTableInfo->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        labelTableInfo->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        labelTableInfo->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        labelTableInfo->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        labelTableInfo->setStyleSheet(QString::fromUtf8("color: rgb(100, 100, 100);"));
        labelFile2 = new QLabel(groupTxTemplates);
        labelFile2->setObjectName(QString::fromUtf8("labelFile2"));
        labelFile2->setGeometry(QRect(10, 105, 66, 16));
        labelFile2->setFont(font5);
#ifndef QT_NO_TOOLTIP
        labelFile2->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        labelFile2->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        labelFile2->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        labelFile2->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        labelFile2->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        labelFileInfo2 = new QLabel(groupTxTemplates);
        labelFileInfo2->setObjectName(QString::fromUtf8("labelFileInfo2"));
        labelFileInfo2->setGeometry(QRect(85, 105, 206, 16));
        labelFileInfo2->setFont(font5);
#ifndef QT_NO_TOOLTIP
        labelFileInfo2->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        labelFileInfo2->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        labelFileInfo2->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        labelFileInfo2->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        labelFileInfo2->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        labelFileInfo2->setStyleSheet(QString::fromUtf8("color: rgb(100, 100, 100);"));
        pushSelectFile2 = new QPushButton(groupTxTemplates);
        pushSelectFile2->setObjectName(QString::fromUtf8("pushSelectFile2"));
        pushSelectFile2->setGeometry(QRect(10, 120, 26, 23));
        pushSelectFile2->setFont(font3);
        pushSelectFile2->setFocusPolicy(Qt::ClickFocus);
#ifndef QT_NO_TOOLTIP
        pushSelectFile2->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushSelectFile2->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pushSelectFile2->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        pushSelectFile2->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushSelectFile2->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        pushSelectFile2->setText(QString::fromUtf8("..."));
#ifndef QT_NO_SHORTCUT
        pushSelectFile2->setShortcut(QString::fromUtf8(""));
#endif // QT_NO_SHORTCUT
        lineFile2 = new QLineEdit(groupTxTemplates);
        lineFile2->setObjectName(QString::fromUtf8("lineFile2"));
        lineFile2->setGeometry(QRect(35, 120, 256, 23));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Text, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush16);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush16);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush16);
#endif
        lineFile2->setPalette(palette3);
        lineFile2->setFont(font6);
        lineFile2->setMouseTracking(false);
        lineFile2->setFocusPolicy(Qt::ClickFocus);
        lineFile2->setContextMenuPolicy(Qt::CustomContextMenu);
#ifndef QT_NO_TOOLTIP
        lineFile2->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        lineFile2->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        lineFile2->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        lineFile2->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        lineFile2->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        lineFile2->setStyleSheet(QString::fromUtf8(""));
        lineFile2->setInputMask(QString::fromUtf8(""));
        lineFile2->setText(QString::fromUtf8(""));
        lineFile2->setPlaceholderText(QString::fromUtf8(""));
        lineFile2->setClearButtonEnabled(true);
        pushSendFile2 = new QPushButton(groupTxTemplates);
        pushSendFile2->setObjectName(QString::fromUtf8("pushSendFile2"));
        pushSendFile2->setEnabled(false);
        pushSendFile2->setGeometry(QRect(290, 120, 61, 23));
        pushSendFile2->setFont(font4);
        pushSendFile2->setFocusPolicy(Qt::ClickFocus);
#ifndef QT_NO_TOOLTIP
        pushSendFile2->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushSendFile2->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pushSendFile2->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        pushSendFile2->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushSendFile2->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        pushSendFile2->setText(QString::fromUtf8("Send"));
#ifndef QT_NO_SHORTCUT
        pushSendFile2->setShortcut(QString::fromUtf8(""));
#endif // QT_NO_SHORTCUT
        labelFile1->raise();
        labelPattern->raise();
        labelTable->raise();
        tableData->raise();
        pushSelectFile1->raise();
        pushSendFile1->raise();
        lineFile1->raise();
        comboPattern->raise();
        pushSendPattern->raise();
        labelPatternInfo->raise();
        labelFileInfo1->raise();
        labelTableInfo->raise();
        labelFile2->raise();
        labelFileInfo2->raise();
        pushSelectFile2->raise();
        lineFile2->raise();
        pushSendFile2->raise();

        gridLayout->addWidget(groupTxTemplates, 1, 1, 1, 2);

        groupTxData = new QGroupBox(centralwidget);
        groupTxData->setObjectName(QString::fromUtf8("groupTxData"));
        groupTxData->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupTxData->sizePolicy().hasHeightForWidth());
        groupTxData->setSizePolicy(sizePolicy1);
        groupTxData->setMinimumSize(QSize(621, 106));
        groupTxData->setFont(font1);
#ifndef QT_NO_TOOLTIP
        groupTxData->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        groupTxData->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        groupTxData->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        groupTxData->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        groupTxData->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        groupTxData->setAlignment(Qt::AlignCenter);
        groupTxData->setFlat(false);
        gridLayout_4 = new QGridLayout(groupTxData);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setHorizontalSpacing(0);
        gridLayout_4->setVerticalSpacing(4);
        gridLayout_4->setContentsMargins(-1, 4, -1, -1);
        frameTD = new QFrame(groupTxData);
        frameTD->setObjectName(QString::fromUtf8("frameTD"));
        sizePolicy.setHeightForWidth(frameTD->sizePolicy().hasHeightForWidth());
        frameTD->setSizePolicy(sizePolicy);
        frameTD->setMinimumSize(QSize(601, 71));
        frameTD->setFrameShape(QFrame::NoFrame);
        frameTD->setFrameShadow(QFrame::Raised);
        pushSendTx = new QPushButton(frameTD);
        pushSendTx->setObjectName(QString::fromUtf8("pushSendTx"));
        pushSendTx->setEnabled(false);
        pushSendTx->setGeometry(QRect(540, 45, 61, 23));
        pushSendTx->setFont(font4);
        pushSendTx->setFocusPolicy(Qt::ClickFocus);
#ifndef QT_NO_TOOLTIP
        pushSendTx->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushSendTx->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pushSendTx->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        pushSendTx->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushSendTx->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        pushSendTx->setText(QString::fromUtf8("Send"));
#ifndef QT_NO_SHORTCUT
        pushSendTx->setShortcut(QString::fromUtf8(""));
#endif // QT_NO_SHORTCUT
        lineTotalTxA = new QLineEdit(frameTD);
        lineTotalTxA->setObjectName(QString::fromUtf8("lineTotalTxA"));
        lineTotalTxA->setEnabled(true);
        lineTotalTxA->setGeometry(QRect(360, 15, 81, 23));
        QPalette palette4;
        QBrush brush17(QColor(255, 255, 255, 80));
        brush17.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush17);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush17);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush17);
        QBrush brush18(QColor(128, 80, 48, 128));
        brush18.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush18);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush17);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush17);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush17);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush18);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush17);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush17);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush17);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        lineTotalTxA->setPalette(palette4);
        lineTotalTxA->setFont(font4);
        lineTotalTxA->setFocusPolicy(Qt::NoFocus);
#ifndef QT_NO_TOOLTIP
        lineTotalTxA->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        lineTotalTxA->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        lineTotalTxA->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        lineTotalTxA->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        lineTotalTxA->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        lineTotalTxA->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 80);"));
        lineTotalTxA->setInputMask(QString::fromUtf8(""));
        lineTotalTxA->setText(QString::fromUtf8(""));
        lineTotalTxA->setMaxLength(10);
        lineTotalTxA->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineTotalTxA->setReadOnly(true);
        lineTotalTxA->setPlaceholderText(QString::fromUtf8(""));
        labelTypeTx = new QLabel(frameTD);
        labelTypeTx->setObjectName(QString::fromUtf8("labelTypeTx"));
        labelTypeTx->setEnabled(false);
        labelTypeTx->setGeometry(QRect(90, 0, 81, 16));
        labelTypeTx->setFont(font5);
#ifndef QT_NO_TOOLTIP
        labelTypeTx->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        labelTypeTx->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        labelTypeTx->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        labelTypeTx->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        labelTypeTx->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        lineDataTx = new QLineEdit(frameTD);
        lineDataTx->setObjectName(QString::fromUtf8("lineDataTx"));
        lineDataTx->setEnabled(true);
        lineDataTx->setGeometry(QRect(0, 45, 541, 23));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Text, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush16);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush16);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush16);
#endif
        lineDataTx->setPalette(palette5);
        QFont font7;
        font7.setFamily(QString::fromUtf8("Ubuntu Mono"));
        font7.setPointSize(11);
        font7.setBold(false);
        font7.setItalic(false);
        font7.setWeight(50);
        font7.setKerning(true);
        lineDataTx->setFont(font7);
        lineDataTx->setContextMenuPolicy(Qt::CustomContextMenu);
#ifndef QT_NO_TOOLTIP
        lineDataTx->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        lineDataTx->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        lineDataTx->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        lineDataTx->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        lineDataTx->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        lineDataTx->setStyleSheet(QString::fromUtf8(""));
        lineDataTx->setInputMask(QString::fromUtf8(""));
        lineDataTx->setText(QString::fromUtf8(""));
        lineDataTx->setPlaceholderText(QString::fromUtf8(""));
        lineDataTx->setClearButtonEnabled(true);
        comboSendPort = new QComboBox(frameTD);
        comboSendPort->addItem(QString());
        comboSendPort->addItem(QString());
        comboSendPort->addItem(QString());
        comboSendPort->setObjectName(QString::fromUtf8("comboSendPort"));
        comboSendPort->setGeometry(QRect(540, 15, 61, 23));
        comboSendPort->setFont(font4);
        comboSendPort->setFocusPolicy(Qt::ClickFocus);
        comboSendPort->setContextMenuPolicy(Qt::NoContextMenu);
#ifndef QT_NO_TOOLTIP
        comboSendPort->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        comboSendPort->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        comboSendPort->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        comboSendPort->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        comboSendPort->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        comboSendPort->setCurrentText(QString::fromUtf8("AB"));
        comboSendPort->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);
        //comboSendPort->setPlaceholderText(QString::fromUtf8(""));
        pushMarkerTx = new QPushButton(frameTD);
        pushMarkerTx->setObjectName(QString::fromUtf8("pushMarkerTx"));
        pushMarkerTx->setGeometry(QRect(298, 15, 25, 23));
        pushMarkerTx->setFont(font4);
        pushMarkerTx->setFocusPolicy(Qt::ClickFocus);
#ifndef QT_NO_TOOLTIP
        pushMarkerTx->setToolTip(QString::fromUtf8("TRANSMIT MARKER"));
#endif // QT_NO_TOOLTIP
        pushMarkerTx->setToolTipDuration(2000);
#ifndef QT_NO_STATUSTIP
        pushMarkerTx->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pushMarkerTx->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        pushMarkerTx->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushMarkerTx->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        pushMarkerTx->setText(QString::fromUtf8("M"));
#ifndef QT_NO_SHORTCUT
        pushMarkerTx->setShortcut(QString::fromUtf8(""));
#endif // QT_NO_SHORTCUT
        pushMarkerTx->setCheckable(true);
        labelEndTx = new QLabel(frameTD);
        labelEndTx->setObjectName(QString::fromUtf8("labelEndTx"));
        labelEndTx->setGeometry(QRect(180, 0, 81, 16));
        labelEndTx->setFont(font5);
#ifndef QT_NO_TOOLTIP
        labelEndTx->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        labelEndTx->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        labelEndTx->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        labelEndTx->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        labelEndTx->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        pushLocalEcho = new QPushButton(frameTD);
        pushLocalEcho->setObjectName(QString::fromUtf8("pushLocalEcho"));
        pushLocalEcho->setGeometry(QRect(270, 15, 25, 23));
        pushLocalEcho->setFont(font4);
        pushLocalEcho->setFocusPolicy(Qt::ClickFocus);
#ifndef QT_NO_TOOLTIP
        pushLocalEcho->setToolTip(QString::fromUtf8("LOCAL ECHO"));
#endif // QT_NO_TOOLTIP
        pushLocalEcho->setToolTipDuration(2000);
#ifndef QT_NO_STATUSTIP
        pushLocalEcho->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pushLocalEcho->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        pushLocalEcho->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushLocalEcho->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        pushLocalEcho->setText(QString::fromUtf8("E"));
#ifndef QT_NO_SHORTCUT
        pushLocalEcho->setShortcut(QString::fromUtf8(""));
#endif // QT_NO_SHORTCUT
        pushLocalEcho->setCheckable(true);
        comboTypeTx = new QComboBox(frameTD);
        comboTypeTx->addItem(QString());
        comboTypeTx->addItem(QString());
        comboTypeTx->addItem(QString());
        comboTypeTx->addItem(QString());
        comboTypeTx->addItem(QString());
        comboTypeTx->setObjectName(QString::fromUtf8("comboTypeTx"));
        comboTypeTx->setEnabled(false);
        comboTypeTx->setGeometry(QRect(90, 15, 81, 23));
        comboTypeTx->setFont(font4);
        comboTypeTx->setFocusPolicy(Qt::ClickFocus);
        comboTypeTx->setContextMenuPolicy(Qt::NoContextMenu);
#ifndef QT_NO_TOOLTIP
        comboTypeTx->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
        comboTypeTx->setToolTipDuration(-1);
#ifndef QT_NO_STATUSTIP
        comboTypeTx->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        comboTypeTx->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        comboTypeTx->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        comboTypeTx->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        comboTypeTx->setCurrentText(QString::fromUtf8("ASCII"));
        //comboTypeTx->setPlaceholderText(QString::fromUtf8(""));
        labelSendPort = new QLabel(frameTD);
        labelSendPort->setObjectName(QString::fromUtf8("labelSendPort"));
        labelSendPort->setGeometry(QRect(540, 0, 61, 16));
        labelSendPort->setFont(font5);
#ifndef QT_NO_TOOLTIP
        labelSendPort->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        labelSendPort->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        labelSendPort->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        labelSendPort->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        labelSendPort->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        labelSendPort->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelTotalTxA = new QLabel(frameTD);
        labelTotalTxA->setObjectName(QString::fromUtf8("labelTotalTxA"));
        labelTotalTxA->setGeometry(QRect(360, 0, 81, 16));
        labelTotalTxA->setFont(font5);
#ifndef QT_NO_TOOLTIP
        labelTotalTxA->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        labelTotalTxA->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        labelTotalTxA->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        labelTotalTxA->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        labelTotalTxA->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        labelTotalTxA->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        comboEndTx = new QComboBox(frameTD);
        comboEndTx->addItem(QString());
        comboEndTx->addItem(QString());
        comboEndTx->addItem(QString());
        comboEndTx->addItem(QString());
        comboEndTx->addItem(QString());
        comboEndTx->addItem(QString());
        comboEndTx->addItem(QString());
        comboEndTx->addItem(QString());
        comboEndTx->setObjectName(QString::fromUtf8("comboEndTx"));
        comboEndTx->setGeometry(QRect(180, 15, 81, 23));
        comboEndTx->setFont(font4);
        comboEndTx->setFocusPolicy(Qt::ClickFocus);
        comboEndTx->setContextMenuPolicy(Qt::NoContextMenu);
#ifndef QT_NO_TOOLTIP
        comboEndTx->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        comboEndTx->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        comboEndTx->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        comboEndTx->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        comboEndTx->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        comboEndTx->setCurrentText(QString::fromUtf8("NONE"));
        comboEndTx->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);
        //comboEndTx->setPlaceholderText(QString::fromUtf8(""));
        comboFormatTx = new QComboBox(frameTD);
        comboFormatTx->addItem(QString());
        comboFormatTx->addItem(QString());
        comboFormatTx->addItem(QString());
        comboFormatTx->addItem(QString());
        comboFormatTx->addItem(QString());
        comboFormatTx->setObjectName(QString::fromUtf8("comboFormatTx"));
        comboFormatTx->setGeometry(QRect(0, 15, 81, 23));
        comboFormatTx->setFont(font4);
        comboFormatTx->setFocusPolicy(Qt::ClickFocus);
        comboFormatTx->setContextMenuPolicy(Qt::NoContextMenu);
#ifndef QT_NO_TOOLTIP
        comboFormatTx->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
        comboFormatTx->setToolTipDuration(-1);
#ifndef QT_NO_STATUSTIP
        comboFormatTx->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        comboFormatTx->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        comboFormatTx->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        comboFormatTx->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        comboFormatTx->setCurrentText(QString::fromUtf8("CHAR"));
        //comboFormatTx->setPlaceholderText(QString::fromUtf8(""));
        labelFormatTx = new QLabel(frameTD);
        labelFormatTx->setObjectName(QString::fromUtf8("labelFormatTx"));
        labelFormatTx->setGeometry(QRect(0, 0, 81, 16));
        labelFormatTx->setFont(font5);
#ifndef QT_NO_TOOLTIP
        labelFormatTx->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        labelFormatTx->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        labelFormatTx->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        labelFormatTx->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        labelFormatTx->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        labelTotalTxB = new QLabel(frameTD);
        labelTotalTxB->setObjectName(QString::fromUtf8("labelTotalTxB"));
        labelTotalTxB->setGeometry(QRect(450, 0, 81, 16));
        labelTotalTxB->setFont(font5);
#ifndef QT_NO_TOOLTIP
        labelTotalTxB->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        labelTotalTxB->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        labelTotalTxB->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        labelTotalTxB->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        labelTotalTxB->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        labelTotalTxB->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineTotalTxB = new QLineEdit(frameTD);
        lineTotalTxB->setObjectName(QString::fromUtf8("lineTotalTxB"));
        lineTotalTxB->setEnabled(true);
        lineTotalTxB->setGeometry(QRect(450, 15, 81, 23));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Button, brush17);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush17);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush17);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush18);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush17);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush17);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush17);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush18);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush17);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush17);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush17);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        lineTotalTxB->setPalette(palette6);
        lineTotalTxB->setFont(font4);
        lineTotalTxB->setFocusPolicy(Qt::NoFocus);
#ifndef QT_NO_TOOLTIP
        lineTotalTxB->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        lineTotalTxB->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        lineTotalTxB->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        lineTotalTxB->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        lineTotalTxB->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        lineTotalTxB->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 80);"));
        lineTotalTxB->setInputMask(QString::fromUtf8(""));
        lineTotalTxB->setText(QString::fromUtf8(""));
        lineTotalTxB->setMaxLength(10);
        lineTotalTxB->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineTotalTxB->setReadOnly(true);
        lineTotalTxB->setPlaceholderText(QString::fromUtf8(""));

        gridLayout_4->addWidget(frameTD, 0, 0, 1, 1);


        gridLayout->addWidget(groupTxData, 2, 0, 1, 1);

        frameACR = new QFrame(centralwidget);
        frameACR->setObjectName(QString::fromUtf8("frameACR"));
        sizePolicy.setHeightForWidth(frameACR->sizePolicy().hasHeightForWidth());
        frameACR->setSizePolicy(sizePolicy);
        frameACR->setMinimumSize(QSize(81, 106));
        frameACR->setFrameShape(QFrame::NoFrame);
        frameACR->setFrameShadow(QFrame::Raised);
        pushAbout = new QPushButton(frameACR);
        pushAbout->setObjectName(QString::fromUtf8("pushAbout"));
        pushAbout->setGeometry(QRect(10, 20, 61, 23));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Ubuntu"));
        font8.setPointSize(8);
        font8.setKerning(true);
        pushAbout->setFont(font8);
        pushAbout->setFocusPolicy(Qt::ClickFocus);
#ifndef QT_NO_TOOLTIP
        pushAbout->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushAbout->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pushAbout->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        pushAbout->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushAbout->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        pushAbout->setText(QString::fromUtf8("About..."));
        pushAbout->setIconSize(QSize(48, 48));
#ifndef QT_NO_SHORTCUT
        pushAbout->setShortcut(QString::fromUtf8(""));
#endif // QT_NO_SHORTCUT
        pushAbout->setChecked(false);
        pushAbout->setFlat(false);
        pushConfig = new QPushButton(frameACR);
        pushConfig->setObjectName(QString::fromUtf8("pushConfig"));
        pushConfig->setGeometry(QRect(10, 50, 61, 23));
        pushConfig->setFont(font8);
        pushConfig->setFocusPolicy(Qt::ClickFocus);
#ifndef QT_NO_TOOLTIP
        pushConfig->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushConfig->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pushConfig->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        pushConfig->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushConfig->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        pushConfig->setText(QString::fromUtf8("Config..."));
        pushConfig->setIconSize(QSize(48, 48));
#ifndef QT_NO_SHORTCUT
        pushConfig->setShortcut(QString::fromUtf8(""));
#endif // QT_NO_SHORTCUT
        pushConfig->setChecked(false);
        pushConfig->setFlat(false);
        pushReport = new QPushButton(frameACR);
        pushReport->setObjectName(QString::fromUtf8("pushReport"));
        pushReport->setGeometry(QRect(10, 80, 61, 23));
        pushReport->setFont(font8);
        pushReport->setFocusPolicy(Qt::ClickFocus);
#ifndef QT_NO_TOOLTIP
        pushReport->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushReport->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pushReport->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        pushReport->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushReport->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        pushReport->setText(QString::fromUtf8("Report"));
        pushReport->setIconSize(QSize(48, 48));
#ifndef QT_NO_SHORTCUT
        pushReport->setShortcut(QString::fromUtf8(""));
#endif // QT_NO_SHORTCUT
        pushReport->setChecked(false);
        pushReport->setFlat(false);

        gridLayout->addWidget(frameACR, 0, 2, 1, 1);

        groupRxData = new QGroupBox(centralwidget);
        groupRxData->setObjectName(QString::fromUtf8("groupRxData"));
        groupRxData->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupRxData->sizePolicy().hasHeightForWidth());
        groupRxData->setSizePolicy(sizePolicy2);
        groupRxData->setMinimumSize(QSize(621, 391));
        groupRxData->setFont(font1);
#ifndef QT_NO_TOOLTIP
        groupRxData->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        groupRxData->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        groupRxData->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        groupRxData->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        groupRxData->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        groupRxData->setAlignment(Qt::AlignCenter);
        groupRxData->setFlat(false);
        gridLayout_2 = new QGridLayout(groupRxData);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setVerticalSpacing(4);
        gridLayout_2->setContentsMargins(-1, 4, -1, -1);
        graphicsDataRx = new QGraphicsView(groupRxData);
        graphicsDataRx->setObjectName(QString::fromUtf8("graphicsDataRx"));
        graphicsDataRx->setMinimumSize(QSize(601, 0));
        QPalette palette7;
        QBrush brush19(QColor(48, 48, 48, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush19);
        QBrush brush20(QColor(160, 160, 160, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush20);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush19);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush19);
        QBrush brush21(QColor(0, 0, 0, 128));
        brush21.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush21);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush19);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush20);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush19);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush19);
        QBrush brush22(QColor(160, 160, 160, 128));
        brush22.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush22);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush19);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush19);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush19);
        QBrush brush23(QColor(0, 0, 0, 128));
        brush23.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush23);
#endif
        graphicsDataRx->setPalette(palette7);
        QFont font9;
        font9.setFamily(QString::fromUtf8("Ubuntu Mono"));
        font9.setPointSize(12);
        font9.setBold(false);
        font9.setWeight(50);
        font9.setKerning(true);
        graphicsDataRx->setFont(font9);
#ifndef QT_NO_TOOLTIP
        graphicsDataRx->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        graphicsDataRx->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        graphicsDataRx->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        graphicsDataRx->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        graphicsDataRx->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        graphicsDataRx->setStyleSheet(QString::fromUtf8("background-color: rgb(48, 48, 48);"));
        graphicsDataRx->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);

        gridLayout_2->addWidget(graphicsDataRx, 2, 0, 1, 3);

        textDataRx = new QTextEdit(groupRxData);
        textDataRx->setObjectName(QString::fromUtf8("textDataRx"));
        textDataRx->setMinimumSize(QSize(601, 0));
        QFont font10;
        font10.setFamily(QString::fromUtf8("Ubuntu Mono"));
        font10.setPointSize(12);
        font10.setBold(false);
        font10.setItalic(false);
        font10.setWeight(50);
        font10.setKerning(true);
        textDataRx->setFont(font10);
        textDataRx->setMouseTracking(false);
        textDataRx->setFocusPolicy(Qt::ClickFocus);
#ifndef QT_NO_TOOLTIP
        textDataRx->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        textDataRx->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        textDataRx->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        textDataRx->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        textDataRx->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        textDataRx->setFrameShadow(QFrame::Sunken);
        textDataRx->setDocumentTitle(QString::fromUtf8(""));
        textDataRx->setLineWrapMode(QTextEdit::NoWrap);
        textDataRx->setReadOnly(true);
        //textDataRx->setMarkdown(QString::fromUtf8(""));
        textDataRx->setHtml(QString::fromUtf8("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu Mono','Ubuntu','Ubuntu'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt;\"><br /></p></body></html>"));
        textDataRx->setPlaceholderText(QString::fromUtf8(""));

        gridLayout_2->addWidget(textDataRx, 1, 0, 1, 3);

        frameRD = new QFrame(groupRxData);
        frameRD->setObjectName(QString::fromUtf8("frameRD"));
        sizePolicy.setHeightForWidth(frameRD->sizePolicy().hasHeightForWidth());
        frameRD->setSizePolicy(sizePolicy);
        frameRD->setMinimumSize(QSize(601, 41));
        frameRD->setFrameShape(QFrame::NoFrame);
        frameRD->setFrameShadow(QFrame::Raised);
        pushWordWrap = new QPushButton(frameRD);
        pushWordWrap->setObjectName(QString::fromUtf8("pushWordWrap"));
        pushWordWrap->setGeometry(QRect(326, 15, 25, 23));
        pushWordWrap->setFont(font4);
        pushWordWrap->setFocusPolicy(Qt::ClickFocus);
#ifndef QT_NO_TOOLTIP
        pushWordWrap->setToolTip(QString::fromUtf8("WORD WRAP"));
#endif // QT_NO_TOOLTIP
        pushWordWrap->setToolTipDuration(2000);
#ifndef QT_NO_STATUSTIP
        pushWordWrap->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pushWordWrap->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        pushWordWrap->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushWordWrap->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        pushWordWrap->setText(QString::fromUtf8("W"));
#ifndef QT_NO_SHORTCUT
        pushWordWrap->setShortcut(QString::fromUtf8(""));
#endif // QT_NO_SHORTCUT
        pushWordWrap->setCheckable(true);
        comboTypeRx = new QComboBox(frameRD);
        comboTypeRx->addItem(QString());
        comboTypeRx->addItem(QString());
        comboTypeRx->setObjectName(QString::fromUtf8("comboTypeRx"));
        comboTypeRx->setEnabled(false);
        comboTypeRx->setGeometry(QRect(90, 15, 81, 23));
        comboTypeRx->setFont(font4);
        comboTypeRx->setFocusPolicy(Qt::ClickFocus);
        comboTypeRx->setContextMenuPolicy(Qt::NoContextMenu);
#ifndef QT_NO_TOOLTIP
        comboTypeRx->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        comboTypeRx->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        comboTypeRx->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        comboTypeRx->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        comboTypeRx->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        comboTypeRx->setCurrentText(QString::fromUtf8("Unsigned"));
        //comboTypeRx->setPlaceholderText(QString::fromUtf8(""));
        pushMarkerRx = new QPushButton(frameRD);
        pushMarkerRx->setObjectName(QString::fromUtf8("pushMarkerRx"));
        pushMarkerRx->setGeometry(QRect(298, 15, 25, 23));
        pushMarkerRx->setFont(font4);
        pushMarkerRx->setFocusPolicy(Qt::ClickFocus);
#ifndef QT_NO_TOOLTIP
        pushMarkerRx->setToolTip(QString::fromUtf8("RECEIVE MARKER"));
#endif // QT_NO_TOOLTIP
        pushMarkerRx->setToolTipDuration(2000);
#ifndef QT_NO_STATUSTIP
        pushMarkerRx->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pushMarkerRx->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        pushMarkerRx->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushMarkerRx->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        pushMarkerRx->setText(QString::fromUtf8("M"));
#ifndef QT_NO_SHORTCUT
        pushMarkerRx->setShortcut(QString::fromUtf8(""));
#endif // QT_NO_SHORTCUT
        pushMarkerRx->setCheckable(true);
        labelTotalRxA = new QLabel(frameRD);
        labelTotalRxA->setObjectName(QString::fromUtf8("labelTotalRxA"));
        labelTotalRxA->setEnabled(true);
        labelTotalRxA->setGeometry(QRect(360, 0, 81, 16));
        labelTotalRxA->setFont(font5);
#ifndef QT_NO_TOOLTIP
        labelTotalRxA->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        labelTotalRxA->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        labelTotalRxA->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        labelTotalRxA->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        labelTotalRxA->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        labelTotalRxA->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineTotalRxA = new QLineEdit(frameRD);
        lineTotalRxA->setObjectName(QString::fromUtf8("lineTotalRxA"));
        lineTotalRxA->setEnabled(true);
        lineTotalRxA->setGeometry(QRect(360, 15, 81, 23));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::Button, brush17);
        QBrush brush24(QColor(0, 80, 112, 255));
        brush24.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush24);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush17);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush17);
        QBrush brush25(QColor(48, 128, 128, 128));
        brush25.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush25);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush17);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush24);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush17);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush17);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush25);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush17);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush17);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush17);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush25);
#endif
        lineTotalRxA->setPalette(palette8);
        lineTotalRxA->setFont(font4);
        lineTotalRxA->setFocusPolicy(Qt::NoFocus);
#ifndef QT_NO_TOOLTIP
        lineTotalRxA->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        lineTotalRxA->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        lineTotalRxA->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        lineTotalRxA->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        lineTotalRxA->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        lineTotalRxA->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 80);"));
        lineTotalRxA->setInputMask(QString::fromUtf8(""));
        lineTotalRxA->setText(QString::fromUtf8(""));
        lineTotalRxA->setMaxLength(10);
        lineTotalRxA->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineTotalRxA->setReadOnly(true);
        lineTotalRxA->setPlaceholderText(QString::fromUtf8(""));
        lineTotalRxB = new QLineEdit(frameRD);
        lineTotalRxB->setObjectName(QString::fromUtf8("lineTotalRxB"));
        lineTotalRxB->setEnabled(true);
        lineTotalRxB->setGeometry(QRect(450, 15, 81, 23));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::Button, brush17);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush24);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush17);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush17);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush25);
#endif
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush17);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush24);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush17);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush17);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush25);
#endif
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush17);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush17);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush17);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush25);
#endif
        lineTotalRxB->setPalette(palette9);
        lineTotalRxB->setFont(font4);
        lineTotalRxB->setFocusPolicy(Qt::NoFocus);
#ifndef QT_NO_TOOLTIP
        lineTotalRxB->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        lineTotalRxB->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        lineTotalRxB->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        lineTotalRxB->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        lineTotalRxB->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        lineTotalRxB->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 80);"));
        lineTotalRxB->setInputMask(QString::fromUtf8(""));
        lineTotalRxB->setText(QString::fromUtf8(""));
        lineTotalRxB->setMaxLength(10);
        lineTotalRxB->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineTotalRxB->setReadOnly(true);
        lineTotalRxB->setPlaceholderText(QString::fromUtf8(""));
        comboFrameRx = new QComboBox(frameRD);
        comboFrameRx->addItem(QString());
        comboFrameRx->addItem(QString());
        comboFrameRx->addItem(QString());
        comboFrameRx->addItem(QString());
        comboFrameRx->addItem(QString());
        comboFrameRx->addItem(QString());
        comboFrameRx->addItem(QString());
        comboFrameRx->addItem(QString());
        comboFrameRx->setObjectName(QString::fromUtf8("comboFrameRx"));
        comboFrameRx->setEnabled(false);
        comboFrameRx->setGeometry(QRect(180, 15, 81, 23));
        comboFrameRx->setFont(font4);
        comboFrameRx->setFocusPolicy(Qt::ClickFocus);
        comboFrameRx->setContextMenuPolicy(Qt::NoContextMenu);
#ifndef QT_NO_TOOLTIP
        comboFrameRx->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        comboFrameRx->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        comboFrameRx->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        comboFrameRx->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        comboFrameRx->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        comboFrameRx->setCurrentText(QString::fromUtf8("AUTO"));
        //comboFrameRx->setPlaceholderText(QString::fromUtf8(""));
        comboFormatRx = new QComboBox(frameRD);
        comboFormatRx->addItem(QString());
        comboFormatRx->addItem(QString());
        comboFormatRx->addItem(QString());
        comboFormatRx->addItem(QString());
        comboFormatRx->addItem(QString());
        comboFormatRx->addItem(QString());
        comboFormatRx->setObjectName(QString::fromUtf8("comboFormatRx"));
        comboFormatRx->setGeometry(QRect(0, 15, 81, 23));
        comboFormatRx->setFont(font4);
        comboFormatRx->setFocusPolicy(Qt::ClickFocus);
        comboFormatRx->setContextMenuPolicy(Qt::NoContextMenu);
#ifndef QT_NO_TOOLTIP
        comboFormatRx->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        comboFormatRx->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        comboFormatRx->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        comboFormatRx->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        comboFormatRx->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        comboFormatRx->setCurrentText(QString::fromUtf8("CHAR"));
        //comboFormatRx->setPlaceholderText(QString::fromUtf8(""));
        labelTotalRxB = new QLabel(frameRD);
        labelTotalRxB->setObjectName(QString::fromUtf8("labelTotalRxB"));
        labelTotalRxB->setEnabled(true);
        labelTotalRxB->setGeometry(QRect(450, 0, 81, 16));
        labelTotalRxB->setFont(font5);
#ifndef QT_NO_TOOLTIP
        labelTotalRxB->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        labelTotalRxB->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        labelTotalRxB->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        labelTotalRxB->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        labelTotalRxB->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        labelTotalRxB->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelTypeRx = new QLabel(frameRD);
        labelTypeRx->setObjectName(QString::fromUtf8("labelTypeRx"));
        labelTypeRx->setEnabled(false);
        labelTypeRx->setGeometry(QRect(90, 0, 81, 16));
        labelTypeRx->setFont(font5);
#ifndef QT_NO_TOOLTIP
        labelTypeRx->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        labelTypeRx->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        labelTypeRx->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        labelTypeRx->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        labelTypeRx->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        labelFormatRx = new QLabel(frameRD);
        labelFormatRx->setObjectName(QString::fromUtf8("labelFormatRx"));
        labelFormatRx->setGeometry(QRect(0, 0, 81, 16));
        labelFormatRx->setFont(font5);
#ifndef QT_NO_TOOLTIP
        labelFormatRx->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        labelFormatRx->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        labelFormatRx->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        labelFormatRx->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        labelFormatRx->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        pushClearRx = new QPushButton(frameRD);
        pushClearRx->setObjectName(QString::fromUtf8("pushClearRx"));
        pushClearRx->setGeometry(QRect(540, 15, 61, 23));
        pushClearRx->setFont(font4);
        pushClearRx->setFocusPolicy(Qt::ClickFocus);
        pushClearRx->setToolTipDuration(2000);
#ifndef QT_NO_STATUSTIP
        pushClearRx->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pushClearRx->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        pushClearRx->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushClearRx->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        pushClearRx->setText(QString::fromUtf8("Clear"));
#ifndef QT_NO_SHORTCUT
        pushClearRx->setShortcut(QString::fromUtf8(""));
#endif // QT_NO_SHORTCUT
        pushSingleMode = new QPushButton(frameRD);
        pushSingleMode->setObjectName(QString::fromUtf8("pushSingleMode"));
        pushSingleMode->setGeometry(QRect(270, 15, 25, 23));
        pushSingleMode->setFont(font4);
        pushSingleMode->setFocusPolicy(Qt::ClickFocus);
#ifndef QT_NO_TOOLTIP
        pushSingleMode->setToolTip(QString::fromUtf8("SINGLE MODE"));
#endif // QT_NO_TOOLTIP
        pushSingleMode->setToolTipDuration(2000);
#ifndef QT_NO_STATUSTIP
        pushSingleMode->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pushSingleMode->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        pushSingleMode->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushSingleMode->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        pushSingleMode->setText(QString::fromUtf8("S"));
#ifndef QT_NO_SHORTCUT
        pushSingleMode->setShortcut(QString::fromUtf8(""));
#endif // QT_NO_SHORTCUT
        pushSingleMode->setCheckable(true);
        labelFrameRx = new QLabel(frameRD);
        labelFrameRx->setObjectName(QString::fromUtf8("labelFrameRx"));
        labelFrameRx->setEnabled(false);
        labelFrameRx->setGeometry(QRect(180, 0, 81, 16));
        labelFrameRx->setFont(font5);
#ifndef QT_NO_TOOLTIP
        labelFrameRx->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        labelFrameRx->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        labelFrameRx->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        labelFrameRx->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        labelFrameRx->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY

        gridLayout_2->addWidget(frameRD, 0, 1, 1, 1);

        frameRD->raise();
        graphicsDataRx->raise();
        textDataRx->raise();

        gridLayout->addWidget(groupRxData, 1, 0, 1, 1);

        groupTxTimer = new QGroupBox(centralwidget);
        groupTxTimer->setObjectName(QString::fromUtf8("groupTxTimer"));
        groupTxTimer->setEnabled(true);
        sizePolicy.setHeightForWidth(groupTxTimer->sizePolicy().hasHeightForWidth());
        groupTxTimer->setSizePolicy(sizePolicy);
        groupTxTimer->setMinimumSize(QSize(361, 106));
        groupTxTimer->setFont(font1);
#ifndef QT_NO_TOOLTIP
        groupTxTimer->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        groupTxTimer->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        groupTxTimer->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        groupTxTimer->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        groupTxTimer->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        groupTxTimer->setFlat(false);
        labelTmrSource = new QLabel(groupTxTimer);
        labelTmrSource->setObjectName(QString::fromUtf8("labelTmrSource"));
        labelTmrSource->setGeometry(QRect(30, 25, 161, 16));
        labelTmrSource->setFont(font5);
#ifndef QT_NO_TOOLTIP
        labelTmrSource->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        labelTmrSource->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        labelTmrSource->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        labelTmrSource->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        labelTmrSource->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        comboTmrSourceA = new QComboBox(groupTxTimer);
        comboTmrSourceA->addItem(QString());
        comboTmrSourceA->addItem(QString());
        comboTmrSourceA->addItem(QString());
        comboTmrSourceA->addItem(QString());
        comboTmrSourceA->addItem(QString());
        comboTmrSourceA->addItem(QString());
        comboTmrSourceA->addItem(QString());
        comboTmrSourceA->addItem(QString());
        comboTmrSourceA->addItem(QString());
        comboTmrSourceA->addItem(QString());
        comboTmrSourceA->addItem(QString());
        comboTmrSourceA->addItem(QString());
        comboTmrSourceA->addItem(QString());
        comboTmrSourceA->addItem(QString());
        comboTmrSourceA->addItem(QString());
        comboTmrSourceA->addItem(QString());
        comboTmrSourceA->addItem(QString());
        comboTmrSourceA->addItem(QString());
        comboTmrSourceA->addItem(QString());
        comboTmrSourceA->addItem(QString());
        comboTmrSourceA->setObjectName(QString::fromUtf8("comboTmrSourceA"));
        comboTmrSourceA->setGeometry(QRect(30, 40, 161, 23));
        comboTmrSourceA->setFont(font4);
        comboTmrSourceA->setFocusPolicy(Qt::ClickFocus);
        comboTmrSourceA->setContextMenuPolicy(Qt::NoContextMenu);
#ifndef QT_NO_TOOLTIP
        comboTmrSourceA->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
        comboTmrSourceA->setToolTipDuration(-1);
#ifndef QT_NO_STATUSTIP
        comboTmrSourceA->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        comboTmrSourceA->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        comboTmrSourceA->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        comboTmrSourceA->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        comboTmrSourceA->setCurrentText(QString::fromUtf8("Line"));
        //comboTmrSourceA->setPlaceholderText(QString::fromUtf8(""));
        comboTmrTime = new QComboBox(groupTxTimer);
        comboTmrTime->addItem(QString());
        comboTmrTime->addItem(QString());
        comboTmrTime->addItem(QString());
        comboTmrTime->addItem(QString());
        comboTmrTime->addItem(QString());
        comboTmrTime->addItem(QString());
        comboTmrTime->addItem(QString());
        comboTmrTime->addItem(QString());
        comboTmrTime->addItem(QString());
        comboTmrTime->addItem(QString());
        comboTmrTime->addItem(QString());
        comboTmrTime->setObjectName(QString::fromUtf8("comboTmrTime"));
        comboTmrTime->setGeometry(QRect(200, 55, 81, 23));
        comboTmrTime->setFont(font4);
        comboTmrTime->setFocusPolicy(Qt::ClickFocus);
        comboTmrTime->setContextMenuPolicy(Qt::NoContextMenu);
#ifndef QT_NO_TOOLTIP
        comboTmrTime->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
        comboTmrTime->setToolTipDuration(-1);
#ifndef QT_NO_STATUSTIP
        comboTmrTime->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        comboTmrTime->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        comboTmrTime->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        comboTmrTime->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        labelTmrTime = new QLabel(groupTxTimer);
        labelTmrTime->setObjectName(QString::fromUtf8("labelTmrTime"));
        labelTmrTime->setGeometry(QRect(200, 40, 81, 16));
        labelTmrTime->setFont(font5);
#ifndef QT_NO_TOOLTIP
        labelTmrTime->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        labelTmrTime->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        labelTmrTime->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        labelTmrTime->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        labelTmrTime->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        pushTmrRun = new QPushButton(groupTxTimer);
        pushTmrRun->setObjectName(QString::fromUtf8("pushTmrRun"));
        pushTmrRun->setEnabled(false);
        pushTmrRun->setGeometry(QRect(290, 40, 61, 23));
        pushTmrRun->setFont(font3);
        pushTmrRun->setFocusPolicy(Qt::ClickFocus);
#ifndef QT_NO_TOOLTIP
        pushTmrRun->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushTmrRun->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pushTmrRun->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        pushTmrRun->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushTmrRun->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        pushTmrRun->setStyleSheet(QString::fromUtf8(""));
        pushTmrRun->setText(QString::fromUtf8("RUN"));
#ifndef QT_NO_SHORTCUT
        pushTmrRun->setShortcut(QString::fromUtf8(""));
#endif // QT_NO_SHORTCUT
        pushTmrRun->setCheckable(true);
        labelTmrCount = new QLabel(groupTxTimer);
        labelTmrCount->setObjectName(QString::fromUtf8("labelTmrCount"));
        labelTmrCount->setGeometry(QRect(290, 25, 61, 16));
        labelTmrCount->setFont(font5);
#ifndef QT_NO_TOOLTIP
        labelTmrCount->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        labelTmrCount->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        labelTmrCount->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        labelTmrCount->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        labelTmrCount->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        labelTmrCount->setStyleSheet(QString::fromUtf8("color: rgb(100, 100, 100);"));
        labelTmrCount->setTextFormat(Qt::AutoText);
        labelTmrCount->setAlignment(Qt::AlignCenter);
        comboTmrSourceB = new QComboBox(groupTxTimer);
        comboTmrSourceB->addItem(QString());
        comboTmrSourceB->addItem(QString());
        comboTmrSourceB->addItem(QString());
        comboTmrSourceB->addItem(QString());
        comboTmrSourceB->addItem(QString());
        comboTmrSourceB->addItem(QString());
        comboTmrSourceB->addItem(QString());
        comboTmrSourceB->addItem(QString());
        comboTmrSourceB->addItem(QString());
        comboTmrSourceB->addItem(QString());
        comboTmrSourceB->addItem(QString());
        comboTmrSourceB->addItem(QString());
        comboTmrSourceB->addItem(QString());
        comboTmrSourceB->addItem(QString());
        comboTmrSourceB->addItem(QString());
        comboTmrSourceB->addItem(QString());
        comboTmrSourceB->addItem(QString());
        comboTmrSourceB->addItem(QString());
        comboTmrSourceB->addItem(QString());
        comboTmrSourceB->addItem(QString());
        comboTmrSourceB->addItem(QString());
        comboTmrSourceB->setObjectName(QString::fromUtf8("comboTmrSourceB"));
        comboTmrSourceB->setEnabled(true);
        comboTmrSourceB->setGeometry(QRect(30, 70, 161, 23));
        comboTmrSourceB->setFont(font4);
        comboTmrSourceB->setFocusPolicy(Qt::ClickFocus);
        comboTmrSourceB->setContextMenuPolicy(Qt::NoContextMenu);
#ifndef QT_NO_TOOLTIP
        comboTmrSourceB->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
        comboTmrSourceB->setToolTipDuration(-1);
#ifndef QT_NO_STATUSTIP
        comboTmrSourceB->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        comboTmrSourceB->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        comboTmrSourceB->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        comboTmrSourceB->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        comboTmrSourceB->setCurrentText(QString::fromUtf8("Clone A"));
        //comboTmrSourceB->setPlaceholderText(QString::fromUtf8(""));
        labelTmrPortA = new QLabel(groupTxTimer);
        labelTmrPortA->setObjectName(QString::fromUtf8("labelTmrPortA"));
        labelTmrPortA->setGeometry(QRect(5, 40, 26, 23));
        labelTmrPortA->setFont(font4);
#ifndef QT_NO_TOOLTIP
        labelTmrPortA->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        labelTmrPortA->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        labelTmrPortA->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        labelTmrPortA->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        labelTmrPortA->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        labelTmrPortA->setAlignment(Qt::AlignCenter);
        labelTmrPortB = new QLabel(groupTxTimer);
        labelTmrPortB->setObjectName(QString::fromUtf8("labelTmrPortB"));
        labelTmrPortB->setGeometry(QRect(5, 70, 26, 23));
        labelTmrPortB->setFont(font4);
#ifndef QT_NO_TOOLTIP
        labelTmrPortB->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        labelTmrPortB->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        labelTmrPortB->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        labelTmrPortB->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        labelTmrPortB->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        labelTmrPortB->setAlignment(Qt::AlignCenter);
        pushTmrSend = new QPushButton(groupTxTimer);
        pushTmrSend->setObjectName(QString::fromUtf8("pushTmrSend"));
        pushTmrSend->setEnabled(false);
        pushTmrSend->setGeometry(QRect(290, 70, 61, 23));
        pushTmrSend->setFont(font3);
        pushTmrSend->setFocusPolicy(Qt::ClickFocus);
#ifndef QT_NO_TOOLTIP
        pushTmrSend->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushTmrSend->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pushTmrSend->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        pushTmrSend->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushTmrSend->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        pushTmrSend->setStyleSheet(QString::fromUtf8(""));
        pushTmrSend->setText(QString::fromUtf8("Send"));
#ifndef QT_NO_SHORTCUT
        pushTmrSend->setShortcut(QString::fromUtf8(""));
#endif // QT_NO_SHORTCUT
        labelTmrTime->raise();
        labelTmrSource->raise();
        comboTmrSourceA->raise();
        comboTmrTime->raise();
        pushTmrRun->raise();
        labelTmrCount->raise();
        comboTmrSourceB->raise();
        labelTmrPortA->raise();
        labelTmrPortB->raise();
        pushTmrSend->raise();

        gridLayout->addWidget(groupTxTimer, 2, 1, 1, 2);

        groupPort = new QGroupBox(centralwidget);
        groupPort->setObjectName(QString::fromUtf8("groupPort"));
        sizePolicy1.setHeightForWidth(groupPort->sizePolicy().hasHeightForWidth());
        groupPort->setSizePolicy(sizePolicy1);
        groupPort->setMinimumSize(QSize(621, 106));
        groupPort->setFont(font1);
#ifndef QT_NO_TOOLTIP
        groupPort->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        groupPort->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        groupPort->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        groupPort->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        groupPort->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        groupPort->setAlignment(Qt::AlignCenter);
        groupPort->setFlat(false);
        groupPort->setCheckable(false);
        gridLayout_3 = new QGridLayout(groupPort);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(0);
        gridLayout_3->setContentsMargins(-1, 4, -1, -1);
        frameP = new QFrame(groupPort);
        frameP->setObjectName(QString::fromUtf8("frameP"));
        sizePolicy.setHeightForWidth(frameP->sizePolicy().hasHeightForWidth());
        frameP->setSizePolicy(sizePolicy);
        frameP->setMinimumSize(QSize(601, 71));
        frameP->setFrameShape(QFrame::NoFrame);
        frameP->setFrameShadow(QFrame::Raised);
        comboModePortA = new QComboBox(frameP);
        comboModePortA->addItem(QString());
        comboModePortA->addItem(QString());
        comboModePortA->addItem(QString());
        comboModePortA->addItem(QString());
        comboModePortA->addItem(QString());
        comboModePortA->addItem(QString());
        comboModePortA->setObjectName(QString::fromUtf8("comboModePortA"));
        comboModePortA->setGeometry(QRect(360, 15, 81, 23));
        comboModePortA->setFont(font4);
        comboModePortA->setFocusPolicy(Qt::ClickFocus);
        comboModePortA->setContextMenuPolicy(Qt::NoContextMenu);
#ifndef QT_NO_TOOLTIP
        comboModePortA->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        comboModePortA->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        comboModePortA->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        comboModePortA->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        comboModePortA->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        comboModePortA->setCurrentText(QString::fromUtf8("8-N-1"));
        //comboModePortA->setPlaceholderText(QString::fromUtf8(""));
        labelModePort = new QLabel(frameP);
        labelModePort->setObjectName(QString::fromUtf8("labelModePort"));
        labelModePort->setGeometry(QRect(360, 0, 81, 16));
        labelModePort->setFont(font5);
#ifndef QT_NO_TOOLTIP
        labelModePort->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        labelModePort->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        labelModePort->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        labelModePort->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        labelModePort->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        labelSpeedPort = new QLabel(frameP);
        labelSpeedPort->setObjectName(QString::fromUtf8("labelSpeedPort"));
        labelSpeedPort->setGeometry(QRect(270, 0, 81, 16));
        labelSpeedPort->setFont(font5);
#ifndef QT_NO_TOOLTIP
        labelSpeedPort->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        labelSpeedPort->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        labelSpeedPort->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        labelSpeedPort->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        labelSpeedPort->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        comboSelectPortB = new QComboBox(frameP);
        comboSelectPortB->addItem(QString());
        comboSelectPortB->setObjectName(QString::fromUtf8("comboSelectPortB"));
        comboSelectPortB->setGeometry(QRect(25, 45, 236, 23));
        comboSelectPortB->setFont(font3);
        comboSelectPortB->setFocusPolicy(Qt::ClickFocus);
        comboSelectPortB->setContextMenuPolicy(Qt::CustomContextMenu);
#ifndef QT_NO_TOOLTIP
        comboSelectPortB->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        comboSelectPortB->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        comboSelectPortB->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        comboSelectPortB->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        comboSelectPortB->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        comboSelectPortB->setEditable(false);
        comboSelectPortB->setCurrentText(QString::fromUtf8("CLOSE"));
        //comboSelectPortB->setPlaceholderText(QString::fromUtf8(""));
        comboFlowPortB = new QComboBox(frameP);
        comboFlowPortB->addItem(QString());
        comboFlowPortB->addItem(QString());
        comboFlowPortB->addItem(QString());
        comboFlowPortB->addItem(QString());
        comboFlowPortB->setObjectName(QString::fromUtf8("comboFlowPortB"));
        comboFlowPortB->setEnabled(true);
        comboFlowPortB->setGeometry(QRect(450, 45, 81, 23));
        comboFlowPortB->setFont(font4);
        comboFlowPortB->setFocusPolicy(Qt::ClickFocus);
        comboFlowPortB->setContextMenuPolicy(Qt::NoContextMenu);
#ifndef QT_NO_TOOLTIP
        comboFlowPortB->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        comboFlowPortB->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        comboFlowPortB->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        comboFlowPortB->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        comboFlowPortB->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        comboFlowPortB->setCurrentText(QString::fromUtf8("Clone A"));
        //comboFlowPortB->setPlaceholderText(QString::fromUtf8(""));
        comboRTO = new QComboBox(frameP);
        comboRTO->addItem(QString());
        comboRTO->addItem(QString());
        comboRTO->addItem(QString());
        comboRTO->addItem(QString());
        comboRTO->addItem(QString());
        comboRTO->addItem(QString());
        comboRTO->setObjectName(QString::fromUtf8("comboRTO"));
        comboRTO->setEnabled(true);
        comboRTO->setGeometry(QRect(540, 30, 61, 23));
        comboRTO->setFont(font4);
        comboRTO->setFocusPolicy(Qt::ClickFocus);
        comboRTO->setContextMenuPolicy(Qt::NoContextMenu);
#ifndef QT_NO_TOOLTIP
        comboRTO->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        comboRTO->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        comboRTO->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        comboRTO->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        comboRTO->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        comboRTO->setCurrentText(QString::fromUtf8("10"));
        //comboRTO->setPlaceholderText(QString::fromUtf8(""));
        pushPortA = new QPushButton(frameP);
        pushPortA->setObjectName(QString::fromUtf8("pushPortA"));
        pushPortA->setEnabled(false);
        pushPortA->setGeometry(QRect(0, 15, 26, 23));
        pushPortA->setFont(font3);
        pushPortA->setFocusPolicy(Qt::ClickFocus);
        pushPortA->setToolTipDuration(2000);
#ifndef QT_NO_STATUSTIP
        pushPortA->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pushPortA->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        pushPortA->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushPortA->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        pushPortA->setText(QString::fromUtf8("A"));
#ifndef QT_NO_SHORTCUT
        pushPortA->setShortcut(QString::fromUtf8(""));
#endif // QT_NO_SHORTCUT
        pushPortA->setCheckable(true);
        labelSelectPort = new QLabel(frameP);
        labelSelectPort->setObjectName(QString::fromUtf8("labelSelectPort"));
        labelSelectPort->setGeometry(QRect(0, 0, 261, 16));
        labelSelectPort->setFont(font5);
#ifndef QT_NO_TOOLTIP
        labelSelectPort->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        labelSelectPort->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        labelSelectPort->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        labelSelectPort->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        labelSelectPort->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        comboSelectPortA = new QComboBox(frameP);
        comboSelectPortA->addItem(QString());
        comboSelectPortA->setObjectName(QString::fromUtf8("comboSelectPortA"));
        comboSelectPortA->setGeometry(QRect(25, 15, 236, 23));
        comboSelectPortA->setFont(font3);
        comboSelectPortA->setFocusPolicy(Qt::ClickFocus);
        comboSelectPortA->setContextMenuPolicy(Qt::CustomContextMenu);
#ifndef QT_NO_TOOLTIP
        comboSelectPortA->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        comboSelectPortA->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        comboSelectPortA->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        comboSelectPortA->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        comboSelectPortA->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        comboSelectPortA->setEditable(false);
        comboSelectPortA->setCurrentText(QString::fromUtf8("CLOSE"));
        //comboSelectPortA->setPlaceholderText(QString::fromUtf8(""));
        comboSpeedPortB = new QComboBox(frameP);
        comboSpeedPortB->addItem(QString());
        comboSpeedPortB->addItem(QString());
        comboSpeedPortB->addItem(QString());
        comboSpeedPortB->addItem(QString());
        comboSpeedPortB->addItem(QString());
        comboSpeedPortB->addItem(QString());
        comboSpeedPortB->addItem(QString());
        comboSpeedPortB->addItem(QString());
        comboSpeedPortB->addItem(QString());
        comboSpeedPortB->setObjectName(QString::fromUtf8("comboSpeedPortB"));
        comboSpeedPortB->setGeometry(QRect(270, 45, 81, 23));
        comboSpeedPortB->setFont(font4);
        comboSpeedPortB->setFocusPolicy(Qt::ClickFocus);
        comboSpeedPortB->setContextMenuPolicy(Qt::NoContextMenu);
#ifndef QT_NO_TOOLTIP
        comboSpeedPortB->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        comboSpeedPortB->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        comboSpeedPortB->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        comboSpeedPortB->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        comboSpeedPortB->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        comboSpeedPortB->setEditable(false);
        comboSpeedPortB->setCurrentText(QString::fromUtf8("Clone A"));
        //comboSpeedPortB->setPlaceholderText(QString::fromUtf8(""));
        labelFlowPort = new QLabel(frameP);
        labelFlowPort->setObjectName(QString::fromUtf8("labelFlowPort"));
        labelFlowPort->setEnabled(true);
        labelFlowPort->setGeometry(QRect(450, 0, 81, 16));
        labelFlowPort->setFont(font5);
#ifndef QT_NO_TOOLTIP
        labelFlowPort->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        labelFlowPort->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        labelFlowPort->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        labelFlowPort->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        labelFlowPort->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        comboModePortB = new QComboBox(frameP);
        comboModePortB->addItem(QString());
        comboModePortB->addItem(QString());
        comboModePortB->addItem(QString());
        comboModePortB->addItem(QString());
        comboModePortB->addItem(QString());
        comboModePortB->addItem(QString());
        comboModePortB->addItem(QString());
        comboModePortB->setObjectName(QString::fromUtf8("comboModePortB"));
        comboModePortB->setGeometry(QRect(360, 45, 81, 23));
        comboModePortB->setFont(font4);
        comboModePortB->setFocusPolicy(Qt::ClickFocus);
        comboModePortB->setContextMenuPolicy(Qt::NoContextMenu);
#ifndef QT_NO_TOOLTIP
        comboModePortB->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        comboModePortB->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        comboModePortB->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        comboModePortB->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        comboModePortB->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        comboModePortB->setCurrentText(QString::fromUtf8("Clone A"));
        //comboModePortB->setPlaceholderText(QString::fromUtf8(""));
        comboSpeedPortA = new QComboBox(frameP);
        comboSpeedPortA->addItem(QString());
        comboSpeedPortA->addItem(QString());
        comboSpeedPortA->addItem(QString());
        comboSpeedPortA->addItem(QString());
        comboSpeedPortA->addItem(QString());
        comboSpeedPortA->addItem(QString());
        comboSpeedPortA->addItem(QString());
        comboSpeedPortA->addItem(QString());
        comboSpeedPortA->setObjectName(QString::fromUtf8("comboSpeedPortA"));
        comboSpeedPortA->setGeometry(QRect(270, 15, 81, 23));
        comboSpeedPortA->setFont(font4);
        comboSpeedPortA->setFocusPolicy(Qt::ClickFocus);
        comboSpeedPortA->setContextMenuPolicy(Qt::NoContextMenu);
#ifndef QT_NO_TOOLTIP
        comboSpeedPortA->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        comboSpeedPortA->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        comboSpeedPortA->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        comboSpeedPortA->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        comboSpeedPortA->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        comboSpeedPortA->setEditable(false);
        comboSpeedPortA->setCurrentText(QString::fromUtf8("1200"));
        //comboSpeedPortA->setPlaceholderText(QString::fromUtf8(""));
        labelRTO = new QLabel(frameP);
        labelRTO->setObjectName(QString::fromUtf8("labelRTO"));
        labelRTO->setEnabled(true);
        labelRTO->setGeometry(QRect(540, 15, 61, 16));
        labelRTO->setFont(font5);
#ifndef QT_NO_TOOLTIP
        labelRTO->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        labelRTO->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        labelRTO->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        labelRTO->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        labelRTO->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        comboFlowPortA = new QComboBox(frameP);
        comboFlowPortA->addItem(QString());
        comboFlowPortA->addItem(QString());
        comboFlowPortA->addItem(QString());
        comboFlowPortA->setObjectName(QString::fromUtf8("comboFlowPortA"));
        comboFlowPortA->setEnabled(true);
        comboFlowPortA->setGeometry(QRect(450, 15, 81, 23));
        comboFlowPortA->setFont(font4);
        comboFlowPortA->setFocusPolicy(Qt::ClickFocus);
        comboFlowPortA->setContextMenuPolicy(Qt::NoContextMenu);
#ifndef QT_NO_TOOLTIP
        comboFlowPortA->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        comboFlowPortA->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        comboFlowPortA->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        comboFlowPortA->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        comboFlowPortA->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        comboFlowPortA->setCurrentText(QString::fromUtf8("NONE"));
        //comboFlowPortA->setPlaceholderText(QString::fromUtf8(""));
        pushPortB = new QPushButton(frameP);
        pushPortB->setObjectName(QString::fromUtf8("pushPortB"));
        pushPortB->setEnabled(false);
        pushPortB->setGeometry(QRect(0, 45, 26, 23));
        pushPortB->setFont(font3);
        pushPortB->setFocusPolicy(Qt::ClickFocus);
        pushPortB->setToolTipDuration(2000);
#ifndef QT_NO_STATUSTIP
        pushPortB->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pushPortB->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        pushPortB->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushPortB->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        pushPortB->setText(QString::fromUtf8("B"));
#ifndef QT_NO_SHORTCUT
        pushPortB->setShortcut(QString::fromUtf8(""));
#endif // QT_NO_SHORTCUT
        pushPortB->setCheckable(true);

        gridLayout_3->addWidget(frameP, 0, 0, 1, 1);


        gridLayout->addWidget(groupPort, 0, 0, 1, 1);

        groupProfile = new QGroupBox(centralwidget);
        groupProfile->setObjectName(QString::fromUtf8("groupProfile"));
        sizePolicy.setHeightForWidth(groupProfile->sizePolicy().hasHeightForWidth());
        groupProfile->setSizePolicy(sizePolicy);
        groupProfile->setMinimumSize(QSize(271, 106));
        groupProfile->setFont(font1);
#ifndef QT_NO_TOOLTIP
        groupProfile->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        groupProfile->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        groupProfile->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        groupProfile->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        groupProfile->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        groupProfile->setFlat(false);
        comboProfile = new QComboBox(groupProfile);
        comboProfile->setObjectName(QString::fromUtf8("comboProfile"));
        comboProfile->setEnabled(true);
        comboProfile->setGeometry(QRect(10, 40, 251, 23));
        comboProfile->setFont(font4);
        comboProfile->setMouseTracking(false);
        comboProfile->setFocusPolicy(Qt::ClickFocus);
        comboProfile->setContextMenuPolicy(Qt::CustomContextMenu);
#ifndef QT_NO_TOOLTIP
        comboProfile->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        comboProfile->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        comboProfile->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        comboProfile->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        comboProfile->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        comboProfile->setEditable(false);
        comboProfile->setCurrentText(QString::fromUtf8(""));
        //comboProfile->setPlaceholderText(QString::fromUtf8(""));
        pushSaveProfile = new QPushButton(groupProfile);
        pushSaveProfile->setObjectName(QString::fromUtf8("pushSaveProfile"));
        pushSaveProfile->setEnabled(true);
        pushSaveProfile->setGeometry(QRect(10, 70, 66, 23));
        pushSaveProfile->setFont(font3);
        pushSaveProfile->setFocusPolicy(Qt::ClickFocus);
#ifndef QT_NO_TOOLTIP
        pushSaveProfile->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushSaveProfile->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pushSaveProfile->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        pushSaveProfile->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushSaveProfile->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        pushSaveProfile->setText(QString::fromUtf8("Save"));
#ifndef QT_NO_SHORTCUT
        pushSaveProfile->setShortcut(QString::fromUtf8(""));
#endif // QT_NO_SHORTCUT
        labelProfile = new QLabel(groupProfile);
        labelProfile->setObjectName(QString::fromUtf8("labelProfile"));
        labelProfile->setGeometry(QRect(10, 25, 206, 16));
        labelProfile->setFont(font5);
#ifndef QT_NO_TOOLTIP
        labelProfile->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        labelProfile->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        labelProfile->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        labelProfile->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        labelProfile->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        labelProfile->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        pushNewProfile = new QPushButton(groupProfile);
        pushNewProfile->setObjectName(QString::fromUtf8("pushNewProfile"));
        pushNewProfile->setEnabled(true);
        pushNewProfile->setGeometry(QRect(85, 70, 41, 23));
        pushNewProfile->setFont(font3);
        pushNewProfile->setFocusPolicy(Qt::ClickFocus);
#ifndef QT_NO_TOOLTIP
        pushNewProfile->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushNewProfile->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pushNewProfile->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        pushNewProfile->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushNewProfile->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        pushNewProfile->setText(QString::fromUtf8("New"));
#ifndef QT_NO_SHORTCUT
        pushNewProfile->setShortcut(QString::fromUtf8(""));
#endif // QT_NO_SHORTCUT
        pushRenProfile = new QPushButton(groupProfile);
        pushRenProfile->setObjectName(QString::fromUtf8("pushRenProfile"));
        pushRenProfile->setEnabled(true);
        pushRenProfile->setGeometry(QRect(130, 70, 41, 23));
        pushRenProfile->setFont(font3);
        pushRenProfile->setFocusPolicy(Qt::ClickFocus);
#ifndef QT_NO_TOOLTIP
        pushRenProfile->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushRenProfile->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pushRenProfile->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        pushRenProfile->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushRenProfile->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        pushRenProfile->setText(QString::fromUtf8("Ren"));
#ifndef QT_NO_SHORTCUT
        pushRenProfile->setShortcut(QString::fromUtf8(""));
#endif // QT_NO_SHORTCUT
        pushDelProfile = new QPushButton(groupProfile);
        pushDelProfile->setObjectName(QString::fromUtf8("pushDelProfile"));
        pushDelProfile->setEnabled(true);
        pushDelProfile->setGeometry(QRect(175, 70, 41, 23));
        pushDelProfile->setFont(font3);
        pushDelProfile->setFocusPolicy(Qt::ClickFocus);
#ifndef QT_NO_TOOLTIP
        pushDelProfile->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushDelProfile->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pushDelProfile->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        pushDelProfile->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushDelProfile->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        pushDelProfile->setText(QString::fromUtf8("Del"));
#ifndef QT_NO_SHORTCUT
        pushDelProfile->setShortcut(QString::fromUtf8(""));
#endif // QT_NO_SHORTCUT
        pushSkipProfile = new QPushButton(groupProfile);
        pushSkipProfile->setObjectName(QString::fromUtf8("pushSkipProfile"));
        pushSkipProfile->setEnabled(true);
        pushSkipProfile->setGeometry(QRect(220, 70, 41, 23));
        pushSkipProfile->setFont(font3);
        pushSkipProfile->setFocusPolicy(Qt::ClickFocus);
#ifndef QT_NO_TOOLTIP
        pushSkipProfile->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushSkipProfile->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pushSkipProfile->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        pushSkipProfile->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushSkipProfile->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        pushSkipProfile->setText(QString::fromUtf8("Skip"));
#ifndef QT_NO_SHORTCUT
        pushSkipProfile->setShortcut(QString::fromUtf8(""));
#endif // QT_NO_SHORTCUT
        labelProfile->raise();
        comboProfile->raise();
        pushSaveProfile->raise();
        pushNewProfile->raise();
        pushRenProfile->raise();
        pushDelProfile->raise();
        pushSkipProfile->raise();

        gridLayout->addWidget(groupProfile, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        groupTxData->raise();
        groupPort->raise();
        frameACR->raise();
        groupProfile->raise();
        groupTxTemplates->raise();
        groupRxData->raise();
        groupTxTimer->raise();
        QWidget::setTabOrder(graphicsDataRx, lineDataTx);

        retranslateUi(MainWindow);

        pushAbout->setDefault(false);
        pushConfig->setDefault(false);
        pushReport->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        groupTxTemplates->setTitle(QApplication::translate("MainWindow", "TRANSMIT TEMPLATES", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableData->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Format", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableData->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Data", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableData->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "End", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableData->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "F1", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableData->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "F2", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableData->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "F3", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableData->verticalHeaderItem(3);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "F4", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableData->verticalHeaderItem(4);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "F5", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableData->verticalHeaderItem(5);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "F6", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableData->verticalHeaderItem(6);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "F7", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableData->verticalHeaderItem(7);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "F8", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableData->verticalHeaderItem(8);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "F9", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableData->verticalHeaderItem(9);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "F10", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableData->verticalHeaderItem(10);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "F11", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableData->verticalHeaderItem(11);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "F12", nullptr));

        const bool __sortingEnabled = tableData->isSortingEnabled();
        tableData->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem15 = tableData->item(0, 0);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "CHAR", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableData->item(0, 1);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "Data 1", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableData->item(0, 2);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "NONE", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableData->item(1, 0);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "CHAR", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableData->item(1, 1);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "Data 2", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableData->item(1, 2);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "NONE", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableData->item(2, 0);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "CHAR", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableData->item(2, 1);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWindow", "Data 3", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableData->item(2, 2);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWindow", "NONE", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableData->item(3, 0);
        ___qtablewidgetitem24->setText(QApplication::translate("MainWindow", "CHAR", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tableData->item(3, 1);
        ___qtablewidgetitem25->setText(QApplication::translate("MainWindow", "Data 4", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tableData->item(3, 2);
        ___qtablewidgetitem26->setText(QApplication::translate("MainWindow", "NONE", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = tableData->item(4, 0);
        ___qtablewidgetitem27->setText(QApplication::translate("MainWindow", "CHAR", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = tableData->item(4, 1);
        ___qtablewidgetitem28->setText(QApplication::translate("MainWindow", "Data 5", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = tableData->item(4, 2);
        ___qtablewidgetitem29->setText(QApplication::translate("MainWindow", "NONE", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = tableData->item(5, 0);
        ___qtablewidgetitem30->setText(QApplication::translate("MainWindow", "CHAR", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = tableData->item(5, 1);
        ___qtablewidgetitem31->setText(QApplication::translate("MainWindow", "Data 6", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = tableData->item(5, 2);
        ___qtablewidgetitem32->setText(QApplication::translate("MainWindow", "NONE", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = tableData->item(6, 0);
        ___qtablewidgetitem33->setText(QApplication::translate("MainWindow", "CHAR", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = tableData->item(6, 1);
        ___qtablewidgetitem34->setText(QApplication::translate("MainWindow", "Data 7", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = tableData->item(6, 2);
        ___qtablewidgetitem35->setText(QApplication::translate("MainWindow", "NONE", nullptr));
        QTableWidgetItem *___qtablewidgetitem36 = tableData->item(7, 0);
        ___qtablewidgetitem36->setText(QApplication::translate("MainWindow", "CHAR", nullptr));
        QTableWidgetItem *___qtablewidgetitem37 = tableData->item(7, 1);
        ___qtablewidgetitem37->setText(QApplication::translate("MainWindow", "Data 8", nullptr));
        QTableWidgetItem *___qtablewidgetitem38 = tableData->item(7, 2);
        ___qtablewidgetitem38->setText(QApplication::translate("MainWindow", "NONE", nullptr));
        QTableWidgetItem *___qtablewidgetitem39 = tableData->item(8, 0);
        ___qtablewidgetitem39->setText(QApplication::translate("MainWindow", "CHAR", nullptr));
        QTableWidgetItem *___qtablewidgetitem40 = tableData->item(8, 1);
        ___qtablewidgetitem40->setText(QApplication::translate("MainWindow", "Data 9", nullptr));
        QTableWidgetItem *___qtablewidgetitem41 = tableData->item(8, 2);
        ___qtablewidgetitem41->setText(QApplication::translate("MainWindow", "NONE", nullptr));
        QTableWidgetItem *___qtablewidgetitem42 = tableData->item(9, 0);
        ___qtablewidgetitem42->setText(QApplication::translate("MainWindow", "CHAR", nullptr));
        QTableWidgetItem *___qtablewidgetitem43 = tableData->item(9, 1);
        ___qtablewidgetitem43->setText(QApplication::translate("MainWindow", "Data 10", nullptr));
        QTableWidgetItem *___qtablewidgetitem44 = tableData->item(9, 2);
        ___qtablewidgetitem44->setText(QApplication::translate("MainWindow", "NONE", nullptr));
        QTableWidgetItem *___qtablewidgetitem45 = tableData->item(10, 0);
        ___qtablewidgetitem45->setText(QApplication::translate("MainWindow", "CHAR", nullptr));
        QTableWidgetItem *___qtablewidgetitem46 = tableData->item(10, 1);
        ___qtablewidgetitem46->setText(QApplication::translate("MainWindow", "Data 11", nullptr));
        QTableWidgetItem *___qtablewidgetitem47 = tableData->item(10, 2);
        ___qtablewidgetitem47->setText(QApplication::translate("MainWindow", "NONE", nullptr));
        QTableWidgetItem *___qtablewidgetitem48 = tableData->item(11, 0);
        ___qtablewidgetitem48->setText(QApplication::translate("MainWindow", "CHAR", nullptr));
        QTableWidgetItem *___qtablewidgetitem49 = tableData->item(11, 1);
        ___qtablewidgetitem49->setText(QApplication::translate("MainWindow", "Data 12", nullptr));
        QTableWidgetItem *___qtablewidgetitem50 = tableData->item(11, 2);
        ___qtablewidgetitem50->setText(QApplication::translate("MainWindow", "NONE", nullptr));
        tableData->setSortingEnabled(__sortingEnabled);

        labelTable->setText(QApplication::translate("MainWindow", "Table:", nullptr));
        labelFile1->setText(QApplication::translate("MainWindow", "File 1:", nullptr));
        labelPattern->setText(QApplication::translate("MainWindow", "Pattern:", nullptr));
        labelPatternInfo->setText(QString());
        labelFileInfo1->setText(QString());
        labelTableInfo->setText(QString());
        labelFile2->setText(QApplication::translate("MainWindow", "File 2:", nullptr));
        labelFileInfo2->setText(QString());
        groupTxData->setTitle(QApplication::translate("MainWindow", "TRANSMIT DATA", nullptr));
        labelTypeTx->setText(QApplication::translate("MainWindow", "Type:", nullptr));
        comboSendPort->setItemText(0, QApplication::translate("MainWindow", "AB", nullptr));
        comboSendPort->setItemText(1, QApplication::translate("MainWindow", "A", nullptr));
        comboSendPort->setItemText(2, QApplication::translate("MainWindow", "B", nullptr));

        labelEndTx->setText(QApplication::translate("MainWindow", "End:", nullptr));
        comboTypeTx->setItemText(0, QApplication::translate("MainWindow", "ASCII", nullptr));
        comboTypeTx->setItemText(1, QApplication::translate("MainWindow", "CP1251", nullptr));
        comboTypeTx->setItemText(2, QApplication::translate("MainWindow", "CP866", nullptr));
        comboTypeTx->setItemText(3, QApplication::translate("MainWindow", "KOI8-R", nullptr));
        comboTypeTx->setItemText(4, QApplication::translate("MainWindow", "UTF-8", nullptr));

        labelSendPort->setText(QApplication::translate("MainWindow", "Port:", nullptr));
        labelTotalTxA->setText(QApplication::translate("MainWindow", "Tx A:", nullptr));
        comboEndTx->setItemText(0, QApplication::translate("MainWindow", "NONE", nullptr));
        comboEndTx->setItemText(1, QApplication::translate("MainWindow", "CR", nullptr));
        comboEndTx->setItemText(2, QApplication::translate("MainWindow", "LF", nullptr));
        comboEndTx->setItemText(3, QApplication::translate("MainWindow", "CR+LF", nullptr));
        comboEndTx->setItemText(4, QApplication::translate("MainWindow", "SUB", nullptr));
        comboEndTx->setItemText(5, QApplication::translate("MainWindow", "ESC", nullptr));
        comboEndTx->setItemText(6, QApplication::translate("MainWindow", "TAB", nullptr));
        comboEndTx->setItemText(7, QApplication::translate("MainWindow", "NUL", nullptr));

        comboFormatTx->setItemText(0, QApplication::translate("MainWindow", "CHAR", nullptr));
        comboFormatTx->setItemText(1, QApplication::translate("MainWindow", "DEC", nullptr));
        comboFormatTx->setItemText(2, QApplication::translate("MainWindow", "HEX", nullptr));
        comboFormatTx->setItemText(3, QApplication::translate("MainWindow", "BIN", nullptr));
        comboFormatTx->setItemText(4, QApplication::translate("MainWindow", "MIXED", nullptr));

        labelFormatTx->setText(QApplication::translate("MainWindow", "Format:", nullptr));
        labelTotalTxB->setText(QApplication::translate("MainWindow", "Tx B:", nullptr));
        groupRxData->setTitle(QApplication::translate("MainWindow", "RECEIVE DATA", nullptr));
        comboTypeRx->setItemText(0, QApplication::translate("MainWindow", "Unsigned", nullptr));
        comboTypeRx->setItemText(1, QApplication::translate("MainWindow", "Signed", nullptr));

        labelTotalRxA->setText(QApplication::translate("MainWindow", "Rx A:", nullptr));
        comboFrameRx->setItemText(0, QApplication::translate("MainWindow", "AUTO", nullptr));
        comboFrameRx->setItemText(1, QApplication::translate("MainWindow", "16", nullptr));
        comboFrameRx->setItemText(2, QApplication::translate("MainWindow", "32", nullptr));
        comboFrameRx->setItemText(3, QApplication::translate("MainWindow", "64", nullptr));
        comboFrameRx->setItemText(4, QApplication::translate("MainWindow", "128", nullptr));
        comboFrameRx->setItemText(5, QApplication::translate("MainWindow", "256", nullptr));
        comboFrameRx->setItemText(6, QApplication::translate("MainWindow", "512", nullptr));
        comboFrameRx->setItemText(7, QApplication::translate("MainWindow", "FIT", nullptr));

        comboFormatRx->setItemText(0, QApplication::translate("MainWindow", "CHAR", nullptr));
        comboFormatRx->setItemText(1, QApplication::translate("MainWindow", "DEC", nullptr));
        comboFormatRx->setItemText(2, QApplication::translate("MainWindow", "HEX", nullptr));
        comboFormatRx->setItemText(3, QApplication::translate("MainWindow", "BIN", nullptr));
        comboFormatRx->setItemText(4, QApplication::translate("MainWindow", "SCOPE", nullptr));
        comboFormatRx->setItemText(5, QApplication::translate("MainWindow", "CHART", nullptr));

        labelTotalRxB->setText(QApplication::translate("MainWindow", "Rx B:", nullptr));
        labelTypeRx->setText(QApplication::translate("MainWindow", "Type:", nullptr));
        labelFormatRx->setText(QApplication::translate("MainWindow", "Format:", nullptr));
        labelFrameRx->setText(QApplication::translate("MainWindow", "Frame:", nullptr));
        groupTxTimer->setTitle(QApplication::translate("MainWindow", "TRANSMIT TIMER", nullptr));
        labelTmrSource->setText(QApplication::translate("MainWindow", "Source:", nullptr));
        comboTmrSourceA->setItemText(0, QApplication::translate("MainWindow", "Line", nullptr));
        comboTmrSourceA->setItemText(1, QApplication::translate("MainWindow", "Pattern", nullptr));
        comboTmrSourceA->setItemText(2, QApplication::translate("MainWindow", "File 1", nullptr));
        comboTmrSourceA->setItemText(3, QApplication::translate("MainWindow", "File 2", nullptr));
        comboTmrSourceA->setItemText(4, QApplication::translate("MainWindow", "Table F1", nullptr));
        comboTmrSourceA->setItemText(5, QApplication::translate("MainWindow", "Table F2", nullptr));
        comboTmrSourceA->setItemText(6, QApplication::translate("MainWindow", "Table F3", nullptr));
        comboTmrSourceA->setItemText(7, QApplication::translate("MainWindow", "Table F4", nullptr));
        comboTmrSourceA->setItemText(8, QApplication::translate("MainWindow", "Table F5", nullptr));
        comboTmrSourceA->setItemText(9, QApplication::translate("MainWindow", "Table F6", nullptr));
        comboTmrSourceA->setItemText(10, QApplication::translate("MainWindow", "Table F7", nullptr));
        comboTmrSourceA->setItemText(11, QApplication::translate("MainWindow", "Table F8", nullptr));
        comboTmrSourceA->setItemText(12, QApplication::translate("MainWindow", "Table F9", nullptr));
        comboTmrSourceA->setItemText(13, QApplication::translate("MainWindow", "Table F10", nullptr));
        comboTmrSourceA->setItemText(14, QApplication::translate("MainWindow", "Table F11", nullptr));
        comboTmrSourceA->setItemText(15, QApplication::translate("MainWindow", "Table F12", nullptr));
        comboTmrSourceA->setItemText(16, QApplication::translate("MainWindow", "Counter CHAR 0-9", nullptr));
        comboTmrSourceA->setItemText(17, QApplication::translate("MainWindow", "Counter CHAR A-Z", nullptr));
        comboTmrSourceA->setItemText(18, QApplication::translate("MainWindow", "Counter BIN 0-15", nullptr));
        comboTmrSourceA->setItemText(19, QApplication::translate("MainWindow", "Counter BIN 0-255", nullptr));

        comboTmrTime->setItemText(0, QApplication::translate("MainWindow", "20", nullptr));
        comboTmrTime->setItemText(1, QApplication::translate("MainWindow", "50", nullptr));
        comboTmrTime->setItemText(2, QApplication::translate("MainWindow", "100", nullptr));
        comboTmrTime->setItemText(3, QApplication::translate("MainWindow", "200", nullptr));
        comboTmrTime->setItemText(4, QApplication::translate("MainWindow", "500", nullptr));
        comboTmrTime->setItemText(5, QApplication::translate("MainWindow", "1000", nullptr));
        comboTmrTime->setItemText(6, QApplication::translate("MainWindow", "2000", nullptr));
        comboTmrTime->setItemText(7, QApplication::translate("MainWindow", "5000", nullptr));
        comboTmrTime->setItemText(8, QApplication::translate("MainWindow", "10000", nullptr));
        comboTmrTime->setItemText(9, QApplication::translate("MainWindow", "30000", nullptr));
        comboTmrTime->setItemText(10, QApplication::translate("MainWindow", "60000", nullptr));

        labelTmrTime->setText(QApplication::translate("MainWindow", "Time (ms):", nullptr));
        labelTmrCount->setText(QString());
        comboTmrSourceB->setItemText(0, QApplication::translate("MainWindow", "Clone A", nullptr));
        comboTmrSourceB->setItemText(1, QApplication::translate("MainWindow", "Line", nullptr));
        comboTmrSourceB->setItemText(2, QApplication::translate("MainWindow", "Pattern", nullptr));
        comboTmrSourceB->setItemText(3, QApplication::translate("MainWindow", "File 1", nullptr));
        comboTmrSourceB->setItemText(4, QApplication::translate("MainWindow", "File 2", nullptr));
        comboTmrSourceB->setItemText(5, QApplication::translate("MainWindow", "Table F1", nullptr));
        comboTmrSourceB->setItemText(6, QApplication::translate("MainWindow", "Table F2", nullptr));
        comboTmrSourceB->setItemText(7, QApplication::translate("MainWindow", "Table F3", nullptr));
        comboTmrSourceB->setItemText(8, QApplication::translate("MainWindow", "Table F4", nullptr));
        comboTmrSourceB->setItemText(9, QApplication::translate("MainWindow", "Table F5", nullptr));
        comboTmrSourceB->setItemText(10, QApplication::translate("MainWindow", "Table F6", nullptr));
        comboTmrSourceB->setItemText(11, QApplication::translate("MainWindow", "Table F7", nullptr));
        comboTmrSourceB->setItemText(12, QApplication::translate("MainWindow", "Table F8", nullptr));
        comboTmrSourceB->setItemText(13, QApplication::translate("MainWindow", "Table F9", nullptr));
        comboTmrSourceB->setItemText(14, QApplication::translate("MainWindow", "Table F10", nullptr));
        comboTmrSourceB->setItemText(15, QApplication::translate("MainWindow", "Table F11", nullptr));
        comboTmrSourceB->setItemText(16, QApplication::translate("MainWindow", "Table F12", nullptr));
        comboTmrSourceB->setItemText(17, QApplication::translate("MainWindow", "Counter CHAR 0-9", nullptr));
        comboTmrSourceB->setItemText(18, QApplication::translate("MainWindow", "Counter CHAR A-Z", nullptr));
        comboTmrSourceB->setItemText(19, QApplication::translate("MainWindow", "Counter BIN 0-15", nullptr));
        comboTmrSourceB->setItemText(20, QApplication::translate("MainWindow", "Counter BIN 0-255", nullptr));

        labelTmrPortA->setText(QApplication::translate("MainWindow", "A:", nullptr));
        labelTmrPortB->setText(QApplication::translate("MainWindow", "B:", nullptr));
        groupPort->setTitle(QApplication::translate("MainWindow", "SERIAL PORT", nullptr));
        comboModePortA->setItemText(0, QApplication::translate("MainWindow", "8-N-1", nullptr));
        comboModePortA->setItemText(1, QApplication::translate("MainWindow", "8-N-2", nullptr));
        comboModePortA->setItemText(2, QApplication::translate("MainWindow", "8-E-1", nullptr));
        comboModePortA->setItemText(3, QApplication::translate("MainWindow", "8-E-2", nullptr));
        comboModePortA->setItemText(4, QApplication::translate("MainWindow", "8-O-1", nullptr));
        comboModePortA->setItemText(5, QApplication::translate("MainWindow", "8-O-2", nullptr));

        labelModePort->setText(QApplication::translate("MainWindow", "Mode:", nullptr));
        labelSpeedPort->setText(QApplication::translate("MainWindow", "Speed:", nullptr));
        comboSelectPortB->setItemText(0, QApplication::translate("MainWindow", "CLOSE", nullptr));

        comboFlowPortB->setItemText(0, QApplication::translate("MainWindow", "Clone A", nullptr));
        comboFlowPortB->setItemText(1, QApplication::translate("MainWindow", "NONE", nullptr));
        comboFlowPortB->setItemText(2, QApplication::translate("MainWindow", "RTS/CTS", nullptr));
        comboFlowPortB->setItemText(3, QApplication::translate("MainWindow", "XON/XOFF", nullptr));

        comboRTO->setItemText(0, QApplication::translate("MainWindow", "10", nullptr));
        comboRTO->setItemText(1, QApplication::translate("MainWindow", "20", nullptr));
        comboRTO->setItemText(2, QApplication::translate("MainWindow", "50", nullptr));
        comboRTO->setItemText(3, QApplication::translate("MainWindow", "100", nullptr));
        comboRTO->setItemText(4, QApplication::translate("MainWindow", "200", nullptr));
        comboRTO->setItemText(5, QApplication::translate("MainWindow", "500", nullptr));

        labelSelectPort->setText(QApplication::translate("MainWindow", "Port:", nullptr));
        comboSelectPortA->setItemText(0, QApplication::translate("MainWindow", "CLOSE", nullptr));

        comboSpeedPortB->setItemText(0, QApplication::translate("MainWindow", "Clone A", nullptr));
        comboSpeedPortB->setItemText(1, QApplication::translate("MainWindow", "1200", nullptr));
        comboSpeedPortB->setItemText(2, QApplication::translate("MainWindow", "2400", nullptr));
        comboSpeedPortB->setItemText(3, QApplication::translate("MainWindow", "4800", nullptr));
        comboSpeedPortB->setItemText(4, QApplication::translate("MainWindow", "9600", nullptr));
        comboSpeedPortB->setItemText(5, QApplication::translate("MainWindow", "19200", nullptr));
        comboSpeedPortB->setItemText(6, QApplication::translate("MainWindow", "38400", nullptr));
        comboSpeedPortB->setItemText(7, QApplication::translate("MainWindow", "57600", nullptr));
        comboSpeedPortB->setItemText(8, QApplication::translate("MainWindow", "115200", nullptr));

        labelFlowPort->setText(QApplication::translate("MainWindow", "Flow:", nullptr));
        comboModePortB->setItemText(0, QApplication::translate("MainWindow", "Clone A", nullptr));
        comboModePortB->setItemText(1, QApplication::translate("MainWindow", "8-N-1", nullptr));
        comboModePortB->setItemText(2, QApplication::translate("MainWindow", "8-N-2", nullptr));
        comboModePortB->setItemText(3, QApplication::translate("MainWindow", "8-E-1", nullptr));
        comboModePortB->setItemText(4, QApplication::translate("MainWindow", "8-E-2", nullptr));
        comboModePortB->setItemText(5, QApplication::translate("MainWindow", "8-O-1", nullptr));
        comboModePortB->setItemText(6, QApplication::translate("MainWindow", "8-O-2", nullptr));

        comboSpeedPortA->setItemText(0, QApplication::translate("MainWindow", "1200", nullptr));
        comboSpeedPortA->setItemText(1, QApplication::translate("MainWindow", "2400", nullptr));
        comboSpeedPortA->setItemText(2, QApplication::translate("MainWindow", "4800", nullptr));
        comboSpeedPortA->setItemText(3, QApplication::translate("MainWindow", "9600", nullptr));
        comboSpeedPortA->setItemText(4, QApplication::translate("MainWindow", "19200", nullptr));
        comboSpeedPortA->setItemText(5, QApplication::translate("MainWindow", "38400", nullptr));
        comboSpeedPortA->setItemText(6, QApplication::translate("MainWindow", "57600", nullptr));
        comboSpeedPortA->setItemText(7, QApplication::translate("MainWindow", "115200", nullptr));

        labelRTO->setText(QApplication::translate("MainWindow", "RTO (ms):", nullptr));
        comboFlowPortA->setItemText(0, QApplication::translate("MainWindow", "NONE", nullptr));
        comboFlowPortA->setItemText(1, QApplication::translate("MainWindow", "RTS/CTS", nullptr));
        comboFlowPortA->setItemText(2, QApplication::translate("MainWindow", "XON/XOFF", nullptr));

        groupProfile->setTitle(QApplication::translate("MainWindow", "PROFILE", nullptr));
        labelProfile->setText(QApplication::translate("MainWindow", "Select:", nullptr));
        Q_UNUSED(MainWindow);
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
