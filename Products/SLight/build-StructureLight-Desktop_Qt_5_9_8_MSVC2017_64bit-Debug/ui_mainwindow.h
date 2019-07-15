/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_0;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QToolButton *toolButton_2;
    QPushButton *pushButton;
    QWidget *tab_1;
    QWidget *tab_2;
    QLabel *label_10;
    QWidget *tab_3;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_11;
    QLineEdit *lineEdit_2;
    QToolButton *toolButton;
    QPushButton *pushButton_2;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_4;
    QGridLayout *gridLayout_2;
    QLabel *label_70_2;
    QLabel *label_70_3;
    QLabel *label_70_1;
    QLabel *label_59_3;
    QLabel *label_59_1;
    QLabel *label_64_1;
    QLabel *label_64_2;
    QLabel *label_64_3;
    QLabel *label_59_2;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *radioButton_1;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1192, 765);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(199, 237, 195, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        MainWindow->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(20);
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Docs/ueg.ico"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/Docs/ueg.ico"), QSize(), QIcon::Normal, QIcon::On);
        MainWindow->setWindowIcon(icon);
        MainWindow->setIconSize(QSize(48, 48));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setMinimumSize(QSize(977, 541));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush2(QColor(170, 0, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        tabWidget->setPalette(palette1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(16);
        tabWidget->setFont(font1);
        tabWidget->setAutoFillBackground(true);
        tabWidget->setStyleSheet(QLatin1String("QTabBar::tab{width: 188px;height:46px;font:28px;color:black}\n"
"\n"
"\n"
"\n"
"QTabBar::tab:selected{margin-left: 1.5;margin-right: 1.5;color: black;background-color:rgb(132, 171, 208);} \n"
"\n"
"QTabBar::tab:!selected{margin-left: 1.5;margin-right: 1.5;color: black;background-color:rgb(230,247, 230);}\n"
"\n"
"\n"
"QTabBar::tab:hover:!selected{color: black;margin-left: 0;margin-right: 0;background-color:white;} \n"
"\n"
"QTabBar::tab:!selected{margin-top:8px;margin-bottom:-8px;}"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setDocumentMode(true);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(true);
        tabWidget->setTabBarAutoHide(false);
        tab_0 = new QWidget();
        tab_0->setObjectName(QStringLiteral("tab_0"));
        tab_0->setEnabled(true);
        QPalette palette2;
        tab_0->setPalette(palette2);
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setPointSize(16);
        font2.setBold(false);
        font2.setWeight(50);
        tab_0->setFont(font2);
        tab_0->setAutoFillBackground(true);
        tab_0->setStyleSheet(QStringLiteral(""));
        gridLayout_4 = new QGridLayout(tab_0);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        checkBox = new QCheckBox(tab_0);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(checkBox->sizePolicy().hasHeightForWidth());
        checkBox->setSizePolicy(sizePolicy);
        checkBox->setFont(font1);
        checkBox->setChecked(false);

        verticalLayout->addWidget(checkBox);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalSpacer_3 = new QSpacerItem(248, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_3);


        gridLayout_4->addLayout(verticalLayout, 0, 1, 1, 1);

        label_9 = new QLabel(tab_0);
        label_9->setObjectName(QStringLiteral("label_9"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush3(QColor(0, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        label_9->setPalette(palette3);
        label_9->setAutoFillBackground(true);
        label_9->setScaledContents(true);

        gridLayout_4->addWidget(label_9, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(tab_0);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        horizontalLayout_2->addWidget(label_4);

        lineEdit = new QLineEdit(tab_0);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font3.setPointSize(14);
        lineEdit->setFont(font3);

        horizontalLayout_2->addWidget(lineEdit);

        toolButton_2 = new QToolButton(tab_0);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setFont(font1);

        horizontalLayout_2->addWidget(toolButton_2);

        pushButton = new QPushButton(tab_0);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font1);

        horizontalLayout_2->addWidget(pushButton);


        gridLayout_4->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        tabWidget->addTab(tab_0, QString());
        tab_1 = new QWidget();
        tab_1->setObjectName(QStringLiteral("tab_1"));
        tab_1->setAutoFillBackground(true);
        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(11);
        sizePolicy1.setVerticalStretch(10);
        sizePolicy1.setHeightForWidth(tab_2->sizePolicy().hasHeightForWidth());
        tab_2->setSizePolicy(sizePolicy1);
        tab_2->setAutoFillBackground(true);
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(40, 20, 781, 491));
        label_10->setScaledContents(true);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tab_3->setAutoFillBackground(true);
        gridLayout_3 = new QGridLayout(tab_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_11 = new QLabel(tab_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font1);

        horizontalLayout_4->addWidget(label_11);

        lineEdit_2 = new QLineEdit(tab_3);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setFont(font3);
        lineEdit_2->setTabletTracking(false);
        lineEdit_2->setFrame(true);
        lineEdit_2->setDragEnabled(false);
        lineEdit_2->setReadOnly(false);
        lineEdit_2->setClearButtonEnabled(false);

        horizontalLayout_4->addWidget(lineEdit_2);

        toolButton = new QToolButton(tab_3);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        QFont font4;
        font4.setFamily(QStringLiteral("Arial"));
        font4.setPointSize(14);
        toolButton->setFont(font4);

        horizontalLayout_4->addWidget(toolButton);

        pushButton_2 = new QPushButton(tab_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font1);

        horizontalLayout_4->addWidget(pushButton_2);


        gridLayout_3->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalSpacer_2 = new QSpacerItem(178, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_2);

        pushButton_4 = new QPushButton(tab_3);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font5.setPointSize(20);
        pushButton_4->setFont(font5);

        verticalLayout_2->addWidget(pushButton_4);


        gridLayout_3->addLayout(verticalLayout_2, 0, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_70_2 = new QLabel(tab_3);
        label_70_2->setObjectName(QStringLiteral("label_70_2"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Base, brush);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        label_70_2->setPalette(palette4);
        label_70_2->setAutoFillBackground(true);
        label_70_2->setScaledContents(true);

        gridLayout_2->addWidget(label_70_2, 0, 1, 1, 1);

        label_70_3 = new QLabel(tab_3);
        label_70_3->setObjectName(QStringLiteral("label_70_3"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Base, brush);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        label_70_3->setPalette(palette5);
        label_70_3->setAutoFillBackground(true);
        label_70_3->setScaledContents(true);

        gridLayout_2->addWidget(label_70_3, 0, 2, 1, 1);

        label_70_1 = new QLabel(tab_3);
        label_70_1->setObjectName(QStringLiteral("label_70_1"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_70_1->sizePolicy().hasHeightForWidth());
        label_70_1->setSizePolicy(sizePolicy2);
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Base, brush);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        label_70_1->setPalette(palette6);
        label_70_1->setAutoFillBackground(true);
        label_70_1->setScaledContents(true);

        gridLayout_2->addWidget(label_70_1, 0, 0, 1, 1);

        label_59_3 = new QLabel(tab_3);
        label_59_3->setObjectName(QStringLiteral("label_59_3"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Base, brush);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        label_59_3->setPalette(palette7);
        label_59_3->setAutoFillBackground(true);
        label_59_3->setScaledContents(true);

        gridLayout_2->addWidget(label_59_3, 2, 2, 1, 1);

        label_59_1 = new QLabel(tab_3);
        label_59_1->setObjectName(QStringLiteral("label_59_1"));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::Base, brush);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        label_59_1->setPalette(palette8);
        label_59_1->setAutoFillBackground(true);
        label_59_1->setScaledContents(true);

        gridLayout_2->addWidget(label_59_1, 2, 0, 1, 1);

        label_64_1 = new QLabel(tab_3);
        label_64_1->setObjectName(QStringLiteral("label_64_1"));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::Base, brush);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        label_64_1->setPalette(palette9);
        label_64_1->setAutoFillBackground(true);
        label_64_1->setFrameShape(QFrame::NoFrame);
        label_64_1->setScaledContents(true);

        gridLayout_2->addWidget(label_64_1, 1, 0, 1, 1);

        label_64_2 = new QLabel(tab_3);
        label_64_2->setObjectName(QStringLiteral("label_64_2"));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::Base, brush);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        label_64_2->setPalette(palette10);
        label_64_2->setAutoFillBackground(true);
        label_64_2->setScaledContents(true);

        gridLayout_2->addWidget(label_64_2, 1, 1, 1, 1);

        label_64_3 = new QLabel(tab_3);
        label_64_3->setObjectName(QStringLiteral("label_64_3"));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::Base, brush);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        label_64_3->setPalette(palette11);
        label_64_3->setAutoFillBackground(true);
        label_64_3->setScaledContents(true);

        gridLayout_2->addWidget(label_64_3, 1, 2, 1, 1);

        label_59_2 = new QLabel(tab_3);
        label_59_2->setObjectName(QStringLiteral("label_59_2"));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::Base, brush);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        label_59_2->setPalette(palette12);
        label_59_2->setAutoFillBackground(true);
        label_59_2->setScaledContents(true);

        gridLayout_2->addWidget(label_59_2, 2, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tab_4->setAutoFillBackground(true);
        tabWidget->addTab(tab_4, QString());

        horizontalLayout->addWidget(tabWidget);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy3);
        QFont font6;
        font6.setPointSize(18);
        groupBox->setFont(font6);
        groupBox->setCheckable(false);
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        radioButton_1 = new QRadioButton(groupBox);
        radioButton_1->setObjectName(QStringLiteral("radioButton_1"));
        radioButton_1->setChecked(true);

        verticalLayout_4->addWidget(radioButton_1);

        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        verticalLayout_4->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        verticalLayout_4->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(groupBox);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));

        verticalLayout_4->addWidget(radioButton_4);


        verticalLayout_5->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_5);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QPalette palette13;
        QBrush brush4(QColor(255, 0, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        QBrush brush5(QColor(120, 120, 120, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        label->setPalette(palette13);
        QFont font7;
        font7.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font7.setPointSize(12);
        font7.setBold(true);
        font7.setWeight(75);
        label->setFont(font7);
        label->setTextFormat(Qt::AutoText);

        horizontalLayout_3->addWidget(label);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1192, 23));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "StructuredLight", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainWindow", "USB\347\233\270\346\234\272\346\211\223\345\274\200/\345\205\263\351\227\255", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\350\267\257\345\276\204\357\274\232", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("MainWindow", "D:/Trunk/Pictures/Grap_frame", Q_NULLPTR));
        toolButton_2->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Grap_Frame", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButton->setShortcut(QApplication::translate("MainWindow", "Ctrl+G", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        tabWidget->setTabText(tabWidget->indexOf(tab_0), QApplication::translate("MainWindow", "\345\233\276\347\211\207\346\215\225\346\215\211", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QApplication::translate("MainWindow", "\347\233\270\346\234\272/\346\212\225\345\275\261\344\273\252", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\347\263\273\347\273\237\346\240\207\345\256\232", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\350\267\257\345\276\204\357\274\232", Q_NULLPTR));
        lineEdit_2->setText(QApplication::translate("MainWindow", "D:/Trunk/Pictures/Hardware_trigger_frame/Htf", Q_NULLPTR));
        toolButton->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "\345\255\230\345\233\276", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "\347\224\237\346\210\220\347\202\271\344\272\221", Q_NULLPTR));
        label_70_2->setText(QString());
        label_70_3->setText(QString());
        label_70_1->setText(QString());
        label_59_3->setText(QString());
        label_59_1->setText(QString());
        label_64_1->setText(QString());
        label_64_2->setText(QString());
        label_64_3->setText(QString());
        label_59_2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\347\273\223\346\236\204\345\205\211\346\211\253\346\217\217", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "3D\347\202\271\344\272\221\346\230\276\347\244\272", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "\347\233\270\346\234\272\346\250\241\345\274\217", Q_NULLPTR));
        radioButton_1->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255\347\233\270\346\234\272", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("MainWindow", "\350\277\236\347\273\255\351\207\207\351\233\206\346\250\241\345\274\217", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("MainWindow", "\347\241\254\344\273\266\350\247\246\345\217\221\346\250\241\345\274\217", Q_NULLPTR));
        radioButton_4->setText(QApplication::translate("MainWindow", "\350\275\257\344\273\266\350\247\246\345\217\221\346\250\241\345\274\217", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
