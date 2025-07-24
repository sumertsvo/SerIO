/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
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
#if QT_CONFIG(tooltip)
        MainWindow->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        MainWindow->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        MainWindow->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        MainWindow->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        MainWindow->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
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
#if QT_CONFIG(tooltip)
        groupTxTemplates->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        groupTxTemplates->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        groupTxTemplates->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        groupTxTemplates->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        groupTxTemplates->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
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
#if QT_CONFIG(tooltip)
        tableData->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        tableData->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        tableData->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        tableData->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        tableData->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
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
#if QT_CONFIG(tooltip)
        pushSelectFile1->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pushSelectFile1->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        pushSelectFile1->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        pushSelectFile1->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        pushSelectFile1->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        pushSelectFile1->setText(QString::fromUtf8("..."));
#if QT_CONFIG(shortcut)
        pushSelectFile1->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
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
#if QT_CONFIG(tooltip)
        pushSendFile1->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pushSendFile1->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        pushSendFile1->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        pushSendFile1->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        pushSendFile1->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        pushSendFile1->setText(QString::fromUtf8("Send"));
#if QT_CONFIG(shortcut)
        pushSendFile1->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
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
#if QT_CONFIG(tooltip)
        labelTable->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        labelTable->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        labelTable->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        labelTable->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        labelTable->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
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
#if QT_CONFIG(tooltip)
        lineFile1->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        lineFile1->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        lineFile1->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        lineFile1->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        lineFile1->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        lineFile1->setStyleSheet(QString::fromUtf8(""));
        lineFile1->setInputMask(QString::fromUtf8(""));
        lineFile1->setText(QString::fromUtf8(""));
        lineFile1->setPlaceholderText(QString::fromUtf8(""));
        lineFile1->setClearButtonEnabled(true);
        labelFile1 = new QLabel(groupTxTemplates);
        labelFile1->setObjectName(QString::fromUtf8("labelFile1"));
        labelFile1->setGeometry(QRect(10, 65, 66, 16));
        labelFile1->setFont(font5);
#if QT_CONFIG(tooltip)
        labelFile1->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        labelFile1->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        labelFile1->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        labelFile1->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        labelFile1->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        comboPattern = new QComboBox(groupTxTemplates);
        comboPattern->setObjectName(QString::fromUtf8("comboPattern"));
        comboPattern->setGeometry(QRect(10, 40, 281, 23));
        comboPattern->setFont(font4);
        comboPattern->setFocusPolicy(Qt::ClickFocus);
        comboPattern->setContextMenuPolicy(Qt::NoContextMenu);
#if QT_CONFIG(tooltip)
        comboPattern->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        comboPattern->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        comboPattern->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        comboPattern->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        comboPattern->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        comboPattern->setCurrentText(QString::fromUtf8(""));
        comboPattern->setPlaceholderText(QString::fromUtf8(""));
        labelPattern = new QLabel(groupTxTemplates);
        labelPattern->setObjectName(QString::fromUtf8("labelPattern"));
        labelPattern->setGeometry(QRect(10, 25, 66, 16));
        labelPattern->setFont(font5);
#if QT_CONFIG(tooltip)
        labelPattern->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        labelPattern->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        labelPattern->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        labelPattern->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        labelPattern->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        pushSendPattern = new QPushButton(groupTxTemplates);
        pushSendPattern->setObjectName(QString::fromUtf8("pushSendPattern"));
        pushSendPattern->setEnabled(false);
        pushSendPattern->setGeometry(QRect(290, 40, 61, 23));
        pushSendPattern->setFont(font4);
        pushSendPattern->setFocusPolicy(Qt::ClickFocus);
#if QT_CONFIG(tooltip)
        pushSendPattern->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pushSendPattern->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        pushSendPattern->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        pushSendPattern->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        pushSendPattern->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        pushSendPattern->setText(QString::fromUtf8("Send"));
#if QT_CONFIG(shortcut)
        pushSendPattern->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        labelPatternInfo = new QLabel(groupTxTemplates);
        labelPatternInfo->setObjectName(QString::fromUtf8("labelPatternInfo"));
        labelPatternInfo->setGeometry(QRect(85, 25, 206, 16));
        labelPatternInfo->setFont(font5);
#if QT_CONFIG(tooltip)
        labelPatternInfo->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        labelPatternInfo->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        labelPatternInfo->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        labelPatternInfo->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        labelPatternInfo->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        labelPatternInfo->setStyleSheet(QString::fromUtf8("color: rgb(100, 100, 100);"));
        labelFileInfo1 = new QLabel(groupTxTemplates);
        labelFileInfo1->setObjectName(QString::fromUtf8("labelFileInfo1"));
        labelFileInfo1->setGeometry(QRect(85, 65, 206, 16));
        labelFileInfo1->setFont(font5);
#if QT_CONFIG(tooltip)
        labelFileInfo1->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        labelFileInfo1->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        labelFileInfo1->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        labelFileInfo1->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        labelFileInfo1->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        labelFileInfo1->setStyleSheet(QString::fromUtf8("color: rgb(100, 100, 100);"));
        labelTableInfo = new QLabel(groupTxTemplates);
        labelTableInfo->setObjectName(QString::fromUtf8("labelTableInfo"));
        labelTableInfo->setGeometry(QRect(85, 145, 206, 16));
        labelTableInfo->setFont(font5);
#if QT_CONFIG(tooltip)
        labelTableInfo->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        labelTableInfo->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        labelTableInfo->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        labelTableInfo->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        labelTableInfo->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        labelTableInfo->setStyleSheet(QString::fromUtf8("color: rgb(100, 100, 100);"));
        labelFile2 = new QLabel(groupTxTemplates);
        labelFile2->setObjectName(QString::fromUtf8("labelFile2"));
        labelFile2->setGeometry(QRect(10, 105, 66, 16));
        labelFile2->setFont(font5);
#if QT_CONFIG(tooltip)
        labelFile2->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        labelFile2->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        labelFile2->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        labelFile2->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        labelFile2->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        labelFileInfo2 = new QLabel(groupTxTemplates);
        labelFileInfo2->setObjectName(QString::fromUtf8("labelFileInfo2"));
        labelFileInfo2->setGeometry(QRect(85, 105, 206, 16));
        labelFileInfo2->setFont(font5);
#if QT_CONFIG(tooltip)
        labelFileInfo2->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        labelFileInfo2->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        labelFileInfo2->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        labelFileInfo2->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        labelFileInfo2->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        labelFileInfo2->setStyleSheet(QString::fromUtf8("color: rgb(100, 100, 100);"));
        pushSelectFile2 = new QPushButton(groupTxTemplates);
        pushSelectFile2->setObjectName(QString::fromUtf8("pushSelectFile2"));
        pushSelectFile2->setGeometry(QRect(10, 120, 26, 23));
        pushSelectFile2->setFont(font3);
        pushSelectFile2->setFocusPolicy(Qt::ClickFocus);
#if QT_CONFIG(tooltip)
        pushSelectFile2->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pushSelectFile2->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        pushSelectFile2->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        pushSelectFile2->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        pushSelectFile2->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        pushSelectFile2->setText(QString::fromUtf8("..."));
#if QT_CONFIG(shortcut)
        pushSelectFile2->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
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
#if QT_CONFIG(tooltip)
        lineFile2->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        lineFile2->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        lineFile2->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        lineFile2->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        lineFile2->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
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
#if QT_CONFIG(tooltip)
        pushSendFile2->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pushSendFile2->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        pushSendFile2->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        pushSendFile2->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        pushSendFile2->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        pushSendFile2->setText(QString::fromUtf8("Send"));
#if QT_CONFIG(shortcut)
        pushSendFile2->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
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
#if QT_CONFIG(tooltip)
        groupTxData->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        groupTxData->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        groupTxData->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        groupTxData->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        groupTxData->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
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
#if QT_CONFIG(tooltip)
        pushSendTx->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pushSendTx->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        pushSendTx->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        pushSendTx->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        pushSendTx->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        pushSendTx->setText(QString::fromUtf8("Send"));
