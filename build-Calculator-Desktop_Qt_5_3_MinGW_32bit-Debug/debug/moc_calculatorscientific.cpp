/****************************************************************************
** Meta object code from reading C++ file 'calculatorscientific.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Calculator/calculatorscientific.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calculatorscientific.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CalculatorScientific_t {
    QByteArrayData data[17];
    char stringdata[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CalculatorScientific_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CalculatorScientific_t qt_meta_stringdata_CalculatorScientific = {
    {
QT_MOC_LITERAL(0, 0, 20),
QT_MOC_LITERAL(1, 21, 12),
QT_MOC_LITERAL(2, 34, 0),
QT_MOC_LITERAL(3, 35, 20),
QT_MOC_LITERAL(4, 56, 23),
QT_MOC_LITERAL(5, 80, 29),
QT_MOC_LITERAL(6, 110, 12),
QT_MOC_LITERAL(7, 123, 12),
QT_MOC_LITERAL(8, 136, 17),
QT_MOC_LITERAL(9, 154, 16),
QT_MOC_LITERAL(10, 171, 5),
QT_MOC_LITERAL(11, 177, 8),
QT_MOC_LITERAL(12, 186, 11),
QT_MOC_LITERAL(13, 198, 10),
QT_MOC_LITERAL(14, 209, 9),
QT_MOC_LITERAL(15, 219, 11),
QT_MOC_LITERAL(16, 231, 11)
    },
    "CalculatorScientific\0digitClicked\0\0"
    "unaryOperatorClicked\0additiveOperatorClicked\0"
    "multiplicativeOperatorClicked\0"
    "equalClicked\0pointClicked\0changeSignClicked\0"
    "backspaceClicked\0clear\0clearAll\0"
    "clearMemory\0readMemory\0setMemory\0"
    "addToMemory\0subToMemory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CalculatorScientific[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    0,   98,    2, 0x08 /* Private */,
      12,    0,   99,    2, 0x08 /* Private */,
      13,    0,  100,    2, 0x08 /* Private */,
      14,    0,  101,    2, 0x08 /* Private */,
      15,    0,  102,    2, 0x08 /* Private */,
      16,    0,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CalculatorScientific::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CalculatorScientific *_t = static_cast<CalculatorScientific *>(_o);
        switch (_id) {
        case 0: _t->digitClicked(); break;
        case 1: _t->unaryOperatorClicked(); break;
        case 2: _t->additiveOperatorClicked(); break;
        case 3: _t->multiplicativeOperatorClicked(); break;
        case 4: _t->equalClicked(); break;
        case 5: _t->pointClicked(); break;
        case 6: _t->changeSignClicked(); break;
        case 7: _t->backspaceClicked(); break;
        case 8: _t->clear(); break;
        case 9: _t->clearAll(); break;
        case 10: _t->clearMemory(); break;
        case 11: _t->readMemory(); break;
        case 12: _t->setMemory(); break;
        case 13: _t->addToMemory(); break;
        case 14: _t->subToMemory(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CalculatorScientific::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_CalculatorScientific.data,
      qt_meta_data_CalculatorScientific,  qt_static_metacall, 0, 0}
};


const QMetaObject *CalculatorScientific::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CalculatorScientific::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CalculatorScientific.stringdata))
        return static_cast<void*>(const_cast< CalculatorScientific*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int CalculatorScientific::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
