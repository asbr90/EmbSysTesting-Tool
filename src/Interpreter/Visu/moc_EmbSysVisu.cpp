/****************************************************************************
** Meta object code from reading C++ file 'EmbSysVisu.h'
**
** Created: Thu Jul 17 16:07:51 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "EmbSysVisu.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EmbSysVisu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EmbSysVisu[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      24,   11,   11,   11, 0x08,
      34,   11,   11,   11, 0x08,
      54,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_EmbSysVisu[] = {
    "EmbSysVisu\0\0slotClose()\0newUART()\0"
    "connectionHandler()\0disconnectHandler()\0"
};

void EmbSysVisu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EmbSysVisu *_t = static_cast<EmbSysVisu *>(_o);
        switch (_id) {
        case 0: _t->slotClose(); break;
        case 1: _t->newUART(); break;
        case 2: _t->connectionHandler(); break;
        case 3: _t->disconnectHandler(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData EmbSysVisu::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EmbSysVisu::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_EmbSysVisu,
      qt_meta_data_EmbSysVisu, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EmbSysVisu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EmbSysVisu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EmbSysVisu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EmbSysVisu))
        return static_cast<void*>(const_cast< EmbSysVisu*>(this));
    if (!strcmp(_clname, "Ui::MainWindow"))
        return static_cast< Ui::MainWindow*>(const_cast< EmbSysVisu*>(this));
    if (!strcmp(_clname, "InterpreterInterface"))
        return static_cast< InterpreterInterface*>(const_cast< EmbSysVisu*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int EmbSysVisu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
