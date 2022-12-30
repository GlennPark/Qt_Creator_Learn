QT += testlib
QT -= gui

#$ qmake -project CONFIG+=qttest
#$ qmake && make
CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_stringtest.cpp
