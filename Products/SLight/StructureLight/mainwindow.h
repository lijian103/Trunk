#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QButtonGroup>
#include <QDebug>
#include <thread>
#include <mutex>
#include <opencv2/core/core.hpp>
#include <opencv2/opencv.hpp>
extern std::mutex myMutex;//�߳���
extern int grapFlag;//ץȡ��־
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
};


#endif // MAINWINDOW_H
