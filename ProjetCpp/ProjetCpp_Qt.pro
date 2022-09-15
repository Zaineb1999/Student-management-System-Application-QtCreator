QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ProjetCpp_Qt
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

CONFIG += c++11

SOURCES += \
    main.cpp \
    ProjetCpp.cpp \
    StuDialog.cpp \
    StuSubWindow.cpp \
    StuInfoTemplate.cpp \
    StyleSelector.cpp \
    SortDialog.cpp \
    LoginDialog.cpp \
    FilterDialog.cpp

HEADERS += \
    ProjetCpp.h \
    StuDialog.h \
    StuSubWindow.h \
    StuInfoTemplate.h \
    StyleSelector.h \
    config.h \
    SortDialog.h \
    LoginDialog.h \
    FilterDialog.h

FORMS += \
    ProjetCpp.ui \
    StuDialog.ui \
    StuSubWindow.ui \
    SortDialog.ui \
    LoginDialog.ui \
    FilterDialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc

RC_FILE = ProjetCpp.rc
