/****************************************************************************
** Meta object code from reading C++ file 'loading_dialog.h'
**
** Created: Tue Jun 16 14:01:28 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/rviz/src/rviz/loading_dialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loading_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_rviz__LoadingDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      29,   21,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_rviz__LoadingDialog[] = {
    "rviz::LoadingDialog\0\0message\0"
    "showMessage(QString)\0"
};

void rviz::LoadingDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LoadingDialog *_t = static_cast<LoadingDialog *>(_o);
        switch (_id) {
        case 0: _t->showMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData rviz::LoadingDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject rviz::LoadingDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_rviz__LoadingDialog,
      qt_meta_data_rviz__LoadingDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &rviz::LoadingDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *rviz::LoadingDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *rviz::LoadingDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_rviz__LoadingDialog))
        return static_cast<void*>(const_cast< LoadingDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int rviz::LoadingDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE