/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../SerIO/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[70];
    char stringdata0[1797];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 20), // "on_pushAbout_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 21), // "on_pushConfig_clicked"
QT_MOC_LITERAL(4, 55, 12), // "createReport"
QT_MOC_LITERAL(5, 68, 8), // "QAction*"
QT_MOC_LITERAL(6, 77, 12), // "replyVersion"
QT_MOC_LITERAL(7, 90, 14), // "QNetworkReply*"
QT_MOC_LITERAL(8, 105, 5), // "reply"
QT_MOC_LITERAL(9, 111, 15), // "timerOutVersion"
QT_MOC_LITERAL(10, 127, 25), // "on_comboProfile_activated"
QT_MOC_LITERAL(11, 153, 4), // "arg1"
QT_MOC_LITERAL(12, 158, 26), // "on_pushSaveProfile_clicked"
QT_MOC_LITERAL(13, 185, 25), // "on_pushNewProfile_clicked"
QT_MOC_LITERAL(14, 211, 25), // "on_pushRenProfile_clicked"
QT_MOC_LITERAL(15, 237, 25), // "on_pushDelProfile_clicked"
QT_MOC_LITERAL(16, 263, 26), // "on_pushSkipProfile_clicked"
QT_MOC_LITERAL(17, 290, 20), // "on_pushPortA_clicked"
QT_MOC_LITERAL(18, 311, 20), // "on_pushPortB_clicked"
QT_MOC_LITERAL(19, 332, 29), // "on_comboSelectPortA_activated"
QT_MOC_LITERAL(20, 362, 29), // "on_comboSelectPortB_activated"
QT_MOC_LITERAL(21, 392, 37), // "on_comboSpeedPortA_currentTex..."
QT_MOC_LITERAL(22, 430, 37), // "on_comboSpeedPortB_currentTex..."
QT_MOC_LITERAL(23, 468, 36), // "on_comboModePortA_currentText..."
QT_MOC_LITERAL(24, 505, 36), // "on_comboModePortB_currentText..."
QT_MOC_LITERAL(25, 542, 36), // "on_comboFlowPortA_currentText..."
QT_MOC_LITERAL(26, 579, 36), // "on_comboFlowPortB_currentText..."
QT_MOC_LITERAL(27, 616, 30), // "on_comboRTO_currentTextChanged"
QT_MOC_LITERAL(28, 647, 35), // "on_comboFormatRx_currentTextC..."
QT_MOC_LITERAL(29, 683, 33), // "on_comboTypeRx_currentTextCha..."
QT_MOC_LITERAL(30, 717, 34), // "on_comboFrameRx_currentTextCh..."
QT_MOC_LITERAL(31, 752, 25), // "on_pushSingleMode_clicked"
QT_MOC_LITERAL(32, 778, 23), // "on_pushMarkerRx_clicked"
QT_MOC_LITERAL(33, 802, 23), // "on_pushWordWrap_clicked"
QT_MOC_LITERAL(34, 826, 22), // "on_pushClearRx_clicked"
QT_MOC_LITERAL(35, 849, 13), // "timerReadPort"
QT_MOC_LITERAL(36, 863, 35), // "on_comboFormatTx_currentTextC..."
QT_MOC_LITERAL(37, 899, 33), // "on_comboTypeTx_currentTextCha..."
QT_MOC_LITERAL(38, 933, 32), // "on_comboEndTx_currentTextChanged"
QT_MOC_LITERAL(39, 966, 24), // "on_pushLocalEcho_clicked"
QT_MOC_LITERAL(40, 991, 23), // "on_pushMarkerTx_clicked"
QT_MOC_LITERAL(41, 1015, 35), // "on_comboSendPort_currentTextC..."
QT_MOC_LITERAL(42, 1051, 27), // "on_lineDataTx_returnPressed"
QT_MOC_LITERAL(43, 1079, 21), // "on_pushSendTx_clicked"
QT_MOC_LITERAL(44, 1101, 40), // "on_lineDataTx_customContextMe..."
QT_MOC_LITERAL(45, 1142, 3), // "pos"
QT_MOC_LITERAL(46, 1146, 34), // "on_comboPattern_currentTextCh..."
QT_MOC_LITERAL(47, 1181, 26), // "on_pushSendPattern_clicked"
QT_MOC_LITERAL(48, 1208, 26), // "on_pushSelectFile1_clicked"
QT_MOC_LITERAL(49, 1235, 26), // "on_pushSelectFile2_clicked"
QT_MOC_LITERAL(50, 1262, 24), // "on_lineFile1_textChanged"
QT_MOC_LITERAL(51, 1287, 24), // "on_lineFile2_textChanged"
QT_MOC_LITERAL(52, 1312, 26), // "on_lineFile1_returnPressed"
QT_MOC_LITERAL(53, 1339, 26), // "on_lineFile2_returnPressed"
QT_MOC_LITERAL(54, 1366, 24), // "on_pushSendFile1_clicked"
QT_MOC_LITERAL(55, 1391, 24), // "on_pushSendFile2_clicked"
QT_MOC_LITERAL(56, 1416, 39), // "on_lineFile1_customContextMen..."
QT_MOC_LITERAL(57, 1456, 39), // "on_lineFile2_customContextMen..."
QT_MOC_LITERAL(58, 1496, 24), // "on_tableData_cellChanged"
QT_MOC_LITERAL(59, 1521, 3), // "row"
QT_MOC_LITERAL(60, 1525, 6), // "column"
QT_MOC_LITERAL(61, 1532, 33), // "on_tableData_itemSelectionCha..."
QT_MOC_LITERAL(62, 1566, 19), // "ClickRowHeaderF1F12"
QT_MOC_LITERAL(63, 1586, 39), // "on_tableData_customContextMen..."
QT_MOC_LITERAL(64, 1626, 37), // "on_comboTmrSourceA_currentTex..."
QT_MOC_LITERAL(65, 1664, 37), // "on_comboTmrSourceB_currentTex..."
QT_MOC_LITERAL(66, 1702, 34), // "on_comboTmrTime_currentTextCh..."
QT_MOC_LITERAL(67, 1737, 21), // "on_pushTmrRun_clicked"
QT_MOC_LITERAL(68, 1759, 22), // "on_pushTmrSend_clicked"
QT_MOC_LITERAL(69, 1782, 14) // "timerWritePort"

    },
    "MainWindow\0on_pushAbout_clicked\0\0"
    "on_pushConfig_clicked\0createReport\0"
    "QAction*\0replyVersion\0QNetworkReply*\0"
    "reply\0timerOutVersion\0on_comboProfile_activated\0"
    "arg1\0on_pushSaveProfile_clicked\0"
    "on_pushNewProfile_clicked\0"
    "on_pushRenProfile_clicked\0"
    "on_pushDelProfile_clicked\0"
    "on_pushSkipProfile_clicked\0"
    "on_pushPortA_clicked\0on_pushPortB_clicked\0"
    "on_comboSelectPortA_activated\0"
    "on_comboSelectPortB_activated\0"
    "on_comboSpeedPortA_currentTextChanged\0"
    "on_comboSpeedPortB_currentTextChanged\0"
    "on_comboModePortA_currentTextChanged\0"
    "on_comboModePortB_currentTextChanged\0"
    "on_comboFlowPortA_currentTextChanged\0"
    "on_comboFlowPortB_currentTextChanged\0"
    "on_comboRTO_currentTextChanged\0"
    "on_comboFormatRx_currentTextChanged\0"
    "on_comboTypeRx_currentTextChanged\0"
    "on_comboFrameRx_currentTextChanged\0"
    "on_pushSingleMode_clicked\0"
    "on_pushMarkerRx_clicked\0on_pushWordWrap_clicked\0"
    "on_pushClearRx_clicked\0timerReadPort\0"
    "on_comboFormatTx_currentTextChanged\0"
    "on_comboTypeTx_currentTextChanged\0"
    "on_comboEndTx_currentTextChanged\0"
    "on_pushLocalEcho_clicked\0"
    "on_pushMarkerTx_clicked\0"
    "on_comboSendPort_currentTextChanged\0"
    "on_lineDataTx_returnPressed\0"
    "on_pushSendTx_clicked\0"
    "on_lineDataTx_customContextMenuRequested\0"
    "pos\0on_comboPattern_currentTextChanged\0"
    "on_pushSendPattern_clicked\0"
    "on_pushSelectFile1_clicked\0"
    "on_pushSelectFile2_clicked\0"
    "on_lineFile1_textChanged\0"
    "on_lineFile2_textChanged\0"
    "on_lineFile1_returnPressed\0"
    "on_lineFile2_returnPressed\0"
    "on_pushSendFile1_clicked\0"
    "on_pushSendFile2_clicked\0"
    "on_lineFile1_customContextMenuRequested\0"
    "on_lineFile2_customContextMenuRequested\0"
    "on_tableData_cellChanged\0row\0column\0"
    "on_tableData_itemSelectionChanged\0"
    "ClickRowHeaderF1F12\0"
    "on_tableData_customContextMenuRequested\0"
    "on_comboTmrSourceA_currentTextChanged\0"
    "on_comboTmrSourceB_currentTextChanged\0"
    "on_comboTmrTime_currentTextChanged\0"
    "on_pushTmrRun_clicked\0on_pushTmrSend_clicked\0"
    "timerWritePort"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      61,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  319,    2, 0x08 /* Private */,
       3,    0,  320,    2, 0x08 /* Private */,
       4,    1,  321,    2, 0x08 /* Private */,
       6,    1,  324,    2, 0x08 /* Private */,
       9,    0,  327,    2, 0x08 /* Private */,
      10,    1,  328,    2, 0x08 /* Private */,
      12,    0,  331,    2, 0x08 /* Private */,
      13,    0,  332,    2, 0x08 /* Private */,
      14,    0,  333,    2, 0x08 /* Private */,
      15,    0,  334,    2, 0x08 /* Private */,
      16,    0,  335,    2, 0x08 /* Private */,
      17,    0,  336,    2, 0x08 /* Private */,
      18,    0,  337,    2, 0x08 /* Private */,
      19,    1,  338,    2, 0x08 /* Private */,
      20,    1,  341,    2, 0x08 /* Private */,
      21,    1,  344,    2, 0x08 /* Private */,
      22,    1,  347,    2, 0x08 /* Private */,
      23,    1,  350,    2, 0x08 /* Private */,
      24,    1,  353,    2, 0x08 /* Private */,
      25,    1,  356,    2, 0x08 /* Private */,
      26,    1,  359,    2, 0x08 /* Private */,
      27,    1,  362,    2, 0x08 /* Private */,
      28,    1,  365,    2, 0x08 /* Private */,
      29,    1,  368,    2, 0x08 /* Private */,
      30,    1,  371,    2, 0x08 /* Private */,
      31,    0,  374,    2, 0x08 /* Private */,
      32,    0,  375,    2, 0x08 /* Private */,
      33,    0,  376,    2, 0x08 /* Private */,
      34,    0,  377,    2, 0x08 /* Private */,
      35,    0,  378,    2, 0x08 /* Private */,
      36,    1,  379,    2, 0x08 /* Private */,
      37,    1,  382,    2, 0x08 /* Private */,
      38,    1,  385,    2, 0x08 /* Private */,
      39,    0,  388,    2, 0x08 /* Private */,
      40,    0,  389,    2, 0x08 /* Private */,
      41,    1,  390,    2, 0x08 /* Private */,
      42,    0,  393,    2, 0x08 /* Private */,
      43,    0,  394,    2, 0x08 /* Private */,
      44,    1,  395,    2, 0x08 /* Private */,
      46,    1,  398,    2, 0x08 /* Private */,
      47,    0,  401,    2, 0x08 /* Private */,
      48,    0,  402,    2, 0x08 /* Private */,
      49,    0,  403,    2, 0x08 /* Private */,
      50,    1,  404,    2, 0x08 /* Private */,
      51,    1,  407,    2, 0x08 /* Private */,
      52,    0,  410,    2, 0x08 /* Private */,
      53,    0,  411,    2, 0x08 /* Private */,
      54,    0,  412,    2, 0x08 /* Private */,
      55,    0,  413,    2, 0x08 /* Private */,
      56,    1,  414,    2, 0x08 /* Private */,
      57,    1,  417,    2, 0x08 /* Private */,
      58,    2,  420,    2, 0x08 /* Private */,
      61,    0,  425,    2, 0x08 /* Private */,
      62,    1,  426,    2, 0x08 /* Private */,
      63,    1,  429,    2, 0x08 /* Private */,
      64,    1,  432,    2, 0x08 /* Private */,
      65,    1,  435,    2, 0x08 /* Private */,
      66,    1,  438,    2, 0x08 /* Private */,
      67,    0,  441,    2, 0x08 /* Private */,
      68,    0,  442,    2, 0x08 /* Private */,
      69,    0,  443,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   45,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   45,
    QMetaType::Void, QMetaType::QPoint,   45,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   59,   60,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QPoint,   45,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushAbout_clicked(); break;
        case 1: _t->on_pushConfig_clicked(); break;
        case 2: _t->createReport((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 3: _t->replyVersion((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 4: _t->timerOutVersion(); break;
        case 5: _t->on_comboProfile_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_pushSaveProfile_clicked(); break;
        case 7: _t->on_pushNewProfile_clicked(); break;
        case 8: _t->on_pushRenProfile_clicked(); break;
        case 9: _t->on_pushDelProfile_clicked(); break;
        case 10: _t->on_pushSkipProfile_clicked(); break;
        case 11: _t->on_pushPortA_clicked(); break;
        case 12: _t->on_pushPortB_clicked(); break;
        case 13: _t->on_comboSelectPortA_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->on_comboSelectPortB_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->on_comboSpeedPortA_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->on_comboSpeedPortB_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->on_comboModePortA_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->on_comboModePortB_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->on_comboFlowPortA_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->on_comboFlowPortB_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->on_comboRTO_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->on_comboFormatRx_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: _t->on_comboTypeRx_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->on_comboFrameRx_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 25: _t->on_pushSingleMode_clicked(); break;
        case 26: _t->on_pushMarkerRx_clicked(); break;
        case 27: _t->on_pushWordWrap_clicked(); break;
        case 28: _t->on_pushClearRx_clicked(); break;
        case 29: _t->timerReadPort(); break;
        case 30: _t->on_comboFormatTx_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 31: _t->on_comboTypeTx_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 32: _t->on_comboEndTx_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 33: _t->on_pushLocalEcho_clicked(); break;
        case 34: _t->on_pushMarkerTx_clicked(); break;
        case 35: _t->on_comboSendPort_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 36: _t->on_lineDataTx_returnPressed(); break;
        case 37: _t->on_pushSendTx_clicked(); break;
        case 38: _t->on_lineDataTx_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 39: _t->on_comboPattern_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 40: _t->on_pushSendPattern_clicked(); break;
        case 41: _t->on_pushSelectFile1_clicked(); break;
        case 42: _t->on_pushSelectFile2_clicked(); break;
        case 43: _t->on_lineFile1_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 44: _t->on_lineFile2_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 45: _t->on_lineFile1_returnPressed(); break;
        case 46: _t->on_lineFile2_returnPressed(); break;
        case 47: _t->on_pushSendFile1_clicked(); break;
        case 48: _t->on_pushSendFile2_clicked(); break;
        case 49: _t->on_lineFile1_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 50: _t->on_lineFile2_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 51: _t->on_tableData_cellChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 52: _t->on_tableData_itemSelectionChanged(); break;
        case 53: _t->ClickRowHeaderF1F12((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 54: _t->on_tableData_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 55: _t->on_comboTmrSourceA_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 56: _t->on_comboTmrSourceB_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 57: _t->on_comboTmrTime_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 58: _t->on_pushTmrRun_clicked(); break;
        case 59: _t->on_pushTmrSend_clicked(); break;
        case 60: _t->timerWritePort(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 61)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 61;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 61)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 61;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
