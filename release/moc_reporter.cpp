/****************************************************************************
** Meta object code from reading C++ file 'reporter.h'
**
** Created: Tue Oct 30 11:52:52 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Report/reporter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'reporter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CReporter[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_CReporter[] = {
    "CReporter\0"
};

const QMetaObject CReporter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CReporter,
      qt_meta_data_CReporter, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CReporter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CReporter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CReporter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CReporter))
        return static_cast<void*>(const_cast< CReporter*>(this));
    return QObject::qt_metacast(_clname);
}

int CReporter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE