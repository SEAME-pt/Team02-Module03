/****************************************************************************
** Meta object code from reading C++ file 'ContactList.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ex00/include/ContactList.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ContactList.hpp' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSContactListENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSContactListENDCLASS = QtMocHelpers::stringData(
    "ContactList",
    "sendContactListSignal",
    "",
    "std::vector<Contact*>&",
    "contactList",
    "contactAlreadyExists",
    "contactAdded",
    "addContact",
    "Contact*",
    "contact",
    "removeContact",
    "std::string",
    "nameText",
    "emailtext",
    "phoneNumber",
    "sendContactList"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSContactListENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    1 /* Public */,
       5,    0,   53,    2, 0x06,    3 /* Public */,
       6,    0,   54,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   55,    2, 0x0a,    5 /* Public */,
      10,    3,   58,    2, 0x0a,    7 /* Public */,
      15,    0,   65,    2, 0x0a,   11 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 11, 0x80000000 | 11,   12,   13,   14,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ContactList::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSContactListENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSContactListENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSContactListENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ContactList, std::true_type>,
        // method 'sendContactListSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::vector<Contact*> &, std::false_type>,
        // method 'contactAlreadyExists'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'contactAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addContact'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Contact *, std::false_type>,
        // method 'removeContact'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::string &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::string &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::string &, std::false_type>,
        // method 'sendContactList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ContactList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ContactList *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendContactListSignal((*reinterpret_cast< std::add_pointer_t<std::vector<Contact*>&>>(_a[1]))); break;
        case 1: _t->contactAlreadyExists(); break;
        case 2: _t->contactAdded(); break;
        case 3: _t->addContact((*reinterpret_cast< std::add_pointer_t<Contact*>>(_a[1]))); break;
        case 4: _t->removeContact((*reinterpret_cast< std::add_pointer_t<std::string>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::string>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<std::string>>(_a[3]))); break;
        case 5: _t->sendContactList(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ContactList::*)(std::vector<Contact*> & );
            if (_t _q_method = &ContactList::sendContactListSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ContactList::*)();
            if (_t _q_method = &ContactList::contactAlreadyExists; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ContactList::*)();
            if (_t _q_method = &ContactList::contactAdded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *ContactList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ContactList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSContactListENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ContactList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ContactList::sendContactListSignal(std::vector<Contact*> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ContactList::contactAlreadyExists()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ContactList::contactAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