#if QT_CONFIG(shortcut)
        pushSendTx->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
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
#if QT_CONFIG(tooltip)
        lineTotalTxA->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        lineTotalTxA->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        lineTotalTxA->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        lineTotalTxA->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        lineTotalTxA->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
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
#if QT_CONFIG(tooltip)
        labelTypeTx->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        labelTypeTx->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        labelTypeTx->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        labelTypeTx->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        labelTypeTx->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
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
#if QT_CONFIG(tooltip)
        lineDataTx->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        lineDataTx->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        lineDataTx->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        lineDataTx->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        lineDataTx->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
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
#if QT_CONFIG(tooltip)
        comboSendPort->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        comboSendPort->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        comboSendPort->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        comboSendPort->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        comboSendPort->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        comboSendPort->setCurrentText(QString::fromUtf8("AB"));
        comboSendPort->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);
        comboSendPort->setPlaceholderText(QString::fromUtf8(""));
        pushMarkerTx = new QPushButton(frameTD);
        pushMarkerTx->setObjectName(QString::fromUtf8("pushMarkerTx"));
        pushMarkerTx->setGeometry(QRect(298, 15, 25, 23));
        pushMarkerTx->setFont(font4);
        pushMarkerTx->setFocusPolicy(Qt::ClickFocus);
#if QT_CONFIG(tooltip)
        pushMarkerTx->setToolTip(QString::fromUtf8("TRANSMIT MARKER"));
#endif // QT_CONFIG(tooltip)
        pushMarkerTx->setToolTipDuration(2000);
#if QT_CONFIG(statustip)
        pushMarkerTx->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        pushMarkerTx->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        pushMarkerTx->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        pushMarkerTx->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        pushMarkerTx->setText(QString::fromUtf8("M"));
#if QT_CONFIG(shortcut)
        pushMarkerTx->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        pushMarkerTx->setCheckable(true);
        labelEndTx = new QLabel(frameTD);
        labelEndTx->setObjectName(QString::fromUtf8("labelEndTx"));
        labelEndTx->setGeometry(QRect(180, 0, 81, 16));
        labelEndTx->setFont(font5);
#if QT_CONFIG(tooltip)
        labelEndTx->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        labelEndTx->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        labelEndTx->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        labelEndTx->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        labelEndTx->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        pushLocalEcho = new QPushButton(frameTD);
        pushLocalEcho->setObjectName(QString::fromUtf8("pushLocalEcho"));
        pushLocalEcho->setGeometry(QRect(270, 15, 25, 23));
        pushLocalEcho->setFont(font4);
        pushLocalEcho->setFocusPolicy(Qt::ClickFocus);
#if QT_CONFIG(tooltip)
        pushLocalEcho->setToolTip(QString::fromUtf8("LOCAL ECHO"));
#endif // QT_CONFIG(tooltip)
        pushLocalEcho->setToolTipDuration(2000);
#if QT_CONFIG(statustip)
        pushLocalEcho->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        pushLocalEcho->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        pushLocalEcho->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        pushLocalEcho->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        pushLocalEcho->setText(QString::fromUtf8("E"));
#if QT_CONFIG(shortcut)
        pushLocalEcho->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
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
#if QT_CONFIG(tooltip)
        comboTypeTx->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
        comboTypeTx->setToolTipDuration(-1);
#if QT_CONFIG(statustip)
        comboTypeTx->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        comboTypeTx->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        comboTypeTx->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        comboTypeTx->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        comboTypeTx->setCurrentText(QString::fromUtf8("ASCII"));
        comboTypeTx->setPlaceholderText(QString::fromUtf8(""));
        labelSendPort = new QLabel(frameTD);
        labelSendPort->setObjectName(QString::fromUtf8("labelSendPort"));
        labelSendPort->setGeometry(QRect(540, 0, 61, 16));
        labelSendPort->setFont(font5);
#if QT_CONFIG(tooltip)
        labelSendPort->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        labelSendPort->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        labelSendPort->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        labelSendPort->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        labelSendPort->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        labelSendPort->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelTotalTxA = new QLabel(frameTD);
        labelTotalTxA->setObjectName(QString::fromUtf8("labelTotalTxA"));
        labelTotalTxA->setGeometry(QRect(360, 0, 81, 16));
        labelTotalTxA->setFont(font5);
#if QT_CONFIG(tooltip)
        labelTotalTxA->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        labelTotalTxA->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        labelTotalTxA->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        labelTotalTxA->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        labelTotalTxA->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
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
#if QT_CONFIG(tooltip)
        comboEndTx->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        comboEndTx->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        comboEndTx->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        comboEndTx->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        comboEndTx->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        comboEndTx->setCurrentText(QString::fromUtf8("NONE"));
        comboEndTx->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);
        comboEndTx->setPlaceholderText(QString::fromUtf8(""));
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
#if QT_CONFIG(tooltip)
        comboFormatTx->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
        comboFormatTx->setToolTipDuration(-1);
#if QT_CONFIG(statustip)
        comboFormatTx->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        comboFormatTx->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        comboFormatTx->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        comboFormatTx->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        comboFormatTx->setCurrentText(QString::fromUtf8("CHAR"));
        comboFormatTx->setPlaceholderText(QString::fromUtf8(""));
        labelFormatTx = new QLabel(frameTD);
        labelFormatTx->setObjectName(QString::fromUtf8("labelFormatTx"));
        labelFormatTx->setGeometry(QRect(0, 0, 81, 16));
        labelFormatTx->setFont(font5);
#if QT_CONFIG(tooltip)
        labelFormatTx->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        labelFormatTx->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        labelFormatTx->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        labelFormatTx->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        labelFormatTx->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        labelTotalTxB = new QLabel(frameTD);
        labelTotalTxB->setObjectName(QString::fromUtf8("labelTotalTxB"));
        labelTotalTxB->setGeometry(QRect(450, 0, 81, 16));
        labelTotalTxB->setFont(font5);
#if QT_CONFIG(tooltip)
        labelTotalTxB->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        labelTotalTxB->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        labelTotalTxB->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        labelTotalTxB->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        labelTotalTxB->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
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
#if QT_CONFIG(tooltip)
        lineTotalTxB->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        lineTotalTxB->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        lineTotalTxB->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        lineTotalTxB->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        lineTotalTxB->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
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
#if QT_CONFIG(tooltip)
        pushAbout->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pushAbout->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        pushAbout->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        pushAbout->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        pushAbout->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        pushAbout->setText(QString::fromUtf8("About..."));
        pushAbout->setIconSize(QSize(48, 48));
#if QT_CONFIG(shortcut)
        pushAbout->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        pushAbout->setChecked(false);
        pushAbout->setFlat(false);
        pushConfig = new QPushButton(frameACR);
        pushConfig->setObjectName(QString::fromUtf8("pushConfig"));
        pushConfig->setGeometry(QRect(10, 50, 61, 23));
        pushConfig->setFont(font8);
        pushConfig->setFocusPolicy(Qt::ClickFocus);
#if QT_CONFIG(tooltip)
        pushConfig->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pushConfig->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        pushConfig->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        pushConfig->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        pushConfig->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        pushConfig->setText(QString::fromUtf8("Config..."));
        pushConfig->setIconSize(QSize(48, 48));
#if QT_CONFIG(shortcut)
        pushConfig->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        pushConfig->setChecked(false);
        pushConfig->setFlat(false);
        pushReport = new QPushButton(frameACR);
        pushReport->setObjectName(QString::fromUtf8("pushReport"));
        pushReport->setGeometry(QRect(10, 80, 61, 23));
        pushReport->setFont(font8);
        pushReport->setFocusPolicy(Qt::ClickFocus);
#if QT_CONFIG(tooltip)
        pushReport->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pushReport->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        pushReport->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        pushReport->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        pushReport->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        pushReport->setText(QString::fromUtf8("Report"));
        pushReport->setIconSize(QSize(48, 48));
#if QT_CONFIG(shortcut)
        pushReport->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
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
#if QT_CONFIG(tooltip)
        groupRxData->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        groupRxData->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        groupRxData->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        groupRxData->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        groupRxData->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
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
#if QT_CONFIG(tooltip)
        graphicsDataRx->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        graphicsDataRx->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        graphicsDataRx->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        graphicsDataRx->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        graphicsDataRx->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
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
#if QT_CONFIG(tooltip)
        textDataRx->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        textDataRx->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        textDataRx->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        textDataRx->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        textDataRx->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        textDataRx->setFrameShadow(QFrame::Sunken);
        textDataRx->setDocumentTitle(QString::fromUtf8(""));
        textDataRx->setLineWrapMode(QTextEdit::NoWrap);
        textDataRx->setReadOnly(true);
        textDataRx->setMarkdown(QString::fromUtf8(""));
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
#if QT_CONFIG(tooltip)
        pushWordWrap->setToolTip(QString::fromUtf8("WORD WRAP"));
