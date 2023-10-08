#ifndef LIBRARY_AYIMEA_GLOBAL_H
#define LIBRARY_AYIMEA_GLOBAL_H

#include <QtCore/qglobal.h>
#include <QObject>
#include <QDebug>
#include <QString>

#define AA_DIALOG_HINTS Qt::CustomizeWindowHint | Qt::WindowTitleHint | Qt::WindowSystemMenuHint

#if defined(LIBRARY_AYIMEA)
#  define AYIMEA_EXPORT Q_DECL_EXPORT
#else
#  define AYIMEA_EXPORT Q_DECL_IMPORT
#endif

#define AA_SUCCES 0
#define AA_FAILED 2

#define STYLE_DARK_AMBER "dark_amber"
#define STYLE_DARK_BLUE "dark_blue"
#define STYLE_DARK_CYAN "dark_cyan"
#define STYLE_DARK_LIGHTGREEN "dark_lightgreen"
#define STYLE_DARK_PINK "dark_pink"
#define STYLE_DARK_PURPLE "dark_purple"
#define STYLE_DARK_RED "dark_red"
#define STYLE_DARK_TEAL "dark_teal"
#define STYLE_DARK_YELLOW "dark_yellow"
#define STYLE_LIGHT_AMBER "light_amber"
#define STYLE_LIGHT_BLUE "light_blue"
#define STYLE_LIGHT_BLUE_500 "light_blue_500"
#define STYLE_LIGHT_CYAN "light_cyan"
#define STYLE_LIGHT_LIGHTGREEN "light_lightgreen"
#define STYLE_LIGHT_LIGHTGREEN_500 "light_lightgreen_500"
#define STYLE_LIGHT_PINK "light_pink"
#define STYLE_LIGHT_PURPLE "light_purple"
#define STYLE_LIGHT_PURPLE_500 "light_purple_500"
#define STYLE_LIGHT_RED "light_red"
#define STYLE_LIGHT_RED_500 "light_red_500"
#define STYLE_LIGHT_TEAL "light_teal"
#define STYLE_LIGHT_TEAL_500 "light_teal_500"
#define STYLE_LIGHT_YELLOW "light_yellow"

#endif // LIBRARY_AYIMEA_GLOBAL_H
