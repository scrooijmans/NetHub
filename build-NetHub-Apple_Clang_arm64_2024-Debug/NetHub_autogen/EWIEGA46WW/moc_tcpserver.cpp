/****************************************************************************
** Meta object code from reading C++ file 'tcpserver.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../NetHub/tcpserver.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcpserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSTCPServerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSTCPServerENDCLASS = QtMocHelpers::stringData(
    "TCPServer",
    "serverError",
    "",
    "error",
    "newClientConnected",
    "clientDataReceived",
    "data",
    "clientDisconnected",
    "on_clientConnecting",
    "on_clientDisconnected",
    "on_clientDataReady"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTCPServerENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[10];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[19];
    char stringdata5[19];
    char stringdata6[5];
    char stringdata7[19];
    char stringdata8[20];
    char stringdata9[22];
    char stringdata10[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTCPServerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTCPServerENDCLASS_t qt_meta_stringdata_CLASSTCPServerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "TCPServer"
        QT_MOC_LITERAL(10, 11),  // "serverError"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 5),  // "error"
        QT_MOC_LITERAL(29, 18),  // "newClientConnected"
        QT_MOC_LITERAL(48, 18),  // "clientDataReceived"
        QT_MOC_LITERAL(67, 4),  // "data"
        QT_MOC_LITERAL(72, 18),  // "clientDisconnected"
        QT_MOC_LITERAL(91, 19),  // "on_clientConnecting"
        QT_MOC_LITERAL(111, 21),  // "on_clientDisconnected"
        QT_MOC_LITERAL(133, 18)   // "on_clientDataReady"
    },
    "TCPServer",
    "serverError",
    "",
    "error",
    "newClientConnected",
    "clientDataReceived",
    "data",
    "clientDisconnected",
    "on_clientConnecting",
    "on_clientDisconnected",
    "on_clientDataReady"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTCPServerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x06,    1 /* Public */,
       4,    0,   59,    2, 0x06,    3 /* Public */,
       5,    1,   60,    2, 0x06,    4 /* Public */,
       7,    0,   63,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   64,    2, 0x08,    7 /* Private */,
       9,    0,   65,    2, 0x08,    8 /* Private */,
      10,    0,   66,    2, 0x08,    9 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject TCPServer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSTCPServerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTCPServerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTCPServerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TCPServer, std::true_type>,
        // method 'serverError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'newClientConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clientDataReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'clientDisconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_clientConnecting'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_clientDisconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_clientDataReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TCPServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TCPServer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->serverError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->newClientConnected(); break;
        case 2: _t->clientDataReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->clientDisconnected(); break;
        case 4: _t->on_clientConnecting(); break;
        case 5: _t->on_clientDisconnected(); break;
        case 6: _t->on_clientDataReady(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TCPServer::*)(QString );
            if (_t _q_method = &TCPServer::serverError; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TCPServer::*)();
            if (_t _q_method = &TCPServer::newClientConnected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TCPServer::*)(QString );
            if (_t _q_method = &TCPServer::clientDataReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TCPServer::*)();
            if (_t _q_method = &TCPServer::clientDisconnected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *TCPServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TCPServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTCPServerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TCPServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void TCPServer::serverError(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TCPServer::newClientConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TCPServer::clientDataReceived(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TCPServer::clientDisconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