#endif // QT_CONFIG(tooltip)
        pushWordWrap->setToolTipDuration(2000);
#if QT_CONFIG(statustip)
        pushWordWrap->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        pushWordWrap->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        pushWordWrap->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        pushWordWrap->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        pushWordWrap->setText(QString::fromUtf8("W"));
#if QT_CONFIG(shortcut)
        pushWordWrap->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
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
#if QT_CONFIG(tooltip)
        comboTypeRx->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        comboTypeRx->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        comboTypeRx->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        comboTypeRx->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        comboTypeRx->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        comboTypeRx->setCurrentText(QString::fromUtf8("Unsigned"));
        comboTypeRx->setPlaceholderText(QString::fromUtf8(""));
        pushMarkerRx = new QPushButton(frameRD);
        pushMarkerRx->setObjectName(QString::fromUtf8("pushMarkerRx"));
        pushMarkerRx->setGeometry(QRect(298, 15, 25, 23));
        pushMarkerRx->setFont(font4);
        pushMarkerRx->setFocusPolicy(Qt::ClickFocus);
#if QT_CONFIG(tooltip)
        pushMarkerRx->setToolTip(QString::fromUtf8("RECEIVE MARKER"));
#endif // QT_CONFIG(tooltip)
        pushMarkerRx->setToolTipDuration(2000);
#if QT_CONFIG(statustip)
        pushMarkerRx->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        pushMarkerRx->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        pushMarkerRx->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        pushMarkerRx->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        pushMarkerRx->setText(QString::fromUtf8("M"));
#if QT_CONFIG(shortcut)
        pushMarkerRx->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        pushMarkerRx->setCheckable(true);
        labelTotalRxA = new QLabel(frameRD);
        labelTotalRxA->setObjectName(QString::fromUtf8("labelTotalRxA"));
        labelTotalRxA->setEnabled(true);
        labelTotalRxA->setGeometry(QRect(360, 0, 81, 16));
        labelTotalRxA->setFont(font5);
#if QT_CONFIG(tooltip)
        labelTotalRxA->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        labelTotalRxA->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        labelTotalRxA->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        labelTotalRxA->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        labelTotalRxA->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
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
#if QT_CONFIG(tooltip)
        lineTotalRxA->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        lineTotalRxA->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        lineTotalRxA->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        lineTotalRxA->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        lineTotalRxA->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
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
#if QT_CONFIG(tooltip)
        lineTotalRxB->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        lineTotalRxB->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        lineTotalRxB->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        lineTotalRxB->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        lineTotalRxB->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
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
#if QT_CONFIG(tooltip)
        comboFrameRx->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        comboFrameRx->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        comboFrameRx->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        comboFrameRx->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        comboFrameRx->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        comboFrameRx->setCurrentText(QString::fromUtf8("AUTO"));
        comboFrameRx->setPlaceholderText(QString::fromUtf8(""));
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
#if QT_CONFIG(tooltip)
        comboFormatRx->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        comboFormatRx->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        comboFormatRx->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        comboFormatRx->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        comboFormatRx->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        comboFormatRx->setCurrentText(QString::fromUtf8("CHAR"));
        comboFormatRx->setPlaceholderText(QString::fromUtf8(""));
        labelTotalRxB = new QLabel(frameRD);
        labelTotalRxB->setObjectName(QString::fromUtf8("labelTotalRxB"));
        labelTotalRxB->setEnabled(true);
        labelTotalRxB->setGeometry(QRect(450, 0, 81, 16));
        labelTotalRxB->setFont(font5);
#if QT_CONFIG(tooltip)
        labelTotalRxB->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        labelTotalRxB->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        labelTotalRxB->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        labelTotalRxB->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        labelTotalRxB->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        labelTotalRxB->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelTypeRx = new QLabel(frameRD);
        labelTypeRx->setObjectName(QString::fromUtf8("labelTypeRx"));
        labelTypeRx->setEnabled(false);
        labelTypeRx->setGeometry(QRect(90, 0, 81, 16));
        labelTypeRx->setFont(font5);
#if QT_CONFIG(tooltip)
        labelTypeRx->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        labelTypeRx->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        labelTypeRx->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        labelTypeRx->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        labelTypeRx->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        labelFormatRx = new QLabel(frameRD);
        labelFormatRx->setObjectName(QString::fromUtf8("labelFormatRx"));
        labelFormatRx->setGeometry(QRect(0, 0, 81, 16));
        labelFormatRx->setFont(font5);
#if QT_CONFIG(tooltip)
        labelFormatRx->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        labelFormatRx->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        labelFormatRx->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        labelFormatRx->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        labelFormatRx->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        pushClearRx = new QPushButton(frameRD);
        pushClearRx->setObjectName(QString::fromUtf8("pushClearRx"));
        pushClearRx->setGeometry(QRect(540, 15, 61, 23));
        pushClearRx->setFont(font4);
        pushClearRx->setFocusPolicy(Qt::ClickFocus);
        pushClearRx->setToolTipDuration(2000);
#if QT_CONFIG(statustip)
        pushClearRx->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        pushClearRx->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        pushClearRx->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        pushClearRx->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        pushClearRx->setText(QString::fromUtf8("Clear"));
#if QT_CONFIG(shortcut)
        pushClearRx->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        pushSingleMode = new QPushButton(frameRD);
        pushSingleMode->setObjectName(QString::fromUtf8("pushSingleMode"));
        pushSingleMode->setGeometry(QRect(270, 15, 25, 23));
        pushSingleMode->setFont(font4);
        pushSingleMode->setFocusPolicy(Qt::ClickFocus);
#if QT_CONFIG(tooltip)
        pushSingleMode->setToolTip(QString::fromUtf8("SINGLE MODE"));
#endif // QT_CONFIG(tooltip)
        pushSingleMode->setToolTipDuration(2000);
#if QT_CONFIG(statustip)
        pushSingleMode->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        pushSingleMode->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        pushSingleMode->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        pushSingleMode->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        pushSingleMode->setText(QString::fromUtf8("S"));
#if QT_CONFIG(shortcut)
        pushSingleMode->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        pushSingleMode->setCheckable(true);
        labelFrameRx = new QLabel(frameRD);
        labelFrameRx->setObjectName(QString::fromUtf8("labelFrameRx"));
        labelFrameRx->setEnabled(false);
        labelFrameRx->setGeometry(QRect(180, 0, 81, 16));
        labelFrameRx->setFont(font5);
#if QT_CONFIG(tooltip)
        labelFrameRx->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        labelFrameRx->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        labelFrameRx->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        labelFrameRx->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        labelFrameRx->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)

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
#if QT_CONFIG(tooltip)
        groupTxTimer->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        groupTxTimer->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        groupTxTimer->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        groupTxTimer->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        groupTxTimer->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        groupTxTimer->setFlat(false);
        labelTmrSource = new QLabel(groupTxTimer);
        labelTmrSource->setObjectName(QString::fromUtf8("labelTmrSource"));
        labelTmrSource->setGeometry(QRect(30, 25, 161, 16));
        labelTmrSource->setFont(font5);
#if QT_CONFIG(tooltip)
        labelTmrSource->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        labelTmrSource->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        labelTmrSource->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        labelTmrSource->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        labelTmrSource->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
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
#if QT_CONFIG(tooltip)
        comboTmrSourceA->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
        comboTmrSourceA->setToolTipDuration(-1);
#if QT_CONFIG(statustip)
        comboTmrSourceA->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        comboTmrSourceA->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        comboTmrSourceA->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        comboTmrSourceA->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        comboTmrSourceA->setCurrentText(QString::fromUtf8("Line"));
        comboTmrSourceA->setPlaceholderText(QString::fromUtf8(""));
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
#if QT_CONFIG(tooltip)
        comboTmrTime->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
        comboTmrTime->setToolTipDuration(-1);
