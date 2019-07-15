#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>
#include <QDebug>
#include <QFileDialog>
#include <QMessageBox>
#include <QCloseEvent>
#include <string>
#include <Windows.h>
#include <iostream>
#include "Inc/Camera.h"
using namespace cv;
std::mutex myMutex;//线程锁
int grapFlag = 1;
QImage disImage = QImage(10,10,QImage::Format_Grayscale8);
//初始化静态成员变量
int MainWindow::cameraMode = 0;
int MainWindow::cameraModeOlder = 0;
int MainWindow::thread_mode = 1;
cv::Mat MainWindow::openCvImage = cv::Mat(10,10,CV_8UC1);

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //ui->tabWidget->setStyleSheet("QTabBar::tab:selected {color: blue;}");

    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timerUpDate()));
    timer->start(1000);

    QTimer *timerShowGrapPictures = new QTimer(this);
    connect(timerShowGrapPictures,SIGNAL(timeout()),this,SLOT(showGrapPictures()));
    timerShowGrapPictures->start(30);

    QTimer *timerShowHardwarePictures = new QTimer(this);
    connect(timerShowHardwarePictures,SIGNAL(timeout()),this,SLOT(showHardwarePictures()));
    timerShowHardwarePictures->start(3000);

    QTimer *timerCheckBuffersInQueue_total = new QTimer(this);
    connect(timerCheckBuffersInQueue_total,SIGNAL(timeout()),this,SLOT(checkBuffersInQueue_total()));
    timerCheckBuffersInQueue_total->start(2000);

    //开启一个线程
    this->new_thread=new std::thread(TestThread_1);
    this->new_thread->detach();

    //**************Button
    connect(ui->pushButton_4,SIGNAL(clicked(bool)),
                this,SLOT(generate3DCloud()));
    //**************Radion Button
    groupButton1=new QButtonGroup(this);
    groupButton1->addButton(ui->radioButton_1,0);
    groupButton1->addButton(ui->radioButton_2,1);
    groupButton1->addButton(ui->radioButton_3,2);
    groupButton1->addButton(ui->radioButton_4,3);
    connect(ui->radioButton_1,SIGNAL(clicked(bool)),
                this,SLOT(cameraModeChoose()));
    connect(ui->radioButton_2,SIGNAL(clicked(bool)),
            this,SLOT(cameraModeChoose()));
    connect(ui->radioButton_3,SIGNAL(clicked(bool)),
            this,SLOT(cameraModeChoose()));
    connect(ui->radioButton_4,SIGNAL(clicked(bool)),
            this,SLOT(cameraModeChoose()));

    //**************check BOX
    connect(ui->checkBox,SIGNAL( stateChanged(int)),
            this,SLOT(getStartOrOff_UsbCamera(int)));

    //**************grap pictures Button***************
    connect(ui->pushButton,SIGNAL(clicked(bool)),
                this,SLOT(grapPictures()));
    connect(ui->pushButton_2,SIGNAL(clicked(bool)),
            this,SLOT(saveFourPictures()));
    connect(ui->toolButton,SIGNAL(clicked(bool)),
            this,SLOT(selectDirPathDialg()));
    connect(ui->toolButton_2,SIGNAL(clicked(bool)),
            this,SLOT(selectDirPathDialg_grapMode()));
}

MainWindow::~MainWindow()
{
    delete this->new_thread;
    delete this->ui;
}

void MainWindow::timerUpDate()
{
    QDateTime time = QDateTime::currentDateTime();
    //获取系统现在的时间
    QString str = time.toString("yyyy-MM-dd hh:mm:ss dddd");
    //设置系统时间显示格式
    ui->label->setText(str);

}

void MainWindow::checkBuffersInQueue_total()
{
    if(MainWindow::cameraMode == 2)
    {
        static int  old_nBuffersInQueue_total_1= 0;
        static int  old_nBuffersInQueue_total_2= 0;
        static int  old_nBuffersInQueue_total_3= 0;
        if((nBuffersInQueue_total==old_nBuffersInQueue_total_1)&&(nBuffersInQueue_total==old_nBuffersInQueue_total_2)&&(nBuffersInQueue_total==old_nBuffersInQueue_total_3))
        {
            if(nBuffersInQueue_total != 0)
            {
                nBuffersInQueue_total=0;
                image_id = 0;
            }

        }
        old_nBuffersInQueue_total_3 = old_nBuffersInQueue_total_2;
        old_nBuffersInQueue_total_2 =old_nBuffersInQueue_total_1;
        old_nBuffersInQueue_total_1 = nBuffersInQueue_total;

    }
}

