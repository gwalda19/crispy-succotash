#-------------------------------------------------
#
# Project created by QtCreator 2015-12-11T20:58:28
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Tutorial1
TEMPLATE = app


SOURCES += main.cpp \
    myrect.cpp \
    vector3d.cpp \
    src/uavController/CombatControllerImpl.cpp \
    src/uavController/ReconControllerImpl.cpp \
    src/uavController/SupplyControllerImpl.cpp \
    src/uavFactory/uavFactoryImpl.cpp \
    src/uavLogger/uavLogger.cpp \
    src/uavOperator/uavAutomaticOperator.cpp \
    src/uavOperator/uavUserOperator.cpp \
    src/AOOD_Project2_Main.cpp

HEADERS  += \
    myrect.h \
    vector3d.h \
    src/uavController/automaticDutiesProvider.h \
    src/uavController/CombatController.h \
    src/uavController/CombatControllerImpl.h \
    src/uavController/MissionModes.h \
    src/uavController/ReconController.h \
    src/uavController/ReconControllerImpl.h \
    src/uavController/SupplyController.h \
    src/uavController/SupplyControllerImpl.h \
    src/uavFactory/uavFactory.h \
    src/uavFactory/uavFactoryImpl.h \
    src/uavLogger/uavLogger.h \
    src/uavOperator/uavAutomaticOperator.h \
    src/uavOperator/uavUserOperator.h \
    src/uavOperator/userButtonActions.h

FORMS    +=
