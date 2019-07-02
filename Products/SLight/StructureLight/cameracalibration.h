#ifndef CAMERACALIBRATION_H
#define CAMERACALIBRATION_H
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/calib3d/calib3d.hpp>
#include <QObject>
using namespace std;
using namespace cv;
class cameraCalibration : public QObject
{
    Q_OBJECT
public:
    explicit cameraCalibration(QObject *parent = nullptr, QString calibrationFilesPath = "../../../Pictures/Grap_frame");
    void findChessboardCorners_CameraCalibration();
    QString calibrationFilesPath;
    ofstream fout;
    QStringList files;
    cv::Size image_size;//����ͼƬ��С
    cv::Size pattern_size = cv::Size(6, 4);//�궨����ÿ�С�ÿ�еĽǵ���������ͼƬ�еı궨�����ڽǵ���Ϊ4*6
    vector<cv::Point2f> corner_points_buf;//��һ�����黺���⵽�Ľǵ㣬ͨ������Point2f��ʽ
    vector<cv::Point2f>::iterator corner_points_buf_ptr;
    vector<vector<cv::Point2f>> corner_points_of_all_imgs;


signals:

public slots:
};

#endif // CAMERACALIBRATION_H
