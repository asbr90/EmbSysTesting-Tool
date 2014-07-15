/****************************************************************************
** Meta object code from reading C++ file 'connectionuart.h'
**
** Created: Tue Jul 15 20:49:33 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "connectionuart.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connectionuart.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ConnectionUART[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x0a,
      28,   15,   15,   15, 0x0a,
      44,   15,   15,   15, 0x0a,
      60,   15,   15,   15, 0x0a,
      77,   15,   15,   15, 0x0a,
      93,   15,   15,   15, 0x0a,
     110,   15,   15,   15, 0x0a,
     122,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ConnectionUART[] = {
    "ConnectionUART\0\0slotClose()\0storeSettings()\0"
    "storeDataBits()\0storeParityBit()\0"
    "storeBaudrate()\0storeDirection()\0"
    "storeMQTT()\0storeFileSettings()\0"
};

void ConnectionUART::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ConnectionUART *_t = static_cast<ConnectionUART *>(_o);
        switch (_id) {
        case 0: _t->slotClose(); break;
        case 1: _t->storeSettings(); break;
        case 2: _t->storeDataBits(); break;
        case 3: _t->storeParityBit(); break;
        case 4: _t->storeBaudrate(); break;
        case 5: _t->storeDirection(); break;
        case 6: _t->storeMQTT(); break;
        case 7: _t->storeFileSettings(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ConnectionUART::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ConnectionUART::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ConnectionUART,
      qt_meta_data_ConnectionUART, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ConnectionUART::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ConnectionUART::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ConnectionUART::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ConnectionUART))
        return static_cast<void*>(const_cast< ConnectionUART*>(this));
    if (!strcmp(_clname, "Ui::Form"))
        return static_cast< Ui::Form*>(const_cast< ConnectionUART*>(this));
    return QWidget::qt_metacast(_clname);
}

int ConnectionUART::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
