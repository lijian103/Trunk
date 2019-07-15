#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QButtonGroup>
#include <QDebug>
#include <thread>
#include <mutex>
// 加载OpenCV API
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/calib3d/calib3d.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/video/video.hpp>
// Namespace for using opencv.
using namespace std;

extern std::mutex myMutex;//线程锁
extern int grapFlag;//抓取标志
using namespace std;
namespace Ui {
class MainWindow;

}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    static void TestThread_1();
    static int cameraMode;
    static int cameraModeOlder ;
    static int thread_mode;
    static cv::Mat openCvImage;

private:
    Ui::MainWindow *ui;
    cv::VideoCapture videoCap;
    QButtonGroup *groupButton1;
    std::thread *new_thread;


protected:
     void closeEvent(QCloseEvent *event);

private slots:
    void timerUpDate();
    void showHardwarePictures();
    void cameraModeChoose();
    void grapPictures();
    void saveFourPictures();
    void selectDirPathDialg();
    void selectDirPathDialg_grapMode();
    void showGrapPictures();
    void checkBuffersInQueue_total();
    void getStartOrOff_UsbCamera(int state);
    void generate3DCloud();
};


#endif // MAINWINDOW_H