void MainWindow::getStartOrOff_UsbCamera(int state)
{
    if (state == Qt::Checked) // "选中"
    {
        //从摄像头捕获视频
        if(videoCap.open(0))
        {
            MainWindow::openCvImage = Mat::zeros(videoCap.get(CAP_PROP_FRAME_HEIGHT), videoCap.get(CAP_PROP_FRAME_WIDTH), CV_8UC3);
            qDebug() <<"********************USB camera open********************"<<endl;
        }

    }
    else // 未选中 - Qt::Unchecked
    {
        videoCap.release();
        qDebug() <<"********************USB camera release********************"<<endl;
    }

}


void MainWindow::showGrapPictures()
{
    if(MainWindow::cameraMode == 0)
    {
        if(ui->checkBox->isChecked()==true)
        {
            videoCap>>MainWindow::openCvImage;
            if(MainWindow::openCvImage.data)
            {
                cvtColor(MainWindow::openCvImage, MainWindow::openCvImage, cv::COLOR_BGR2GRAY);//Qt中支持的是RGB图像, OpenCV中支持的是BGR
                QImage disImage = QImage((uchar*)(MainWindow::openCvImage.data), MainWindow::openCvImage.cols, MainWindow::openCvImage.rows, QImage::Format_Grayscale8);
                ui->label_9->setPixmap(QPixmap::fromImage(disImage));
            }
        }
    }
    myMutex.lock();
    if(MainWindow::cameraMode == 1 && grapFlag == 0 && MainWindow::cameraModeOlder == 1)
    {
           disImage = QImage((const unsigned char*)(MainWindow::openCvImage.data),MainWindow::openCvImage.cols,MainWindow::openCvImage.rows,QImage::Format_Grayscale8);
//         QGraphicsScene *scene = new QGraphicsScene;//图像显示
//         scene->addPixmap(QPixmap::fromImage(disImage));
//         ui->graphicsView->setScene(scene);
//         ui->graphicsView->show();
         //ui->label_9->setPixmap(QPixmap::fromImage(disImage.scaled(ui->label_9->size(), Qt::KeepAspectRatio)));
           ui->label_9->setPixmap(QPixmap::fromImage(disImage));
    }

    myMutex.unlock();
}

void MainWindow::grapPictures()
{
    static int index = 0;
    QDateTime time = QDateTime::currentDateTime();
    QString str = time.toString("yyyyMMddhhmmss_");
//    string filename = "../../../Pictures/Grap_frame/";
    QString path = ui->lineEdit->text();
    QDir temp;
    bool exist = temp.exists(path);
    if(!exist)
    {
       bool ok = temp.mkdir(path);
       if( ok )
           qDebug()<<"create Dir ok!!!";
    }
    string filename = path.toStdString();
    filename=filename+"/"+str.toStdString()+std::to_string(index)+"bmp";
    cv::imwrite(filename,MainWindow::openCvImage);
    index++;
}

void MainWindow::saveFourPictures()
{
    QString path = ui->lineEdit_2->text();
    QDir temp;
    bool exist = temp.exists(path);
    if(!exist)
    {
       bool ok = temp.mkdir(path);
       if( ok )
           qDebug()<<"create Dir ok!!!";
    }

    QDir dir("../../../Pictures/Hardware_trigger_frame");
    QStringList nameFilters;
    nameFilters << "*.jpg" << "*.png"<<"*.bmp";
    QStringList files = dir.entryList(nameFilters, QDir::NoSymLinks|QDir::Dirs|QDir::Files|QDir::Readable|QDir::NoDotAndDotDot , QDir::Name);
    foreach (QString var, files)
    {
        qDebug()<<"../../../Pictures/Hardware_trigger_frame/"+var;
        QFile::copy("../../../Pictures/Hardware_trigger_frame/"+var, path+"/"+var);
    }

}

void MainWindow::selectDirPathDialg()
{
    QString file_path = QFileDialog::getExistingDirectory(this,QString::fromStdWString(L"请选择文件夹路径"), "../../../Pictures/Hardware_trigger_frame/");
    ui->lineEdit_2->setText(file_path);
}

void MainWindow::selectDirPathDialg_grapMode()
{
    QString file_path = QFileDialog::getExistingDirectory(this,QString::fromStdWString(L"请选择文件夹路径"), "../../../Pictures/");
    ui->lineEdit->setText(file_path);
}

