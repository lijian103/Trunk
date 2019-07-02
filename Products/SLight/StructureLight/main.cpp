#include "mainwindow.h"
#include <QApplication>
#include <Windows.h>
#include <iostream>
#include "cameracalibration.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //cameraCalibration cali1(nullptr,"../../../Pictures/Grap_frame");
    //cali1.findChessboardCorners_CameraCalibration();
    MainWindow w;
    w.show();
    return a.exec();
}

