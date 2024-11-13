/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ex00/include/mainwindow.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.0. It"
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
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "addContactSignal",
    "",
    "Contact*",
    "contact",
    "removeContactSignal",
    "std::string",
    "nameText",
    "emailtext",
    "phoneNumber",
    "refreshSignal",
    "addButtonPushed",
    "removeButtonPushed",
    "searchButtonPushed",
    "refreshButtonPushed",
    "refresh",
    "std::vector<Contact*>&",
    "contactList",
    "warningContactExists",
    "informationContactAdded"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   74,    2, 0x06,    1 /* Public */,
       5,    3,   77,    2, 0x06,    3 /* Public */,
      10,    0,   84,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    0,   85,    2, 0x08,    8 /* Private */,
      12,    0,   86,    2, 0x08,    9 /* Private */,
      13,    0,   87,    2, 0x08,   10 /* Private */,
      14,    0,   88,    2, 0x08,   11 /* Private */,
      15,    1,   89,    2, 0x0a,   12 /* Public */,
      18,    0,   92,    2, 0x0a,   14 /* Public */,
      19,    0,   93,    2, 0x0a,   15 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6,    7,    8,    9,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'addContactSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Contact *, std::false_type>,
        // method 'removeContactSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::string &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::string &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::string &, std::false_type>,
        // method 'refreshSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addButtonPushed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'removeButtonPushed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'searchButtonPushed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'refreshButtonPushed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'refresh'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::vector<Contact*> &, std::false_type>,
        // method 'warningContactExists'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'informationContactAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addContactSignal((*reinterpret_cast< std::add_pointer_t<Contact*>>(_a[1]))); break;
        case 1: _t->removeContactSignal((*reinterpret_cast< std::add_pointer_t<std::string>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::string>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<std::string>>(_a[3]))); break;
        case 2: _t->refreshSignal(); break;
        case 3: _t->addButtonPushed(); break;
        case 4: _t->removeButtonPushed(); break;
        case 5: _t->searchButtonPushed(); break;
        case 6: _t->refreshButtonPushed(); break;
        case 7: _t->refresh((*reinterpret_cast< std::add_pointer_t<std::vector<Contact*>&>>(_a[1]))); break;
        case 8: _t->warningContactExists(); break;
        case 9: _t->informationContactAdded(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(Contact * );
            if (_t _q_method = &MainWindow::addContactSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(const std::string & , const std::string & , const std::string & );
            if (_t _q_method = &MainWindow::removeContactSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (_t _q_method = &MainWindow::refreshSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::addContactSignal(Contact * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::removeContactSignal(const std::string & _t1, const std::string & _t2, const std::string & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::refreshSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