void MainWindow::cameraModeChoose()
{
      switch(this->groupButton1->checkedId())
      {
          case 0:
              MainWindow::cameraMode = 0;
              ui->tabWidget->setCurrentIndex(0);
              break;
          case 1:
              MainWindow::cameraMode = 1;
              ui->tabWidget->setCurrentIndex(0);
              break;
          case 2:
              MainWindow::cameraMode = 2;
              ui->tabWidget->setCurrentIndex(3);
              break;
          case 3:
              ui->tabWidget->setCurrentIndex(0);
              MainWindow::cameraMode = 3;
              break;
          default:
               qDebug() <<"default"<<endl;
               break;
      }


}

void MainWindow::showHardwarePictures()
{    

    if(MainWindow::cameraMode == 2)
    {
       static QLabel *temp[]={ui->label_70_1,ui->label_70_2,ui->label_70_3,
                        ui->label_64_1,ui->label_64_2,ui->label_64_3,
                        ui->label_59_1,ui->label_59_2,ui->label_59_3
                       };
         myMutex.lock();
         QImage disImage;
         QString path="../../../Pictures/Hardware_trigger_frame/";
         for (int i=0;i<9;i++)
         {
             disImage.load(path+QString::fromStdString(img_name[i]));

             //temp[i]->setPixmap(QPixmap::fromImage(disImage.scaled(temp[i]->size(), Qt::KeepAspectRatioByExpanding)));
             temp[i]->setPixmap(QPixmap::fromImage(disImage));
         }
         myMutex.unlock();
    }

}

void MainWindow::closeEvent(QCloseEvent *event)
{
    //TODO: 在退出窗口之前，实现希望做的操作
    switch( QMessageBox::information(this, tr("Quit Control View ?"),
                                     tr("Do you really want to quit Control View ?"),
                                     tr("Yes"), tr("No")
                                     ))
        {
            case 0:
                MainWindow::cameraMode = 0;
                MainWindow::thread_mode = 0;
                cv::waitKey(1000);
                event->accept();
                break;
            case 1:
            default:
                event->ignore();
                break;
        }
}


void MainWindow::TestThread_1()
{   
    PylonCamera camera;
    while (MainWindow::thread_mode)
    {
        Sleep(1000);
        switch(MainWindow::cameraMode)
        {
           case 0:
               MainWindow::cameraModeOlder=0;
               qDebug()<<QString::fromStdWString(L"******相机关闭状态*******");
               break;
           case 1:
              //切换抓取模式初始化
               Sleep(1000);
               qDebug()<<"************************init_grap_mode****************************"<<endl;
               PylonInitialize();
               camera.ptrCamera =new CInstantCamera(CTlFactory::GetInstance().CreateFirstDevice());
               camera.initCameraGrap();
               MainWindow::cameraModeOlder=1;
               while(MainWindow::cameraMode == 1)
               {
                   qDebug() <<"************************camera_grap_trigger*****************************"<<endl;

                   camera.CameraGrap();
                   //uint8_t *pImageBuffer = (uint8_t *)camera.ptrGrabResult->GetBuffer();
                   //MainWindow::openCvImage=cv::Mat((int)camera.ptrGrabResult->GetHeight(), (int)camera.ptrGrabResult->GetWidth(), CV_8UC1,pImageBuffer);
               }
               myMutex.lock();
               camera.ptrCamera->StopGrabbing();
               PylonTerminate();
               delete  camera.ptrCamera;
               camera.ptrCamera=nullptr;
               myMutex.unlock();
               break;
           case 2:
               Sleep(1000);
               //切换硬件触发模式初始化
               MainWindow::cameraModeOlder=2;
               qDebug()<<"************************init_hardware_trigger****************************"<<endl;
               PylonInitialize();
               camera.ptrCamera =new CInstantCamera(CTlFactory::GetInstance().CreateFirstDevice());
               camera.initGrab_Strategies();
               while(MainWindow::cameraMode == 2)
               {
                   Sleep(100);
                   //myMutex.lock();
                   qDebug() <<"********************camera_hardware_trigger********************"<<endl;
                   camera.Grab_Strategies();
                   //myMutex.unlock();
               }
               //Stop the grabbing.
               myMutex.lock();
               camera.ptrCamera->StopGrabbing();
               PylonTerminate();
               delete  camera.ptrCamera;
               camera.ptrCamera=nullptr;
               myMutex.unlock();

               break;

        case 3:
               qDebug()<<QString::fromStdWString(L"******相机关闭状态*******");
               MainWindow::cameraModeOlder=3;
               break;
           default:
                qDebug() <<"default"<<endl;
                break;
       }
    }
}


void MainWindow::generate3DCloud()
{
    ui->tabWidget->setCurrentIndex(4);
}
