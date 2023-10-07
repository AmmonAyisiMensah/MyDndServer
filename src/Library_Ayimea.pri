QT += core sql network serialbus concurrent widgets
qtConfig(modbus-serialport): QT += serialport

CONFIG += c++20

DEFINES += \
    QT_DEPRECATED_WARNINGS \
    LIBRARY_AYIMEA

# Ayimea Logo
RC_FILE = $$PWD/../Library_Ayimea/Resources/Ayimea.rc

# Ayimea Resources
RESOURCES += $$PWD/../Library_Ayimea/Resources/Ayimea.qrc

#Nodig voor snap 7
win32:LIBS += ../Library_Ayimea/Source/S7/libws2_32.a
win32:LIBS += ../Library_Ayimea/Source/S7/libwinmm.a

# Ayimea include and dependency paths
INCLUDEPATH += \
    $$PWD/../Library_Ayimea/Source/ \
    $$PWD/../Library_Ayimea/Source/App \
    $$PWD/../Library_Ayimea/Source/Database \
    $$PWD/../Library_Ayimea/Source/Driver \
    $$PWD/../Library_Ayimea/Source/Filesystem \
    $$PWD/../Library_Ayimea/Source/Modbus \
    $$PWD/../Library_Ayimea/Source/S7 \
    $$PWD/../Library_Ayimea/Source/PLC \
    $$PWD/../Library_Ayimea/Source/OPC \
    $$PWD/../Library_Ayimea/release \
    $$PWD/../Library_Ayimea/debug
DEPENDPATH += \
    $$PWD/../Library_Ayimea/release \
    $$PWD/../Library_Ayimea/debug

# Ayimea header includes
HEADERS += \
    $$PWD/../Library_Ayimea/Source/Library_Ayimea_global.h \
    $$PWD/../Library_Ayimea/Source/App/widgetapp.h \
    $$PWD/../Library_Ayimea/Source/Driver/opcda_pusher.h \
    $$PWD/../Library_Ayimea/Source/Database/crud_api.h \
    $$PWD/../Library_Ayimea/Source/Database/crud_interface.h \
    $$PWD/../Library_Ayimea/Source/Database/mysql.h \
    $$PWD/../Library_Ayimea/Source/Database/sql_connection.h \
    $$PWD/../Library_Ayimea/Source/FileSystem/filedef.h \
    $$PWD/../Library_Ayimea/Source/FileSystem/read.h \
    $$PWD/../Library_Ayimea/Source/FileSystem/scan.h \
    $$PWD/../Library_Ayimea/Source/Modbus/modbus_datatypes.h \
    $$PWD/../Library_Ayimea/Source/Modbus/modbusclient.h \
    $$PWD/../Library_Ayimea/Source/Modbus/modbusconfig.h \
    $$PWD/../Library_Ayimea/Source/Modbus/modbusrtumaster.h \
    $$PWD/../Library_Ayimea/Source/Modbus/modbusrtuslave.h \
    $$PWD/../Library_Ayimea/Source/Modbus/modbusserver.h \
    $$PWD/../Library_Ayimea/Source/Modbus/modbustcpclient.h \
    $$PWD/../Library_Ayimea/Source/Modbus/ui/clientregister.h \
    $$PWD/../Library_Ayimea/Source/Modbus/ui/createmodbusclient.h \
    $$PWD/../Library_Ayimea/Source/Modbus/ui/createmodbusserver.h \
    $$PWD/../Library_Ayimea/Source/Modbus/modbustcpserver.h \
    $$PWD/../Library_Ayimea/Source/Modbus/ui/modbusclientview.h \
    $$PWD/../Library_Ayimea/Source/Modbus/ui/modbusconfigview.h \
    $$PWD/../Library_Ayimea/Source/Modbus/ui/modbusserverview.h \
    $$PWD/../Library_Ayimea/Source/Modbus/ui/modbustag.h \
    $$PWD/../Library_Ayimea/Source/Modbus/ui/serverregister.h \
    $$PWD/../Library_Ayimea/Source/OPC/opcda.h \
    $$PWD/../Library_Ayimea/Source/OPC/opcdaclient.h \
    $$PWD/../Library_Ayimea/Source/OPC/opcuaclient.h \
    $$PWD/../Library_Ayimea/Source/OPC/ui/opcdaclientview.h \
    $$PWD/../Library_Ayimea/Source/PLC/block_item.h \
    $$PWD/../Library_Ayimea/Source/PLC/buffer_item.h \
    $$PWD/../Library_Ayimea/Source/PLC/plc_item.h \
    $$PWD/../Library_Ayimea/Source/PLC/s7network.h \
    $$PWD/../Library_Ayimea/Source/PLC/tag_item.h

# Link ayimea library
win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../Library_Ayimea/release/ -lLibrary_Ayimea
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../Library_Ayimea/debug/ -lLibrary_Ayimea
else:unix: LIBS += -L$$PWD/../Library_Ayimea/ -lLibrary_Ayimea



