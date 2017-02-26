#-------------------------------------------------
#
# Project created by QtCreator 2016-04-08T18:07:47
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qt2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    interviewing_of_experts/dialogs/dialog.cpp \
    interviewing_of_experts/dialogs/dialog3.cpp \
    interviewing_of_experts/dialogs/dialog4.cpp \
    interviewing_of_experts/dialogs/dialog5.cpp \
    interviewing_of_experts/dialogs/dialog6.cpp \
    interviewing_of_experts/dialogs/dialog_clearifying_information.cpp \
    interviewing_of_experts/dialogs/dialog_conclusion.cpp \
    interviewing_of_experts/dialogs/gap.cpp \
    interviewing_of_experts/dialogs/nf.cpp \
    interviewing_of_experts/dialogs/nf2.cpp \
    interviewing_of_experts/dialogs/nf3.cpp \
    interviewing_of_experts/dialogs/nf4.cpp \
    interviewing_of_experts/dialogs/startdialog.cpp \
    interviewing_of_experts/dialogs/temp.cpp \
    interviewing_of_experts/model/model.cpp \
    interviewing_of_experts/model/pz.cpp \
    interviewing_of_experts/model/pz_converter.cpp \
    interviewing_of_experts/dialogs/task_type_definition_dialog.cpp

HEADERS  += mainwindow.h \
    libs/rapidxml/rapidxml.hpp \
    libs/rapidxml/rapidxml_iterators.hpp \
    libs/rapidxml/rapidxml_print.hpp \
    libs/rapidxml/rapidxml_utils.hpp \
    interviewing_of_experts/dialogs/dialog.h \
    interviewing_of_experts/dialogs/dialog3.h \
    interviewing_of_experts/dialogs/dialog4.h \
    interviewing_of_experts/dialogs/dialog5.h \
    interviewing_of_experts/dialogs/dialog6.h \
    interviewing_of_experts/dialogs/dialog_clearifying_information.h \
    interviewing_of_experts/dialogs/dialog_conclusion.h \
    interviewing_of_experts/dialogs/gap.h \
    interviewing_of_experts/dialogs/nf.h \
    interviewing_of_experts/dialogs/nf2.h \
    interviewing_of_experts/dialogs/nf3.h \
    interviewing_of_experts/dialogs/nf4.h \
    interviewing_of_experts/dialogs/startdialog.h \
    interviewing_of_experts/dialogs/temp.h \
    interviewing_of_experts/model/model.h \
    interviewing_of_experts/model/pz.h \
    interviewing_of_experts/model/pz_converter.h \
    interviewing_of_experts/dialogs/task_type_definition_dialog.h

FORMS    += mainwindow.ui \
    interviewing_of_experts/dialogs/startdialog.ui \
    interviewing_of_experts/dialogs/gap.ui \
    interviewing_of_experts/dialogs/dialog_conslusion.ui \
    interviewing_of_experts/dialogs/temp.ui \
    interviewing_of_experts/dialogs/nf4.ui \
    interviewing_of_experts/dialogs/nf3.ui \
    interviewing_of_experts/dialogs/nf2.ui \
    interviewing_of_experts/dialogs/nf.ui \
    interviewing_of_experts/dialogs/dialog_clearifying_information.ui \
    interviewing_of_experts/dialogs/dialog6.ui \
    interviewing_of_experts/dialogs/dialog5.ui \
    interviewing_of_experts/dialogs/dialog4.ui \
    interviewing_of_experts/dialogs/dialog3.ui \
    interviewing_of_experts/dialogs/dialog.ui \
    interviewing_of_experts/dialogs/task_type_definition_dialog.ui
