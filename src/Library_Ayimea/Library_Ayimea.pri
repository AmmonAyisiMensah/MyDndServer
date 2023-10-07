QT += \
    core \
    sql \
    #network \
    #serialbus \
    concurrent \
    widgets
#qtConfig(modbus-serialport): QT += serialport

CONFIG += c++20

DEFINES += \
    QT_DEPRECATED_WARNINGS \
    LIBRARY_AYIMEA

# Ayimea Logo
RC_FILE = $$PWD/Ayimea.rc

# Ayimea Resources
RESOURCES += $$PWD/Ayimea.qrc

#Nodig voor snap 7
#win32:LIBS += ../Library_Ayimea/Source/S7/libws2_32.a
#win32:LIBS += ../Library_Ayimea/Source/S7/libwinmm.a

# Ayimea include and dependency paths
INCLUDEPATH += \
    $$PWD/ \
    $$PWD/../build/x86/release \
    $$PWD/../build/x86/debug
DEPENDPATH += \
    $$PWD/../build/x86/release \
    $$PWD/../build/x86/debug

# Ayimea header includes
HEADERS += \
    $$PWD/Library_Ayimea_global.h \
    $$PWD/widgetapp.h \
    $$PWD/serviceapp.h \
    $$PWD/loghandler.h \
    $$PWD/crud_api.h \
    $$PWD/crud_interface.h \
    $$PWD/sql_connection.h \
    $$PWD/mysql.h \
    $$PWD/sqlserver.h \

# Link ayimea library
win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../Library_Ayimea/release/ -lLibrary_Ayimea
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../Library_Ayimea/debug/ -lLibrary_Ayimea
else:unix: LIBS += -L$$PWD/../Library_Ayimea/ -lLibrary_Ayimea



