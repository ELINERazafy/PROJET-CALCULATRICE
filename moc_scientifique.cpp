/****************************************************************************
** Meta object code from reading C++ file 'scientifique.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Calculatrice/scientifique.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scientifique.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_scientifique_t {
    QByteArrayData data[9];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_scientifique_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_scientifique_t qt_meta_stringdata_scientifique = {
    {
QT_MOC_LITERAL(0, 0, 12), // "scientifique"
QT_MOC_LITERAL(1, 13, 14), // "presserBoutton"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 16), // "presserSupprimer"
QT_MOC_LITERAL(4, 46, 19), // "presserBouttonClear"
QT_MOC_LITERAL(5, 66, 15), // "presserFonction"
QT_MOC_LITERAL(6, 82, 14), // "presserVirgule"
QT_MOC_LITERAL(7, 97, 13), // "presserSigne_"
QT_MOC_LITERAL(8, 111, 12) // "presserTrigo"

    },
    "scientifique\0presserBoutton\0\0"
    "presserSupprimer\0presserBouttonClear\0"
    "presserFonction\0presserVirgule\0"
    "presserSigne_\0presserTrigo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_scientifique[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void scientifique::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<scientifique *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->presserBoutton(); break;
        case 1: _t->presserSupprimer(); break;
        case 2: _t->presserBouttonClear(); break;
        case 3: _t->presserFonction(); break;
        case 4: _t->presserVirgule(); break;
        case 5: _t->presserSigne_(); break;
        case 6: _t->presserTrigo(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject scientifique::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_scientifique.data,
    qt_meta_data_scientifique,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *scientifique::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *scientifique::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_scientifique.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int scientifique::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