#if QT_CONFIG(statustip)
        comboTmrTime->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        comboTmrTime->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        comboTmrTime->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        comboTmrTime->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        labelTmrTime = new QLabel(groupTxTimer);
        labelTmrTime->setObjectName(QString::fromUtf8("labelTmrTime"));
        labelTmrTime->setGeometry(QRect(200, 40, 81, 16));
        labelTmrTime->setFont(font5);
#if QT_CONFIG(tooltip)
        labelTmrTime->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        labelTmrTime->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        labelTmrTime->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        labelTmrTime->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        labelTmrTime->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        pushTmrRun = new QPushButton(groupTxTimer);
        pushTmrRun->setObjectName(QString::fromUtf8("pushTmrRun"));
        pushTmrRun->setEnabled(false);
        pushTmrRun->setGeometry(QRect(290, 40, 61, 23));
        pushTmrRun->setFont(font3);
        pushTmrRun->setFocusPolicy(Qt::ClickFocus);
#if QT_CONFIG(tooltip)
        pushTmrRun->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pushTmrRun->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        pushTmrRun->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        pushTmrRun->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        pushTmrRun->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        pushTmrRun->setStyleSheet(QString::fromUtf8(""));
        pushTmrRun->setText(QString::fromUtf8("RUN"));
#if QT_CONFIG(shortcut)
        pushTmrRun->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        pushTmrRun->setCheckable(true);
        labelTmrCount = new QLabel(groupTxTimer);
        labelTmrCount->setObjectName(QString::fromUtf8("labelTmrCount"));
        labelTmrCount->setGeometry(QRect(290, 25, 61, 16));
        labelTmrCount->setFont(font5);
#if QT_CONFIG(tooltip)
        labelTmrCount->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        labelTmrCount->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        labelTmrCount->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        labelTmrCount->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        labelTmrCount->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
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
#if QT_CONFIG(tooltip)
        comboTmrSourceB->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
        comboTmrSourceB->setToolTipDuration(-1);
#if QT_CONFIG(statustip)
        comboTmrSourceB->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        comboTmrSourceB->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        comboTmrSourceB->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        comboTmrSourceB->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        comboTmrSourceB->setCurrentText(QString::fromUtf8("Clone A"));
        comboTmrSourceB->setPlaceholderText(QString::fromUtf8(""));
        labelTmrPortA = new QLabel(groupTxTimer);
        labelTmrPortA->setObjectName(QString::fromUtf8("labelTmrPortA"));
        labelTmrPortA->setGeometry(QRect(5, 40, 26, 23));
        labelTmrPortA->setFont(font4);
#if QT_CONFIG(tooltip)
        labelTmrPortA->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        labelTmrPortA->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        labelTmrPortA->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        labelTmrPortA->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        labelTmrPortA->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        labelTmrPortA->setAlignment(Qt::AlignCenter);
        labelTmrPortB = new QLabel(groupTxTimer);
        labelTmrPortB->setObjectName(QString::fromUtf8("labelTmrPortB"));
        labelTmrPortB->setGeometry(QRect(5, 70, 26, 23));
        labelTmrPortB->setFont(font4);
#if QT_CONFIG(tooltip)
        labelTmrPortB->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        labelTmrPortB->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        labelTmrPortB->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        labelTmrPortB->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        labelTmrPortB->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        labelTmrPortB->setAlignment(Qt::AlignCenter);
        pushTmrSend = new QPushButton(groupTxTimer);
        pushTmrSend->setObjectName(QString::fromUtf8("pushTmrSend"));
        pushTmrSend->setEnabled(false);
        pushTmrSend->setGeometry(QRect(290, 70, 61, 23));
        pushTmrSend->setFont(font3);
        pushTmrSend->setFocusPolicy(Qt::ClickFocus);
#if QT_CONFIG(tooltip)
        pushTmrSend->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pushTmrSend->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        pushTmrSend->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        pushTmrSend->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        pushTmrSend->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        pushTmrSend->setStyleSheet(QString::fromUtf8(""));
        pushTmrSend->setText(QString::fromUtf8("Send"));
#if QT_CONFIG(shortcut)
        pushTmrSend->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
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
#if QT_CONFIG(tooltip)
        groupPort->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        groupPort->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        groupPort->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        groupPort->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        groupPort->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
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
#if QT_CONFIG(tooltip)
        comboModePortA->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        comboModePortA->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        comboModePortA->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        comboModePortA->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        comboModePortA->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        comboModePortA->setCurrentText(QString::fromUtf8("8-N-1"));
        comboModePortA->setPlaceholderText(QString::fromUtf8(""));
        labelModePort = new QLabel(frameP);
        labelModePort->setObjectName(QString::fromUtf8("labelModePort"));
        labelModePort->setGeometry(QRect(360, 0, 81, 16));
        labelModePort->setFont(font5);
#if QT_CONFIG(tooltip)
        labelModePort->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        labelModePort->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        labelModePort->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        labelModePort->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        labelModePort->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        labelSpeedPort = new QLabel(frameP);
        labelSpeedPort->setObjectName(QString::fromUtf8("labelSpeedPort"));
        labelSpeedPort->setGeometry(QRect(270, 0, 81, 16));
        labelSpeedPort->setFont(font5);
#if QT_CONFIG(tooltip)
        labelSpeedPort->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        labelSpeedPort->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        labelSpeedPort->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        labelSpeedPort->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        labelSpeedPort->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        comboSelectPortB = new QComboBox(frameP);
        comboSelectPortB->addItem(QString());
        comboSelectPortB->setObjectName(QString::fromUtf8("comboSelectPortB"));
        comboSelectPortB->setGeometry(QRect(25, 45, 236, 23));
        comboSelectPortB->setFont(font3);
        comboSelectPortB->setFocusPolicy(Qt::ClickFocus);
        comboSelectPortB->setContextMenuPolicy(Qt::CustomContextMenu);
#if QT_CONFIG(tooltip)
        comboSelectPortB->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        comboSelectPortB->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        comboSelectPortB->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        comboSelectPortB->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        comboSelectPortB->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        comboSelectPortB->setEditable(false);
        comboSelectPortB->setCurrentText(QString::fromUtf8("CLOSE"));
        comboSelectPortB->setPlaceholderText(QString::fromUtf8(""));
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
#if QT_CONFIG(tooltip)
        comboFlowPortB->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        comboFlowPortB->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        comboFlowPortB->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        comboFlowPortB->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        comboFlowPortB->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        comboFlowPortB->setCurrentText(QString::fromUtf8("Clone A"));
        comboFlowPortB->setPlaceholderText(QString::fromUtf8(""));
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
#if QT_CONFIG(tooltip)
        comboRTO->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        comboRTO->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        comboRTO->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        comboRTO->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        comboRTO->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        comboRTO->setCurrentText(QString::fromUtf8("10"));
        comboRTO->setPlaceholderText(QString::fromUtf8(""));
        pushPortA = new QPushButton(frameP);
        pushPortA->setObjectName(QString::fromUtf8("pushPortA"));
        pushPortA->setEnabled(false);
        pushPortA->setGeometry(QRect(0, 15, 26, 23));
        pushPortA->setFont(font3);
        pushPortA->setFocusPolicy(Qt::ClickFocus);
        pushPortA->setToolTipDuration(2000);
#if QT_CONFIG(statustip)
        pushPortA->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        pushPortA->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        pushPortA->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        pushPortA->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        pushPortA->setText(QString::fromUtf8("A"));
#if QT_CONFIG(shortcut)
        pushPortA->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        pushPortA->setCheckable(true);
        labelSelectPort = new QLabel(frameP);
        labelSelectPort->setObjectName(QString::fromUtf8("labelSelectPort"));
        labelSelectPort->setGeometry(QRect(0, 0, 261, 16));
        labelSelectPort->setFont(font5);
#if QT_CONFIG(tooltip)
        labelSelectPort->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        labelSelectPort->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        labelSelectPort->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        labelSelectPort->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        labelSelectPort->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        comboSelectPortA = new QComboBox(frameP);
        comboSelectPortA->addItem(QString());
        comboSelectPortA->setObjectName(QString::fromUtf8("comboSelectPortA"));
        comboSelectPortA->setGeometry(QRect(25, 15, 236, 23));
        comboSelectPortA->setFont(font3);
        comboSelectPortA->setFocusPolicy(Qt::ClickFocus);
        comboSelectPortA->setContextMenuPolicy(Qt::CustomContextMenu);
