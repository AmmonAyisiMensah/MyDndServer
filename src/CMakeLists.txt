cmake_minimum_required(VERSION 3.5)

project(MyDndServer VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)
find_package(Qt6 REQUIRED COMPONENTS Sql)
find_package(Qt6 REQUIRED COMPONENTS Network)

include_directories(
    "LibraryAyimea"
)

set(PROJECT_SOURCES
        main.cpp
        mydndserver.h
        mydndserver.cpp
        mydndserver.ui
        register.h
        register.cpp
        register.ui
        assets.qrc
        LibraryAyimea/Library_Ayimea_global.h
        LibraryAyimea/widgetapp.h
        LibraryAyimea/widgetapp.cpp
        LibraryAyimea/Ayimea.rc
        LibraryAyimea/Ayimea.qrc
)

qt_add_executable(MyDndServer
    MANUAL_FINALIZATION
    ${PROJECT_SOURCES}
)


target_link_libraries(MyDndServer PRIVATE
    Qt6::Widgets
    Qt6::Sql
    Qt6::Network
)

set_target_properties(MyDndServer PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

install(TARGETS MyDndServer
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

qt_finalize_executable(MyDndServer)
