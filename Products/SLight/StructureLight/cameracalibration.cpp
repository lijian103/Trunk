#include "cameracalibration.h"
#include <QFileInfo>
#include <QDebug>
#include <QDir>


cameraCalibration::cameraCalibration(QObject *parent,QString calibrationFilesPath) : QObject(parent)
{
    this->calibrationFilesPath = calibrationFilesPath;
    QFileInfo fileinfo(this->calibrationFilesPath);
    if(!fileinfo.isDir())
    {
        cout << "没有找到文件夹:calibrationFilesPath" << endl;
        exit(1);
    }
    QDir dir(this->calibrationFilesPath);
    QStringList nameFilters;
    nameFilters << "*.jpg" << "*.png"<< "*.bmp";
    this->files = dir.entryList(nameFilters, QDir::NoSymLinks|QDir::Files|QDir::Readable|QDir::NoDotAndDotDot , QDir::Name);
    fout.open(this->calibrationFilesPath.toStdString()+"/caliberation_result.txt");   //保存标定结果的文件

}


void cameraCalibration::findChessboardCorners_CameraCalibration()
{
    int image_num = 0;
    foreach (QString var, this->files)
    {
        image_num ++;
        string imagePath = this->calibrationFilesPath.toStdString() + "/" + var.toStdString();
        fout << imagePath <<endl;
        cv::Mat imageInput = cv::imread(imagePath);
        if(image_num == 1)
        {
            this->image_size.width = imageInput.cols;
            this->image_size.height = imageInput.rows;
            cout << "image_size.width = " << image_size.width << endl;
            cout << "image_size.height = " << image_size.height << endl;
            fout << "image_size.width = " << image_size.width << endl;
            fout << "image_size.height = " << image_size.height << endl;
        }

        if (findChessboardCorners(imageInput, pattern_size, corner_points_buf) == 0)
        {
            cout << "can not find chessboard corners!\n";   //找不到角点
            exit(1);
        }
        else
        {
            cv::Mat gray;
            cv::cvtColor(imageInput, gray,  cv::COLOR_BGR2GRAY);
            gray = imageInput;
            cv::find4QuadCornerSubpix(gray, this->corner_points_buf, cv::Size(5, 5));
            corner_points_of_all_imgs.push_back(this->corner_points_buf);
            cv::drawChessboardCorners(gray, this->pattern_size, this->corner_points_buf, true);


            cv::imwrite(this->calibrationFilesPath.toStdString()+"/to_string(image_num)_drawChess_"+var.toStdString(),gray);
            cv::imshow("camera calibration:"+to_string(image_num), gray);
            cv::waitKey(100);
        }

    }
    unsigned long long total = this->corner_points_of_all_imgs.size();
    cout << "total=" << total << endl;
    int cornerNum = pattern_size.width * pattern_size.height;//每张图片上的总的角点数
    for (int i = 0; i < total;i++)
    {
        fout << "-->" << this->files[i].toStdString()<< "-->"<<"图片的数据 :"<< endl;
        for (int j = 0;j < cornerNum;j++)
        {
            fout << "point:" << corner_points_of_all_imgs[i][j].x;
            fout << "-->" << corner_points_of_all_imgs[i][j].y;
            if ((j + 1) % 3 == 0)
            {
               fout << endl;
            }
            else
            {
                   fout.width(10);
            }
           }
           fout << endl;
       }

       fout << endl << "角点提取完成" << endl;
}