#if QT_CONFIG(tooltip)
        comboSelectPortA->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        comboSelectPortA->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        comboSelectPortA->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        comboSelectPortA->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        comboSelectPortA->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        comboSelectPortA->setEditable(false);
        comboSelectPortA->setCurrentText(QString::fromUtf8("CLOSE"));
        comboSelectPortA->setPlaceholderText(QString::fromUtf8(""));
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
#if QT_CONFIG(tooltip)
        comboSpeedPortB->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        comboSpeedPortB->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        comboSpeedPortB->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        comboSpeedPortB->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        comboSpeedPortB->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        comboSpeedPortB->setEditable(false);
        comboSpeedPortB->setCurrentText(QString::fromUtf8("Clone A"));
        comboSpeedPortB->setPlaceholderText(QString::fromUtf8(""));
        labelFlowPort = new QLabel(frameP);
        labelFlowPort->setObjectName(QString::fromUtf8("labelFlowPort"));
        labelFlowPort->setEnabled(true);
        labelFlowPort->setGeometry(QRect(450, 0, 81, 16));
        labelFlowPort->setFont(font5);
#if QT_CONFIG(tooltip)
        labelFlowPort->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        labelFlowPort->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        labelFlowPort->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        labelFlowPort->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        labelFlowPort->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
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
#if QT_CONFIG(tooltip)
        comboModePortB->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        comboModePortB->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        comboModePortB->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        comboModePortB->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        comboModePortB->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        comboModePortB->setCurrentText(QString::fromUtf8("Clone A"));
        comboModePortB->setPlaceholderText(QString::fromUtf8(""));
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
#if QT_CONFIG(tooltip)
        comboSpeedPortA->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        comboSpeedPortA->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        comboSpeedPortA->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        comboSpeedPortA->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        comboSpeedPortA->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        comboSpeedPortA->setEditable(false);
        comboSpeedPortA->setCurrentText(QString::fromUtf8("1200"));
        comboSpeedPortA->setPlaceholderText(QString::fromUtf8(""));
        labelRTO = new QLabel(frameP);
        labelRTO->setObjectName(QString::fromUtf8("labelRTO"));
        labelRTO->setEnabled(true);
        labelRTO->setGeometry(QRect(540, 15, 61, 16));
        labelRTO->setFont(font5);
#if QT_CONFIG(tooltip)
        labelRTO->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        labelRTO->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        labelRTO->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        labelRTO->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        labelRTO->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
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
#if QT_CONFIG(tooltip)
        comboFlowPortA->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        comboFlowPortA->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        comboFlowPortA->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        comboFlowPortA->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        comboFlowPortA->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        comboFlowPortA->setCurrentText(QString::fromUtf8("NONE"));
        comboFlowPortA->setPlaceholderText(QString::fromUtf8(""));
        pushPortB = new QPushButton(frameP);
        pushPortB->setObjectName(QString::fromUtf8("pushPortB"));
        pushPortB->setEnabled(false);
        pushPortB->setGeometry(QRect(0, 45, 26, 23));
        pushPortB->setFont(font3);
        pushPortB->setFocusPolicy(Qt::ClickFocus);
        pushPortB->setToolTipDuration(2000);
#if QT_CONFIG(statustip)
        pushPortB->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        pushPortB->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        pushPortB->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        pushPortB->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        pushPortB->setText(QString::fromUtf8("B"));
#if QT_CONFIG(shortcut)
        pushPortB->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        pushPortB->setCheckable(true);

        gridLayout_3->addWidget(frameP, 0, 0, 1, 1);


        gridLayout->addWidget(groupPort, 0, 0, 1, 1);

        groupProfile = new QGroupBox(centralwidget);
        groupProfile->setObjectName(QString::fromUtf8("groupProfile"));
        sizePolicy.setHeightForWidth(groupProfile->sizePolicy().hasHeightForWidth());
        groupProfile->setSizePolicy(sizePolicy);
        groupProfile->setMinimumSize(QSize(271, 106));
        groupProfile->setFont(font1);
#if QT_CONFIG(tooltip)
        groupProfile->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        groupProfile->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        groupProfile->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        groupProfile->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        groupProfile->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        groupProfile->setFlat(false);
        comboProfile = new QComboBox(groupProfile);
        comboProfile->setObjectName(QString::fromUtf8("comboProfile"));
        comboProfile->setEnabled(true);
        comboProfile->setGeometry(QRect(10, 40, 251, 23));
        comboProfile->setFont(font4);
        comboProfile->setMouseTracking(false);
        comboProfile->setFocusPolicy(Qt::ClickFocus);
        comboProfile->setContextMenuPolicy(Qt::CustomContextMenu);
#if QT_CONFIG(tooltip)
        comboProfile->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        comboProfile->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        comboProfile->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        comboProfile->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        comboProfile->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        comboProfile->setEditable(false);
        comboProfile->setCurrentText(QString::fromUtf8(""));
        comboProfile->setPlaceholderText(QString::fromUtf8(""));
        pushSaveProfile = new QPushButton(groupProfile);
        pushSaveProfile->setObjectName(QString::fromUtf8("pushSaveProfile"));
        pushSaveProfile->setEnabled(true);
        pushSaveProfile->setGeometry(QRect(10, 70, 66, 23));
        pushSaveProfile->setFont(font3);
        pushSaveProfile->setFocusPolicy(Qt::ClickFocus);
#if QT_CONFIG(tooltip)
        pushSaveProfile->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pushSaveProfile->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        pushSaveProfile->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        pushSaveProfile->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        pushSaveProfile->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        pushSaveProfile->setText(QString::fromUtf8("Save"));
#if QT_CONFIG(shortcut)
        pushSaveProfile->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        labelProfile = new QLabel(groupProfile);
        labelProfile->setObjectName(QString::fromUtf8("labelProfile"));
        labelProfile->setGeometry(QRect(10, 25, 206, 16));
        labelProfile->setFont(font5);
#if QT_CONFIG(tooltip)
        labelProfile->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        labelProfile->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        labelProfile->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        labelProfile->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        labelProfile->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        labelProfile->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        pushNewProfile = new QPushButton(groupProfile);
        pushNewProfile->setObjectName(QString::fromUtf8("pushNewProfile"));
        pushNewProfile->setEnabled(true);
        pushNewProfile->setGeometry(QRect(85, 70, 41, 23));
        pushNewProfile->setFont(font3);
        pushNewProfile->setFocusPolicy(Qt::ClickFocus);
#if QT_CONFIG(tooltip)
        pushNewProfile->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pushNewProfile->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        pushNewProfile->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        pushNewProfile->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        pushNewProfile->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        pushNewProfile->setText(QString::fromUtf8("New"));
#if QT_CONFIG(shortcut)
        pushNewProfile->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        pushRenProfile = new QPushButton(groupProfile);
        pushRenProfile->setObjectName(QString::fromUtf8("pushRenProfile"));
        pushRenProfile->setEnabled(true);
        pushRenProfile->setGeometry(QRect(130, 70, 41, 23));
        pushRenProfile->setFont(font3);
        pushRenProfile->setFocusPolicy(Qt::ClickFocus);
#if QT_CONFIG(tooltip)
        pushRenProfile->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pushRenProfile->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        pushRenProfile->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        pushRenProfile->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        pushRenProfile->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        pushRenProfile->setText(QString::fromUtf8("Ren"));
#if QT_CONFIG(shortcut)
        pushRenProfile->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        pushDelProfile = new QPushButton(groupProfile);
        pushDelProfile->setObjectName(QString::fromUtf8("pushDelProfile"));
        pushDelProfile->setEnabled(true);
        pushDelProfile->setGeometry(QRect(175, 70, 41, 23));
        pushDelProfile->setFont(font3);
        pushDelProfile->setFocusPolicy(Qt::ClickFocus);
#if QT_CONFIG(tooltip)
        pushDelProfile->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pushDelProfile->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        pushDelProfile->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        pushDelProfile->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        pushDelProfile->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        pushDelProfile->setText(QString::fromUtf8("Del"));
#if QT_CONFIG(shortcut)
        pushDelProfile->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        pushSkipProfile = new QPushButton(groupProfile);
        pushSkipProfile->setObjectName(QString::fromUtf8("pushSkipProfile"));
        pushSkipProfile->setEnabled(true);
        pushSkipProfile->setGeometry(QRect(220, 70, 41, 23));
        pushSkipProfile->setFont(font3);
        pushSkipProfile->setFocusPolicy(Qt::ClickFocus);
#if QT_CONFIG(tooltip)
        pushSkipProfile->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pushSkipProfile->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        pushSkipProfile->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        pushSkipProfile->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        pushSkipProfile->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        pushSkipProfile->setText(QString::fromUtf8("Skip"));
#if QT_CONFIG(shortcut)
        pushSkipProfile->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
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
        groupTxTemplates->setTitle(QCoreApplication::translate("MainWindow", "TRANSMIT TEMPLATES", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableData->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Format", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableData->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Data", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableData->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "End", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableData->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "F1", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableData->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "F2", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableData->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "F3", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableData->verticalHeaderItem(3);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "F4", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableData->verticalHeaderItem(4);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "F5", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableData->verticalHeaderItem(5);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "F6", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableData->verticalHeaderItem(6);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "F7", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableData->verticalHeaderItem(7);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "F8", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableData->verticalHeaderItem(8);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "F9", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableData->verticalHeaderItem(9);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "F10", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableData->verticalHeaderItem(10);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "F11", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableData->verticalHeaderItem(11);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "F12", nullptr));

        const bool __sortingEnabled = tableData->isSortingEnabled();
        tableData->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem15 = tableData->item(0, 0);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "CHAR", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableData->item(0, 1);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "Data 1", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableData->item(0, 2);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "NONE", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableData->item(1, 0);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow", "CHAR", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableData->item(1, 1);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("MainWindow", "Data 2", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableData->item(1, 2);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("MainWindow", "NONE", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableData->item(2, 0);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("MainWindow", "CHAR", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableData->item(2, 1);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("MainWindow", "Data 3", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableData->item(2, 2);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("MainWindow", "NONE", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableData->item(3, 0);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("MainWindow", "CHAR", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tableData->item(3, 1);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("MainWindow", "Data 4", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tableData->item(3, 2);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("MainWindow", "NONE", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = tableData->item(4, 0);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("MainWindow", "CHAR", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = tableData->item(4, 1);
        ___qtablewidgetitem28->setText(QCoreApplication::translate("MainWindow", "Data 5", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = tableData->item(4, 2);
        ___qtablewidgetitem29->setText(QCoreApplication::translate("MainWindow", "NONE", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = tableData->item(5, 0);
        ___qtablewidgetitem30->setText(QCoreApplication::translate("MainWindow", "CHAR", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = tableData->item(5, 1);
        ___qtablewidgetitem31->setText(QCoreApplication::translate("MainWindow", "Data 6", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = tableData->item(5, 2);
        ___qtablewidgetitem32->setText(QCoreApplication::translate("MainWindow", "NONE", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = tableData->item(6, 0);
        ___qtablewidgetitem33->setText(QCoreApplication::translate("MainWindow", "CHAR", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = tableData->item(6, 1);
        ___qtablewidgetitem34->setText(QCoreApplication::translate("MainWindow", "Data 7", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = tableData->item(6, 2);
        ___qtablewidgetitem35->setText(QCoreApplication::translate("MainWindow", "NONE", nullptr));
        QTableWidgetItem *___qtablewidgetitem36 = tableData->item(7, 0);
        ___qtablewidgetitem36->setText(QCoreApplication::translate("MainWindow", "CHAR", nullptr));
        QTableWidgetItem *___qtablewidgetitem37 = tableData->item(7, 1);
        ___qtablewidgetitem37->setText(QCoreApplication::translate("MainWindow", "Data 8", nullptr));
        QTableWidgetItem *___qtablewidgetitem38 = tableData->item(7, 2);
        ___qtablewidgetitem38->setText(QCoreApplication::translate("MainWindow", "NONE", nullptr));
        QTableWidgetItem *___qtablewidgetitem39 = tableData->item(8, 0);
        ___qtablewidgetitem39->setText(QCoreApplication::translate("MainWindow", "CHAR", nullptr));
        QTableWidgetItem *___qtablewidgetitem40 = tableData->item(8, 1);
        ___qtablewidgetitem40->setText(QCoreApplication::translate("MainWindow", "Data 9", nullptr));
        QTableWidgetItem *___qtablewidgetitem41 = tableData->item(8, 2);
        ___qtablewidgetitem41->setText(QCoreApplication::translate("MainWindow", "NONE", nullptr));
        QTableWidgetItem *___qtablewidgetitem42 = tableData->item(9, 0);
        ___qtablewidgetitem42->setText(QCoreApplication::translate("MainWindow", "CHAR", nullptr));
        QTableWidgetItem *___qtablewidgetitem43 = tableData->item(9, 1);
        ___qtablewidgetitem43->setText(QCoreApplication::translate("MainWindow", "Data 10", nullptr));
        QTableWidgetItem *___qtablewidgetitem44 = tableData->item(9, 2);
        ___qtablewidgetitem44->setText(QCoreApplication::translate("MainWindow", "NONE", nullptr));
        QTableWidgetItem *___qtablewidgetitem45 = tableData->item(10, 0);
        ___qtablewidgetitem45->setText(QCoreApplication::translate("MainWindow", "CHAR", nullptr));
        QTableWidgetItem *___qtablewidgetitem46 = tableData->item(10, 1);
        ___qtablewidgetitem46->setText(QCoreApplication::translate("MainWindow", "Data 11", nullptr));
        QTableWidgetItem *___qtablewidgetitem47 = tableData->item(10, 2);
        ___qtablewidgetitem47->setText(QCoreApplication::translate("MainWindow", "NONE", nullptr));
        QTableWidgetItem *___qtablewidgetitem48 = tableData->item(11, 0);
        ___qtablewidgetitem48->setText(QCoreApplication::translate("MainWindow", "CHAR", nullptr));
        QTableWidgetItem *___qtablewidgetitem49 = tableData->item(11, 1);
        ___qtablewidgetitem49->setText(QCoreApplication::translate("MainWindow", "Data 12", nullptr));
        QTableWidgetItem *___qtablewidgetitem50 = tableData->item(11, 2);
        ___qtablewidgetitem50->setText(QCoreApplication::translate("MainWindow", "NONE", nullptr));
        tableData->setSortingEnabled(__sortingEnabled);

        labelTable->setText(QCoreApplication::translate("MainWindow", "Table:", nullptr));
        labelFile1->setText(QCoreApplication::translate("MainWindow", "File 1:", nullptr));
        labelPattern->setText(QCoreApplication::translate("MainWindow", "Pattern:", nullptr));
        labelPatternInfo->setText(QString());
        labelFileInfo1->setText(QString());
        labelTableInfo->setText(QString());
        labelFile2->setText(QCoreApplication::translate("MainWindow", "File 2:", nullptr));
        labelFileInfo2->setText(QString());
        groupTxData->setTitle(QCoreApplication::translate("MainWindow", "TRANSMIT DATA", nullptr));
        labelTypeTx->setText(QCoreApplication::translate("MainWindow", "Type:", nullptr));
        comboSendPort->setItemText(0, QCoreApplication::translate("MainWindow", "AB", nullptr));
        comboSendPort->setItemText(1, QCoreApplication::translate("MainWindow", "A", nullptr));
        comboSendPort->setItemText(2, QCoreApplication::translate("MainWindow", "B", nullptr));

        labelEndTx->setText(QCoreApplication::translate("MainWindow", "End:", nullptr));
        comboTypeTx->setItemText(0, QCoreApplication::translate("MainWindow", "ASCII", nullptr));
        comboTypeTx->setItemText(1, QCoreApplication::translate("MainWindow", "CP1251", nullptr));
        comboTypeTx->setItemText(2, QCoreApplication::translate("MainWindow", "CP866", nullptr));
        comboTypeTx->setItemText(3, QCoreApplication::translate("MainWindow", "KOI8-R", nullptr));
        comboTypeTx->setItemText(4, QCoreApplication::translate("MainWindow", "UTF-8", nullptr));

        labelSendPort->setText(QCoreApplication::translate("MainWindow", "Port:", nullptr));
        labelTotalTxA->setText(QCoreApplication::translate("MainWindow", "Tx A:", nullptr));
        comboEndTx->setItemText(0, QCoreApplication::translate("MainWindow", "NONE", nullptr));
        comboEndTx->setItemText(1, QCoreApplication::translate("MainWindow", "CR", nullptr));
        comboEndTx->setItemText(2, QCoreApplication::translate("MainWindow", "LF", nullptr));
        comboEndTx->setItemText(3, QCoreApplication::translate("MainWindow", "CR+LF", nullptr));
        comboEndTx->setItemText(4, QCoreApplication::translate("MainWindow", "SUB", nullptr));
        comboEndTx->setItemText(5, QCoreApplication::translate("MainWindow", "ESC", nullptr));
        comboEndTx->setItemText(6, QCoreApplication::translate("MainWindow", "TAB", nullptr));
        comboEndTx->setItemText(7, QCoreApplication::translate("MainWindow", "NUL", nullptr));

        comboFormatTx->setItemText(0, QCoreApplication::translate("MainWindow", "CHAR", nullptr));
        comboFormatTx->setItemText(1, QCoreApplication::translate("MainWindow", "DEC", nullptr));
        comboFormatTx->setItemText(2, QCoreApplication::translate("MainWindow", "HEX", nullptr));
        comboFormatTx->setItemText(3, QCoreApplication::translate("MainWindow", "BIN", nullptr));
        comboFormatTx->setItemText(4, QCoreApplication::translate("MainWindow", "MIXED", nullptr));

        labelFormatTx->setText(QCoreApplication::translate("MainWindow", "Format:", nullptr));
        labelTotalTxB->setText(QCoreApplication::translate("MainWindow", "Tx B:", nullptr));
        groupRxData->setTitle(QCoreApplication::translate("MainWindow", "RECEIVE DATA", nullptr));
        comboTypeRx->setItemText(0, QCoreApplication::translate("MainWindow", "Unsigned", nullptr));
        comboTypeRx->setItemText(1, QCoreApplication::translate("MainWindow", "Signed", nullptr));

        labelTotalRxA->setText(QCoreApplication::translate("MainWindow", "Rx A:", nullptr));
        comboFrameRx->setItemText(0, QCoreApplication::translate("MainWindow", "AUTO", nullptr));
        comboFrameRx->setItemText(1, QCoreApplication::translate("MainWindow", "16", nullptr));
        comboFrameRx->setItemText(2, QCoreApplication::translate("MainWindow", "32", nullptr));
        comboFrameRx->setItemText(3, QCoreApplication::translate("MainWindow", "64", nullptr));
        comboFrameRx->setItemText(4, QCoreApplication::translate("MainWindow", "128", nullptr));
        comboFrameRx->setItemText(5, QCoreApplication::translate("MainWindow", "256", nullptr));
        comboFrameRx->setItemText(6, QCoreApplication::translate("MainWindow", "512", nullptr));
        comboFrameRx->setItemText(7, QCoreApplication::translate("MainWindow", "FIT", nullptr));

        comboFormatRx->setItemText(0, QCoreApplication::translate("MainWindow", "CHAR", nullptr));
        comboFormatRx->setItemText(1, QCoreApplication::translate("MainWindow", "DEC", nullptr));
        comboFormatRx->setItemText(2, QCoreApplication::translate("MainWindow", "HEX", nullptr));
        comboFormatRx->setItemText(3, QCoreApplication::translate("MainWindow", "BIN", nullptr));
        comboFormatRx->setItemText(4, QCoreApplication::translate("MainWindow", "SCOPE", nullptr));
        comboFormatRx->setItemText(5, QCoreApplication::translate("MainWindow", "CHART", nullptr));

        labelTotalRxB->setText(QCoreApplication::translate("MainWindow", "Rx B:", nullptr));
        labelTypeRx->setText(QCoreApplication::translate("MainWindow", "Type:", nullptr));
        labelFormatRx->setText(QCoreApplication::translate("MainWindow", "Format:", nullptr));
        labelFrameRx->setText(QCoreApplication::translate("MainWindow", "Frame:", nullptr));
        groupTxTimer->setTitle(QCoreApplication::translate("MainWindow", "TRANSMIT TIMER", nullptr));
        labelTmrSource->setText(QCoreApplication::translate("MainWindow", "Source:", nullptr));
        comboTmrSourceA->setItemText(0, QCoreApplication::translate("MainWindow", "Line", nullptr));
        comboTmrSourceA->setItemText(1, QCoreApplication::translate("MainWindow", "Pattern", nullptr));
        comboTmrSourceA->setItemText(2, QCoreApplication::translate("MainWindow", "File 1", nullptr));
        comboTmrSourceA->setItemText(3, QCoreApplication::translate("MainWindow", "File 2", nullptr));
        comboTmrSourceA->setItemText(4, QCoreApplication::translate("MainWindow", "Table F1", nullptr));
        comboTmrSourceA->setItemText(5, QCoreApplication::translate("MainWindow", "Table F2", nullptr));
        comboTmrSourceA->setItemText(6, QCoreApplication::translate("MainWindow", "Table F3", nullptr));
        comboTmrSourceA->setItemText(7, QCoreApplication::translate("MainWindow", "Table F4", nullptr));
        comboTmrSourceA->setItemText(8, QCoreApplication::translate("MainWindow", "Table F5", nullptr));
        comboTmrSourceA->setItemText(9, QCoreApplication::translate("MainWindow", "Table F6", nullptr));
        comboTmrSourceA->setItemText(10, QCoreApplication::translate("MainWindow", "Table F7", nullptr));
        comboTmrSourceA->setItemText(11, QCoreApplication::translate("MainWindow", "Table F8", nullptr));
        comboTmrSourceA->setItemText(12, QCoreApplication::translate("MainWindow", "Table F9", nullptr));
        comboTmrSourceA->setItemText(13, QCoreApplication::translate("MainWindow", "Table F10", nullptr));
        comboTmrSourceA->setItemText(14, QCoreApplication::translate("MainWindow", "Table F11", nullptr));
        comboTmrSourceA->setItemText(15, QCoreApplication::translate("MainWindow", "Table F12", nullptr));
        comboTmrSourceA->setItemText(16, QCoreApplication::translate("MainWindow", "Counter CHAR 0-9", nullptr));
        comboTmrSourceA->setItemText(17, QCoreApplication::translate("MainWindow", "Counter CHAR A-Z", nullptr));
        comboTmrSourceA->setItemText(18, QCoreApplication::translate("MainWindow", "Counter BIN 0-15", nullptr));
        comboTmrSourceA->setItemText(19, QCoreApplication::translate("MainWindow", "Counter BIN 0-255", nullptr));

        comboTmrTime->setItemText(0, QCoreApplication::translate("MainWindow", "20", nullptr));
        comboTmrTime->setItemText(1, QCoreApplication::translate("MainWindow", "50", nullptr));
        comboTmrTime->setItemText(2, QCoreApplication::translate("MainWindow", "100", nullptr));
        comboTmrTime->setItemText(3, QCoreApplication::translate("MainWindow", "200", nullptr));
        comboTmrTime->setItemText(4, QCoreApplication::translate("MainWindow", "500", nullptr));
        comboTmrTime->setItemText(5, QCoreApplication::translate("MainWindow", "1000", nullptr));
        comboTmrTime->setItemText(6, QCoreApplication::translate("MainWindow", "2000", nullptr));
        comboTmrTime->setItemText(7, QCoreApplication::translate("MainWindow", "5000", nullptr));
        comboTmrTime->setItemText(8, QCoreApplication::translate("MainWindow", "10000", nullptr));
        comboTmrTime->setItemText(9, QCoreApplication::translate("MainWindow", "30000", nullptr));
        comboTmrTime->setItemText(10, QCoreApplication::translate("MainWindow", "60000", nullptr));

        labelTmrTime->setText(QCoreApplication::translate("MainWindow", "Time (ms):", nullptr));
        labelTmrCount->setText(QString());
        comboTmrSourceB->setItemText(0, QCoreApplication::translate("MainWindow", "Clone A", nullptr));
        comboTmrSourceB->setItemText(1, QCoreApplication::translate("MainWindow", "Line", nullptr));
        comboTmrSourceB->setItemText(2, QCoreApplication::translate("MainWindow", "Pattern", nullptr));
        comboTmrSourceB->setItemText(3, QCoreApplication::translate("MainWindow", "File 1", nullptr));
        comboTmrSourceB->setItemText(4, QCoreApplication::translate("MainWindow", "File 2", nullptr));
        comboTmrSourceB->setItemText(5, QCoreApplication::translate("MainWindow", "Table F1", nullptr));
        comboTmrSourceB->setItemText(6, QCoreApplication::translate("MainWindow", "Table F2", nullptr));
        comboTmrSourceB->setItemText(7, QCoreApplication::translate("MainWindow", "Table F3", nullptr));
        comboTmrSourceB->setItemText(8, QCoreApplication::translate("MainWindow", "Table F4", nullptr));
        comboTmrSourceB->setItemText(9, QCoreApplication::translate("MainWindow", "Table F5", nullptr));
        comboTmrSourceB->setItemText(10, QCoreApplication::translate("MainWindow", "Table F6", nullptr));
        comboTmrSourceB->setItemText(11, QCoreApplication::translate("MainWindow", "Table F7", nullptr));
        comboTmrSourceB->setItemText(12, QCoreApplication::translate("MainWindow", "Table F8", nullptr));
        comboTmrSourceB->setItemText(13, QCoreApplication::translate("MainWindow", "Table F9", nullptr));
        comboTmrSourceB->setItemText(14, QCoreApplication::translate("MainWindow", "Table F10", nullptr));
        comboTmrSourceB->setItemText(15, QCoreApplication::translate("MainWindow", "Table F11", nullptr));
        comboTmrSourceB->setItemText(16, QCoreApplication::translate("MainWindow", "Table F12", nullptr));
        comboTmrSourceB->setItemText(17, QCoreApplication::translate("MainWindow", "Counter CHAR 0-9", nullptr));
        comboTmrSourceB->setItemText(18, QCoreApplication::translate("MainWindow", "Counter CHAR A-Z", nullptr));
        comboTmrSourceB->setItemText(19, QCoreApplication::translate("MainWindow", "Counter BIN 0-15", nullptr));
        comboTmrSourceB->setItemText(20, QCoreApplication::translate("MainWindow", "Counter BIN 0-255", nullptr));

        labelTmrPortA->setText(QCoreApplication::translate("MainWindow", "A:", nullptr));
        labelTmrPortB->setText(QCoreApplication::translate("MainWindow", "B:", nullptr));
        groupPort->setTitle(QCoreApplication::translate("MainWindow", "SERIAL PORT", nullptr));
        comboModePortA->setItemText(0, QCoreApplication::translate("MainWindow", "8-N-1", nullptr));
        comboModePortA->setItemText(1, QCoreApplication::translate("MainWindow", "8-N-2", nullptr));
        comboModePortA->setItemText(2, QCoreApplication::translate("MainWindow", "8-E-1", nullptr));
        comboModePortA->setItemText(3, QCoreApplication::translate("MainWindow", "8-E-2", nullptr));
        comboModePortA->setItemText(4, QCoreApplication::translate("MainWindow", "8-O-1", nullptr));
        comboModePortA->setItemText(5, QCoreApplication::translate("MainWindow", "8-O-2", nullptr));

        labelModePort->setText(QCoreApplication::translate("MainWindow", "Mode:", nullptr));
        labelSpeedPort->setText(QCoreApplication::translate("MainWindow", "Speed:", nullptr));
        comboSelectPortB->setItemText(0, QCoreApplication::translate("MainWindow", "CLOSE", nullptr));

        comboFlowPortB->setItemText(0, QCoreApplication::translate("MainWindow", "Clone A", nullptr));
        comboFlowPortB->setItemText(1, QCoreApplication::translate("MainWindow", "NONE", nullptr));
        comboFlowPortB->setItemText(2, QCoreApplication::translate("MainWindow", "RTS/CTS", nullptr));
        comboFlowPortB->setItemText(3, QCoreApplication::translate("MainWindow", "XON/XOFF", nullptr));

        comboRTO->setItemText(0, QCoreApplication::translate("MainWindow", "10", nullptr));
        comboRTO->setItemText(1, QCoreApplication::translate("MainWindow", "20", nullptr));
        comboRTO->setItemText(2, QCoreApplication::translate("MainWindow", "50", nullptr));
        comboRTO->setItemText(3, QCoreApplication::translate("MainWindow", "100", nullptr));
        comboRTO->setItemText(4, QCoreApplication::translate("MainWindow", "200", nullptr));
        comboRTO->setItemText(5, QCoreApplication::translate("MainWindow", "500", nullptr));

        labelSelectPort->setText(QCoreApplication::translate("MainWindow", "Port:", nullptr));
        comboSelectPortA->setItemText(0, QCoreApplication::translate("MainWindow", "CLOSE", nullptr));

        comboSpeedPortB->setItemText(0, QCoreApplication::translate("MainWindow", "Clone A", nullptr));
        comboSpeedPortB->setItemText(1, QCoreApplication::translate("MainWindow", "1200", nullptr));
        comboSpeedPortB->setItemText(2, QCoreApplication::translate("MainWindow", "2400", nullptr));
        comboSpeedPortB->setItemText(3, QCoreApplication::translate("MainWindow", "4800", nullptr));
        comboSpeedPortB->setItemText(4, QCoreApplication::translate("MainWindow", "9600", nullptr));
        comboSpeedPortB->setItemText(5, QCoreApplication::translate("MainWindow", "19200", nullptr));
        comboSpeedPortB->setItemText(6, QCoreApplication::translate("MainWindow", "38400", nullptr));
        comboSpeedPortB->setItemText(7, QCoreApplication::translate("MainWindow", "57600", nullptr));
        comboSpeedPortB->setItemText(8, QCoreApplication::translate("MainWindow", "115200", nullptr));

        labelFlowPort->setText(QCoreApplication::translate("MainWindow", "Flow:", nullptr));
        comboModePortB->setItemText(0, QCoreApplication::translate("MainWindow", "Clone A", nullptr));
        comboModePortB->setItemText(1, QCoreApplication::translate("MainWindow", "8-N-1", nullptr));
        comboModePortB->setItemText(2, QCoreApplication::translate("MainWindow", "8-N-2", nullptr));
        comboModePortB->setItemText(3, QCoreApplication::translate("MainWindow", "8-E-1", nullptr));
        comboModePortB->setItemText(4, QCoreApplication::translate("MainWindow", "8-E-2", nullptr));
        comboModePortB->setItemText(5, QCoreApplication::translate("MainWindow", "8-O-1", nullptr));
        comboModePortB->setItemText(6, QCoreApplication::translate("MainWindow", "8-O-2", nullptr));

        comboSpeedPortA->setItemText(0, QCoreApplication::translate("MainWindow", "1200", nullptr));
        comboSpeedPortA->setItemText(1, QCoreApplication::translate("MainWindow", "2400", nullptr));
        comboSpeedPortA->setItemText(2, QCoreApplication::translate("MainWindow", "4800", nullptr));
        comboSpeedPortA->setItemText(3, QCoreApplication::translate("MainWindow", "9600", nullptr));
        comboSpeedPortA->setItemText(4, QCoreApplication::translate("MainWindow", "19200", nullptr));
        comboSpeedPortA->setItemText(5, QCoreApplication::translate("MainWindow", "38400", nullptr));
        comboSpeedPortA->setItemText(6, QCoreApplication::translate("MainWindow", "57600", nullptr));
        comboSpeedPortA->setItemText(7, QCoreApplication::translate("MainWindow", "115200", nullptr));

        labelRTO->setText(QCoreApplication::translate("MainWindow", "RTO (ms):", nullptr));
        comboFlowPortA->setItemText(0, QCoreApplication::translate("MainWindow", "NONE", nullptr));
        comboFlowPortA->setItemText(1, QCoreApplication::translate("MainWindow", "RTS/CTS", nullptr));
        comboFlowPortA->setItemText(2, QCoreApplication::translate("MainWindow", "XON/XOFF", nullptr));

        groupProfile->setTitle(QCoreApplication::translate("MainWindow", "PROFILE", nullptr));
        labelProfile->setText(QCoreApplication::translate("MainWindow", "Select:", nullptr));
        (void)MainWindow;
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
