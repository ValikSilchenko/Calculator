#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include <QtWidgets/QStackedWidget>
#include <QtGui/QIcon>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *layoutWithMainBtns;
    QGridLayout *layoutWithSpecialBtns;
    QGridLayout *gridLayout_centralwidget;
    QGridLayout *gridLayout_scrollArea;
    QGridLayout *layoutWithSwitchBtn;
    QGridLayout *gridLayout_page;
    QGridLayout *gridLayout_page2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *optLabel;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_switch;
    QPushButton *clearButton;
    QPushButton *delLastSymbBtn;
    QPushButton *reverseButton;
    QPushButton *sqrButton;
    QPushButton *sqrtButton;
    QPushButton *pushButton_div;
    QPushButton *negativeButton;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_mult;
    QPushButton *floatButton;
    QPushButton *resultButton;
    QPushButton *pushButton_0;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QButtonGroup *digitsBtnGroup;
    QButtonGroup *binaryBtnGroup;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page2;

    QLineEdit *line1_1;
    QLineEdit *line1_2;
    QLineEdit *line1_3;
    QLineEdit *line1_5;
    QLineEdit *line1_4;
    QLineEdit *line1_6;
    QLineEdit *line1_8;
    QLineEdit *line1_7;
    QLineEdit *line1_9;
    QLineEdit *line2_9;
    QLineEdit *line2_8;
    QLineEdit *line2_2;
    QLineEdit *line2_6;
    QLineEdit *line2_4;
    QLineEdit *line2_7;
    QLineEdit *line2_1;
    QLineEdit *line2_3;
    QLineEdit *line2_5;
    QLineEdit *line3_9;
    QLineEdit *line3_8;
    QLineEdit *line3_2;
    QLineEdit *line3_6;
    QLineEdit *line3_4;
    QLineEdit *line3_7;
    QLineEdit *line3_1;
    QLineEdit *line3_3;
    QLineEdit *line3_5;
    QLabel *text_action;
    QLabel *text_ravno;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *multi_radioButton;
    QRadioButton *plus_radioButton;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLabel *det_b_label;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLabel *det_c_label;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *det_a_label;
    QPushButton *pushButton;
    QPushButton *pushButton_switchToMain;

    QPushButton *cubeButton;
    QPushButton *cubeRootButton;
    QPushButton *twoInPowerButton;
    QPushButton *tenInPowerButton;
    QPushButton *rootButton;
    QPushButton *eInPowerButton;
    QPushButton *natLogButton;
    QPushButton *powerButton;
    QPushButton *decLogButton;
    QPushButton *logButton;
    QPushButton *eButton;
    QPushButton *piButton;
    QPushButton *moduleButton;
    QPushButton *factButton;
    QPushButton *rightBracketButton;
    QPushButton *leftBracketButton;
    QGridLayout *layoutWithOptButtons;


    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
                MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
           MainWindow->resize(551, 622);
           MainWindow->setMinimumSize(QSize(551, 622));
           MainWindow->setStyleSheet(QString::fromUtf8(""));
           centralwidget = new QWidget(MainWindow);
           centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
           gridLayout_centralwidget = new QGridLayout(centralwidget);
           gridLayout_centralwidget->setSpacing(3);
           gridLayout_centralwidget->setObjectName(QString::fromUtf8("gridLayout_centralwidget"));
           gridLayout_centralwidget->setContentsMargins(5, 5, 5, 5);
           stackedWidget = new QStackedWidget(centralwidget);
           stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
           page = new QWidget();
           page->setObjectName(QString::fromUtf8("page"));
           gridLayout_page = new QGridLayout(page);
           gridLayout_page->setObjectName(QString::fromUtf8("gridLayout_page"));
           gridLayout_page->setContentsMargins(0, 0, 0, 0);
           layoutWithSwitchBtn = new QGridLayout();
           layoutWithSwitchBtn->setSpacing(0);
           layoutWithSwitchBtn->setObjectName(QString::fromUtf8("layoutWithSwitchBtn"));
           layoutWithSwitchBtn->setSizeConstraint(QLayout::SetNoConstraint);
           horizontalSpacer = new QSpacerItem(150, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

           page2 = new QWidget();
           page2->setObjectName(QString::fromUtf8("page2"));

            /* ///////////////////////////
              ///////////////////////////
              matrix calculator design
              /////////////////////////////
            /////////////////////////////*/

            line1_1 = new QLineEdit(page2);
            line1_1->setObjectName(QString::fromUtf8("line1_1"));
            line1_1->setGeometry(QRect(30, 40, 51, 51));
            line1_1->setStyleSheet(QString::fromUtf8("text-align: center;\n"
                                                                                    "\n"
                                                                                    ""
"font-size: 25px;"));
            line1_1->setAlignment(Qt::AlignCenter);
            line1_2 = new QLineEdit(page2);
            line1_2->setObjectName(QString::fromUtf8("line1_2"));
            line1_2->setGeometry(QRect(90, 40, 51, 51));
            line1_2->setStyleSheet(QString::fromUtf8("text-align: center;\n"
                                                                                    "\n"
                                                                                    "font-size: 25px;"));
            line1_2->setAlignment(Qt::AlignCenter);
            line1_3 = new QLineEdit(page2);
            line1_3->setObjectName(QString::fromUtf8("line1_3"));
            line1_3->setGeometry(QRect(150, 40, 51, 51));
            line1_3->setStyleSheet(QString::fromUtf8("text-align: center;\n"
                                                                                    "\n"
                                                                                    "font-size: 25px;"));
            line1_3->setAlignment(Qt::AlignCenter);
            line1_5 = new QLineEdit(page2);
            line1_5->setObjectName(QString::fromUtf8("line1_5"));
            line1_5->setGeometry(QRect(90, 100, 51, 51));
            line1_5->setStyleSheet(QString::fromUtf8("text-align: center;\n"
                                                                                    "\n"
                                                                                    "font-size: 25px;"));
            line1_5->setAlignment(Qt::AlignCenter);
            line1_4 = new QLineEdit(page2);
            line1_4->setObjectName(QString::fromUtf8("line1_4"));
            line1_4->setGeometry(QRect(30, 100, 51, 51));
            line1_4->setStyleSheet(QString::fromUtf8("text-align: center;\n"
                                                                                    "\n"
                                                                                    "font-size: 25px;"));
            line1_4->setAlignment(Qt::AlignCenter);
            line1_6 = new QLineEdit(page2);
            line1_6->setObjectName(QString::fromUtf8("line1_6"));
            line1_6->setGeometry(QRect(150, 100, 51, 51));
            line1_6->setStyleSheet(QString::fromUtf8("text-align: center;\n"
                                                                                    "\n"
                                                                                    "font-size: 25px;"));
            line1_6->setAlignment(Qt::AlignCenter);
            line1_8 = new QLineEdit(page2);
            line1_8->setObjectName(QString::fromUtf8("line1_8"));
            line1_8->setGeometry(QRect(90, 160, 51, 51));
            line1_8->setStyleSheet(QString::fromUtf8("text-align: center;\n"
                                                                                    "\n"
                                                                                    "font-size: 25px;"));
            line1_8->setAlignment(Qt::AlignCenter);
            line1_7 = new QLineEdit(page2);
            line1_7->setObjectName(QString::fromUtf8("line1_7"));
            line1_7->setGeometry(QRect(30, 160, 51, 51));
            line1_7->setStyleSheet(QString::fromUtf8("text-align: center;\n"
                                                                                    "\n"
                                                                                    "font-size: 25px;"));
            line1_7->setAlignment(Qt::AlignCenter);
            line1_9 = new QLineEdit(page2);
            line1_9->setObjectName(QString::fromUtf8("line1_9"));
            line1_9->setGeometry(QRect(150, 160, 51, 51));
            line1_9->setStyleSheet(QString::fromUtf8("text-align: center;\n"
                                                                                    "\n"
                                                                                    "font-size: 25px;"));
            line1_9->setAlignment(Qt::AlignCenter);
            line2_9 = new QLineEdit(page2);
            line2_9->setObjectName(QString::fromUtf8("line2_9"));
            line2_9->setGeometry(QRect(410, 160, 51, 51));
            line2_9->setStyleSheet(QString::fromUtf8("text-align: center;\n"
                                                                                    "\n"
                                                                                    "font-size: 25px;"));
            line2_9->setAlignment(Qt::AlignCenter);
            line2_8 = new QLineEdit(page2);
            line2_8->setObjectName(QString::fromUtf8("line2_8"));
            line2_8->setGeometry(QRect(350, 160, 51, 51));
            line2_8->setStyleSheet(QString::fromUtf8("text-align: center;\n"
                                                                                    "\n"
                                                                                    "font-size: 25px;"));
            line2_8->setAlignment(Qt::AlignCenter);
            line2_2 = new QLineEdit(page2);
            line2_2->setObjectName(QString::fromUtf8("line2_2"));
            line2_2->setGeometry(QRect(350, 40, 51, 51));
            line2_2->setStyleSheet(QString::fromUtf8("text-align: center;\n"
                                                                                    "\n"
                                                                                    "font-size: 25px;"));
            line2_2->setAlignment(Qt::AlignCenter);
            line2_6 = new QLineEdit(page2);
            line2_6->setObjectName(QString::fromUtf8("line2_6"));
            line2_6->setGeometry(QRect(410, 100, 51, 51));
            line2_6->setStyleSheet(QString::fromUtf8("text-align: center;\n"
                                                                                    "\n"
                                                                                    "font-size: 25px;"));
            line2_6->setAlignment(Qt::AlignCenter);
            line2_4 = new QLineEdit(page2);
            line2_4->setObjectName(QString::fromUtf8("line2_4"));
            line2_4->setGeometry(QRect(290, 100, 51, 51));
            line2_4->setStyleSheet(QString::fromUtf8("text-align: center;\n"
                                                                                    "\n"
                                                                                    "font-size: 25px;"));
            line2_4->setAlignment(Qt::AlignCenter);
            line2_7 = new QLineEdit(page2);
            line2_7->setObjectName(QString::fromUtf8("line2_7"));
            line2_7->setGeometry(QRect(290, 160, 51, 51));
            line2_7->setStyleSheet(QString::fromUtf8("text-align: center;\n"
                                                                                    "\n"
                                                                                    "font-size: 25px;"));
            line2_7->setAlignment(Qt::AlignCenter);
            line2_1 = new QLineEdit(page2);
            line2_1->setObjectName(QString::fromUtf8("line2_1"));
            line2_1->setGeometry(QRect(290, 40, 51, 51));
            line2_1->setStyleSheet(QString::fromUtf8("text-align: center;\n"
                                                                                    "\n"
                                                                                    "font-size: 25px;"));
            line2_1->setAlignment(Qt::AlignCenter);
            line2_3 = new QLineEdit(page2);
            line2_3->setObjectName(QString::fromUtf8("line2_3"));
            line2_3->setGeometry(QRect(410, 40, 51, 51));
            line2_3->setStyleSheet(QString::fromUtf8("text-align: center;\n"
                                                                                    "\n"
                                                                                    "font-size: 25px;"));
            line2_3->setAlignment(Qt::AlignCenter);
            line2_5 = new QLineEdit(page2);
            line2_5->setObjectName(QString::fromUtf8("line2_5"));
            line2_5->setGeometry(QRect(350, 100, 51, 51));
            line2_5->setStyleSheet(QString::fromUtf8("text-align: center;\n"
                                                                                    "\n"
                                                                                    "font-size: 25px;"));
            line2_5->setAlignment(Qt::AlignCenter);
            line3_9 = new QLineEdit(page2);
            line3_9->setObjectName(QString::fromUtf8("line3_9"));
            line3_9->setGeometry(QRect(680, 160, 51, 51));
            line3_9->setStyleSheet(QString::fromUtf8("text-align: center;\n"
                                                                                    "\n"
                                                                                    "font-size: 25px;"));
            line3_9->setAlignment(Qt::AlignCenter);
            line3_8 = new QLineEdit(page2);
            line3_8->setObjectName(QString::fromUtf8("line3_8"));
            line3_8->setGeometry(QRect(620, 160, 51, 51));
            line3_8->setStyleSheet(QString::fromUtf8("text-align: center;\n"
                                                                                    "\n"
                                                                                    "font-size: 25px;"));
            line3_8->setAlignment(Qt::AlignCenter);
            line3_2 = new QLineEdit(page2);
            line3_2->setObjectName(QString::fromUtf8("line3_2"));
            line3_2->setGeometry(QRect(620, 40, 51, 51));
            line3_2->setStyleSheet(QString::fromUtf8("text-align: center;\n"
                                                                                    "\n"
                                                                                    "font-size: 25px;"));
            line3_2->setAlignment(Qt::AlignCenter);
            line3_6 = new QLineEdit(page2);
            line3_6->setObjectName(QString::fromUtf8("line3_6"));
            line3_6->setGeometry(QRect(680, 100, 51, 51));
            line3_6->setStyleSheet(QString::fromUtf8("text-align: center;\n"
                                                                                    "\n"
                                                                                    "font-size: 25px;"));
            line3_6->setAlignment(Qt::AlignCenter);
            line3_4 = new QLineEdit(page2);
            line3_4->setObjectName(QString::fromUtf8("line3_4"));
            line3_4->setGeometry(QRect(560, 100, 51, 51));
            line3_4->setStyleSheet(QString::fromUtf8("text-align: center;\n"
                                                                                    "\n"
                                                                                    "font-size: 25px;"));
            line3_4->setAlignment(Qt::AlignCenter);
            line3_7 = new QLineEdit(page2);
            line3_7->setObjectName(QString::fromUtf8("line3_7"));
            line3_7->setGeometry(QRect(560, 160, 51, 51));
            line3_7->setStyleSheet(QString::fromUtf8("text-align: center;\n"
                                                                                    "\n"
                                                                                    "font-size: 25px;"));
            line3_7->setAlignment(Qt::AlignCenter);
            line3_1 = new QLineEdit(page2);
            line3_1->setObjectName(QString::fromUtf8("line3_1"));
            line3_1->setGeometry(QRect(560, 40, 51, 51));
            line3_1->setStyleSheet(QString::fromUtf8("text-align: center;\n"
                                                                                    "\n"
                                                                                    "font-size: 25px;"));
            line3_1->setAlignment(Qt::AlignCenter);
            line3_3 = new QLineEdit(page2);
            line3_3->setObjectName(QString::fromUtf8("line3_3"));
            line3_3->setGeometry(QRect(680, 40, 51, 51));
            line3_3->setStyleSheet(QString::fromUtf8("text-align: center;\n"
                                                                                    "\n"
                                                                                    "font-size: 25px;"));
            line3_3->setAlignment(Qt::AlignCenter);
            line3_5 = new QLineEdit(page2);
            line3_5->setObjectName(QString::fromUtf8("line3_5"));
            line3_5->setGeometry(QRect(620, 100, 51, 51));
            line3_5->setStyleSheet(QString::fromUtf8("text-align: center;\n"
                                                                                    "\n"
                                                                                    "font-size: 25px;"));
            line3_5->setAlignment(Qt::AlignCenter);
            text_action = new QLabel(page2);
            text_action->setObjectName(QString::fromUtf8("text_action"));
            text_action->setGeometry(QRect(220, 110, 47, 31));
            text_action->setStyleSheet(QString::fromUtf8("font-size: 30px;"));
            text_action->setAlignment(Qt::AlignCenter);
            text_ravno = new QLabel(page2);
            text_ravno->setObjectName(QString::fromUtf8("text_ravno"));
            text_ravno->setGeometry(QRect(490, 110, 47, 31));
            text_ravno->setStyleSheet(QString::fromUtf8("font-size: 30px;"));
            text_ravno->setAlignment(Qt::AlignCenter);
            layoutWidget = new QWidget(page2);
            layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
            layoutWidget->setGeometry(QRect(30, 250, 162, 19));
            horizontalLayout = new QHBoxLayout(layoutWidget);
            horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
            horizontalLayout->setContentsMargins(0, 0, 0, 0);
            multi_radioButton = new QRadioButton(layoutWidget);
            multi_radioButton->setObjectName(QString::fromUtf8("multi_radioButton"));

            horizontalLayout->addWidget(multi_radioButton);

            plus_radioButton = new QRadioButton(layoutWidget);
            plus_radioButton->setObjectName(QString::fromUtf8("plus_radioButton"));

            horizontalLayout->addWidget(plus_radioButton);

            label_1 = new QLabel(page2);
            label_1->setObjectName(QString::fromUtf8("label"));
            label_1->setGeometry(QRect(30, 220, 41, 16));
            label_2 = new QLabel(page2);
            label_2->setObjectName(QString::fromUtf8("label_2"));
            label_2->setGeometry(QRect(290, 220, 41, 16));
            label_3 = new QLabel(page2);
            label_3->setObjectName(QString::fromUtf8("label_3"));
            label_3->setGeometry(QRect(560, 220, 41, 16));
            layoutWidget1 = new QWidget(page2);
            layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
            layoutWidget1->setGeometry(QRect(350, 220, 95, 15));
            horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
            horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
            horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
            label_5 = new QLabel(layoutWidget1);
            label_5->setObjectName(QString::fromUtf8("label_5"));

            horizontalLayout_3->addWidget(label_5);

            det_b_label = new QLabel(layoutWidget1);
            det_b_label->setObjectName(QString::fromUtf8("det_b_label"));

            horizontalLayout_3->addWidget(det_b_label);

            layoutWidget_2 = new QWidget(page2);
            layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
            layoutWidget_2->setGeometry(QRect(620, 220, 95, 15));
            horizontalLayout_4 = new QHBoxLayout(layoutWidget_2);
            horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
            horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
            label_6 = new QLabel(layoutWidget_2);
            label_6->setObjectName(QString::fromUtf8("label_6"));

            horizontalLayout_4->addWidget(label_6);

            det_c_label = new QLabel(layoutWidget_2);
            det_c_label->setObjectName(QString::fromUtf8("det_c_label"));

            horizontalLayout_4->addWidget(det_c_label);

            layoutWidget2 = new QWidget(page2);
            layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
            layoutWidget2->setGeometry(QRect(90, 220, 95, 15));
            horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
            horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
            horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
            label_4 = new QLabel(layoutWidget2);
            label_4->setObjectName(QString::fromUtf8("label_4"));

            horizontalLayout_2->addWidget(label_4);

            det_a_label = new QLabel(layoutWidget2);
            det_a_label->setObjectName(QString::fromUtf8("det_a_label"));

            horizontalLayout_2->addWidget(det_a_label);

            pushButton = new QPushButton(page2);
            pushButton->setObjectName(QString::fromUtf8("pushButton"));
            pushButton->setGeometry(QRect(200, 250, 75, 23));
            pushButton_switchToMain = new QPushButton(page2);
            pushButton_switchToMain->setObjectName(QString::fromUtf8("pushButton_switchToMain"));
            pushButton_switchToMain->setGeometry(QRect(0, 0, 121, 23));

            line3_1->setReadOnly(true);
            line3_2->setReadOnly(true);
            line3_3->setReadOnly(true);
            line3_4->setReadOnly(true);
            line3_5->setReadOnly(true);
            line3_6->setReadOnly(true);
            line3_7->setReadOnly(true);
            line3_8->setReadOnly(true);
            line3_9->setReadOnly(true);

            /* ///////////////////////////
              ///////////////////////////
              science calculator design
              /////////////////////////////
            /////////////////////////////*/

            layoutWithSwitchBtn->addItem(horizontalSpacer, 0, 1, 1, 1);

            pushButton_switch = new QPushButton(page);
            pushButton_switch->setObjectName(QString::fromUtf8("pushButton_switch"));
            QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
            sizePolicy.setHorizontalStretch(0);
            sizePolicy.setVerticalStretch(0);
            sizePolicy.setHeightForWidth(pushButton_switch->sizePolicy().hasHeightForWidth());
            pushButton_switch->setSizePolicy(sizePolicy);
            pushButton_switch->setMaximumSize(QSize(239, 59));

            layoutWithSwitchBtn->addWidget(pushButton_switch, 0, 0, 1, 1);


            gridLayout_page->addLayout(layoutWithSwitchBtn, 0, 0, 1, 2);

            scrollArea = new QScrollArea(page);
            scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
            scrollArea->setMinimumSize(QSize(261, 81));
            scrollArea->setMaximumSize(QSize(16777215, 150));
            scrollArea->setLayoutDirection(Qt::RightToLeft);
            scrollArea->setStyleSheet(QString::fromUtf8(""));
            scrollArea->setWidgetResizable(true);
            scrollArea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
            scrollAreaWidgetContents = new QWidget();
            scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
            scrollAreaWidgetContents->setGeometry(QRect(0, 0, 539, 136));
            gridLayout_scrollArea = new QGridLayout(scrollAreaWidgetContents);
            gridLayout_scrollArea->setObjectName(QString::fromUtf8("gridLayout_scrollArea"));
            verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

            gridLayout_scrollArea->addItem(verticalSpacer, 3, 0, 1, 1);

            optLabel = new QLabel(scrollAreaWidgetContents);
            optLabel->setObjectName(QString::fromUtf8("optLabel"));
            optLabel->setMaximumSize(QSize(16777215, 30));
            QFont font;
            font.setFamily(QString::fromUtf8("Microsoft Sans Serif"));
            font.setPointSize(14);
            optLabel->setFont(font);
            optLabel->setStyleSheet(QString::fromUtf8("color: rgb(109, 109, 109);"));
            optLabel->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);

            gridLayout_scrollArea->addWidget(optLabel, 0, 0, 1, 1);

            label = new QLabel(scrollAreaWidgetContents);
            label->setObjectName(QString::fromUtf8("label"));
            QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
            sizePolicy1.setHorizontalStretch(0);
            sizePolicy1.setVerticalStretch(0);
            sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
            label->setSizePolicy(sizePolicy1);
            QFont font1;
            font1.setFamily(QString::fromUtf8("Microsoft Sans Serif"));
            font1.setPointSize(28);
            label->setFont(font1);
            label->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);

            gridLayout_scrollArea->addWidget(label, 2, 0, 1, 1);

            scrollArea->setWidget(scrollAreaWidgetContents);

            gridLayout_page->addWidget(scrollArea, 1, 0, 1, 2);

            layoutWithOptButtons = new QGridLayout();
            layoutWithOptButtons->setSpacing(1);
            layoutWithOptButtons->setObjectName(QString::fromUtf8("layoutWithOptButtons"));
            cubeButton = new QPushButton(page);
            cubeButton->setObjectName(QString::fromUtf8("cubeButton"));
            sizePolicy.setHeightForWidth(cubeButton->sizePolicy().hasHeightForWidth());
            cubeButton->setSizePolicy(sizePolicy);
            cubeButton->setMinimumSize(QSize(61, 61));
            cubeButton->setMaximumSize(QSize(16777215, 90));
            cubeButton->setFont(font);
            cubeButton->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(199, 199, 199);}\n"
    "QPushButton:hover {background-color: rgb(181, 172, 222);}\n"
    "QPushButton:clicked {background-color: rgb(173, 173, 173);}"));

            layoutWithOptButtons->addWidget(cubeButton, 0, 0, 1, 1);

            sqrButton = new QPushButton(page);
            sqrButton->setObjectName(QString::fromUtf8("sqrButton"));
            sizePolicy.setHeightForWidth(sqrButton->sizePolicy().hasHeightForWidth());
            sqrButton->setSizePolicy(sizePolicy);
            sqrButton->setMinimumSize(QSize(61, 61));
            sqrButton->setMaximumSize(QSize(16777215, 90));
            sqrButton->setFont(font);
            sqrButton->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(199, 199, 199);}\n"
    "QPushButton:hover {background-color: rgb(181, 172, 222);}\n"
    "QPushButton:clicked {background-color: rgb(173, 173, 173);}"));

            layoutWithOptButtons->addWidget(sqrButton, 0, 1, 1, 1);

            cubeRootButton = new QPushButton(page);
            cubeRootButton->setObjectName(QString::fromUtf8("cubeRootButton"));
            sizePolicy.setHeightForWidth(cubeRootButton->sizePolicy().hasHeightForWidth());
            cubeRootButton->setSizePolicy(sizePolicy);
            cubeRootButton->setMinimumSize(QSize(61, 61));
            cubeRootButton->setMaximumSize(QSize(16777215, 90));
            cubeRootButton->setFont(font);
            cubeRootButton->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(199, 199, 199);}\n"
    "QPushButton:hover {background-color: rgb(181, 172, 222);}\n"
    "QPushButton:clicked {background-color: rgb(173, 173, 173);}"));

            layoutWithOptButtons->addWidget(cubeRootButton, 1, 0, 1, 1);

            sqrtButton = new QPushButton(page);
            sqrtButton->setObjectName(QString::fromUtf8("sqrtButton"));
            sizePolicy.setHeightForWidth(sqrtButton->sizePolicy().hasHeightForWidth());
            sqrtButton->setSizePolicy(sizePolicy);
            sqrtButton->setMinimumSize(QSize(61, 61));
            sqrtButton->setMaximumSize(QSize(16777215, 90));
            sqrtButton->setFont(font);
            sqrtButton->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(199, 199, 199);}\n"
    "QPushButton:hover {background-color: rgb(181, 172, 222);}\n"
    "QPushButton:clicked {background-color: rgb(173, 173, 173);}"));

            layoutWithOptButtons->addWidget(sqrtButton, 1, 1, 1, 1);

            twoInPowerButton = new QPushButton(page);
            twoInPowerButton->setObjectName(QString::fromUtf8("twoInPowerButton"));
            sizePolicy.setHeightForWidth(twoInPowerButton->sizePolicy().hasHeightForWidth());
            twoInPowerButton->setSizePolicy(sizePolicy);
            twoInPowerButton->setMinimumSize(QSize(61, 61));
            twoInPowerButton->setMaximumSize(QSize(16777215, 90));
            twoInPowerButton->setFont(font);
            twoInPowerButton->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(199, 199, 199);}\n"
    "QPushButton:hover {background-color: rgb(181, 172, 222);}\n"
    "QPushButton:clicked {background-color: rgb(173, 173, 173);}"));

            layoutWithOptButtons->addWidget(twoInPowerButton, 2, 0, 1, 1);

            rootButton = new QPushButton(page);
            rootButton->setObjectName(QString::fromUtf8("rootButton"));
            sizePolicy.setHeightForWidth(rootButton->sizePolicy().hasHeightForWidth());
            rootButton->setSizePolicy(sizePolicy);
            rootButton->setMinimumSize(QSize(61, 61));
            rootButton->setMaximumSize(QSize(16777215, 90));
            rootButton->setFont(font);
            rootButton->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(199, 199, 199);}\n"
    "QPushButton:hover {background-color: rgb(181, 172, 222);}\n"
    "QPushButton:clicked {background-color: rgb(173, 173, 173);}"));

            layoutWithOptButtons->addWidget(rootButton, 2, 1, 1, 1);

            eInPowerButton = new QPushButton(page);
            eInPowerButton->setObjectName(QString::fromUtf8("eInPowerButton"));
            sizePolicy.setHeightForWidth(eInPowerButton->sizePolicy().hasHeightForWidth());
            eInPowerButton->setSizePolicy(sizePolicy);
            eInPowerButton->setMinimumSize(QSize(61, 61));
            eInPowerButton->setMaximumSize(QSize(16777215, 90));
            eInPowerButton->setFont(font);
            eInPowerButton->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(199, 199, 199);}\n"
    "QPushButton:hover {background-color: rgb(181, 172, 222);}\n"
    "QPushButton:clicked {background-color: rgb(173, 173, 173);}"));

            layoutWithOptButtons->addWidget(eInPowerButton, 3, 0, 1, 1);

            natLogButton = new QPushButton(page);
            natLogButton->setObjectName(QString::fromUtf8("natLogButton"));
            sizePolicy.setHeightForWidth(natLogButton->sizePolicy().hasHeightForWidth());
            natLogButton->setSizePolicy(sizePolicy);
            natLogButton->setMinimumSize(QSize(61, 61));
            natLogButton->setMaximumSize(QSize(16777215, 90));
            natLogButton->setFont(font);
            natLogButton->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(199, 199, 199);}\n"
    "QPushButton:hover {background-color: rgb(181, 172, 222);}\n"
    "QPushButton:clicked {background-color: rgb(173, 173, 173);}"));

            layoutWithOptButtons->addWidget(natLogButton, 3, 1, 1, 1);

            powerButton = new QPushButton(page);
            powerButton->setObjectName(QString::fromUtf8("powerButton"));
            sizePolicy.setHeightForWidth(powerButton->sizePolicy().hasHeightForWidth());
            powerButton->setSizePolicy(sizePolicy);
            powerButton->setMinimumSize(QSize(61, 61));
            powerButton->setMaximumSize(QSize(16777215, 90));
            powerButton->setFont(font);
            powerButton->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(199, 199, 199);}\n"
    "QPushButton:hover {background-color: rgb(181, 172, 222);}\n"
    "QPushButton:clicked {background-color: rgb(173, 173, 173);}"));

            layoutWithOptButtons->addWidget(powerButton, 4, 0, 1, 1);

            decLogButton = new QPushButton(page);
            decLogButton->setObjectName(QString::fromUtf8("decLogButton"));
            sizePolicy.setHeightForWidth(decLogButton->sizePolicy().hasHeightForWidth());
            decLogButton->setSizePolicy(sizePolicy);
            decLogButton->setMinimumSize(QSize(61, 61));
            decLogButton->setMaximumSize(QSize(16777215, 90));
            decLogButton->setFont(font);
            decLogButton->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(199, 199, 199);}\n"
    "QPushButton:hover {background-color: rgb(181, 172, 222);}\n"
    "QPushButton:clicked {background-color: rgb(173, 173, 173);}"));

            layoutWithOptButtons->addWidget(decLogButton, 4, 1, 1, 1);

            tenInPowerButton = new QPushButton(page);
            tenInPowerButton->setObjectName(QString::fromUtf8("tenInPowerButton"));
            sizePolicy.setHeightForWidth(tenInPowerButton->sizePolicy().hasHeightForWidth());
            tenInPowerButton->setSizePolicy(sizePolicy);
            tenInPowerButton->setMinimumSize(QSize(61, 61));
            tenInPowerButton->setMaximumSize(QSize(16777215, 90));
            tenInPowerButton->setFont(font);
            tenInPowerButton->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(199, 199, 199);}\n"
    "QPushButton:hover {background-color: rgb(181, 172, 222);}\n"
    "QPushButton:clicked {background-color: rgb(173, 173, 173);}"));

            layoutWithOptButtons->addWidget(tenInPowerButton, 5, 0, 1, 1);

            logButton = new QPushButton(page);
            logButton->setObjectName(QString::fromUtf8("logButton"));
            sizePolicy.setHeightForWidth(logButton->sizePolicy().hasHeightForWidth());
            logButton->setSizePolicy(sizePolicy);
            logButton->setMinimumSize(QSize(61, 61));
            logButton->setMaximumSize(QSize(16777215, 90));
            logButton->setFont(font);
            logButton->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(199, 199, 199);}\n"
    "QPushButton:hover {background-color: rgb(181, 172, 222);}\n"
    "QPushButton:clicked {background-color: rgb(173, 173, 173);}"));

            layoutWithOptButtons->addWidget(logButton, 5, 1, 1, 1);


            gridLayout_page->addLayout(layoutWithOptButtons, 2, 0, 2, 1);

            layoutWithSpecialBtns = new QGridLayout();
            layoutWithSpecialBtns->setSpacing(1);
            layoutWithSpecialBtns->setObjectName(QString::fromUtf8("layoutWithSpecialBtns"));
            moduleButton = new QPushButton(page);
            moduleButton->setObjectName(QString::fromUtf8("moduleButton"));
            sizePolicy.setHeightForWidth(moduleButton->sizePolicy().hasHeightForWidth());
            moduleButton->setSizePolicy(sizePolicy);
            moduleButton->setMinimumSize(QSize(61, 61));
            moduleButton->setMaximumSize(QSize(16777215, 90));
            moduleButton->setFont(font);
            moduleButton->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(199, 199, 199);}\n"
    "QPushButton:hover {background-color: rgb(181, 172, 222);}\n"
    "QPushButton:clicked {background-color: rgb(173, 173, 173);}"));

            layoutWithSpecialBtns->addWidget(moduleButton, 1, 3, 1, 1);

            eButton = new QPushButton(page);
            eButton->setObjectName(QString::fromUtf8("eButton"));
            sizePolicy.setHeightForWidth(eButton->sizePolicy().hasHeightForWidth());
            eButton->setSizePolicy(sizePolicy);
            eButton->setMinimumSize(QSize(61, 61));
            eButton->setMaximumSize(QSize(16777215, 90));
            eButton->setFont(font);
            eButton->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(199, 199, 199);}\n"
    "QPushButton:hover {background-color: rgb(181, 172, 222);}\n"
    "QPushButton:clicked {background-color: rgb(173, 173, 173);}"));

            layoutWithSpecialBtns->addWidget(eButton, 1, 1, 1, 2);

            factButton = new QPushButton(page);
            factButton->setObjectName(QString::fromUtf8("factButton"));
            sizePolicy.setHeightForWidth(factButton->sizePolicy().hasHeightForWidth());
            factButton->setSizePolicy(sizePolicy);
            factButton->setMinimumSize(QSize(61, 61));
            factButton->setMaximumSize(QSize(16777215, 90));
            QFont font2;
            font2.setFamily(QString::fromUtf8("Microsoft Sans Serif"));
            font2.setPointSize(17);
            factButton->setFont(font2);
            factButton->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(199, 199, 199);}\n"
    "QPushButton:hover {background-color: rgb(181, 172, 222);}\n"
    "QPushButton:clicked {background-color: rgb(173, 173, 173);}"));

            layoutWithSpecialBtns->addWidget(factButton, 2, 2, 1, 2);

            piButton = new QPushButton(page);
            piButton->setObjectName(QString::fromUtf8("piButton"));
            sizePolicy.setHeightForWidth(piButton->sizePolicy().hasHeightForWidth());
            piButton->setSizePolicy(sizePolicy);
            piButton->setMinimumSize(QSize(61, 61));
            piButton->setMaximumSize(QSize(16777215, 90));
            piButton->setFont(font);
            piButton->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(199, 199, 199);}\n"
    "QPushButton:hover {background-color: rgb(181, 172, 222);}\n"
    "QPushButton:clicked {background-color: rgb(173, 173, 173);}"));

            layoutWithSpecialBtns->addWidget(piButton, 1, 0, 1, 1);

            reverseButton = new QPushButton(page);
            reverseButton->setObjectName(QString::fromUtf8("reverseButton"));
            sizePolicy.setHeightForWidth(reverseButton->sizePolicy().hasHeightForWidth());
            reverseButton->setSizePolicy(sizePolicy);
            reverseButton->setMinimumSize(QSize(61, 61));
            reverseButton->setMaximumSize(QSize(16777215, 90));
            reverseButton->setFont(font);
            reverseButton->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(199, 199, 199);}\n"
    "QPushButton:hover {background-color: rgb(181, 172, 222);}\n"
    "QPushButton:clicked {background-color: rgb(173, 173, 173);}"));

            layoutWithSpecialBtns->addWidget(reverseButton, 1, 4, 1, 1);

            clearButton = new QPushButton(page);
            clearButton->setObjectName(QString::fromUtf8("clearButton"));
            sizePolicy.setHeightForWidth(clearButton->sizePolicy().hasHeightForWidth());
            clearButton->setSizePolicy(sizePolicy);
            clearButton->setMinimumSize(QSize(111, 51));
            clearButton->setMaximumSize(QSize(16777215, 90));
            QFont font3;
            font3.setFamily(QString::fromUtf8("Microsoft Sans Serif"));
            font3.setPointSize(13);
            clearButton->setFont(font3);
            clearButton->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(199, 199, 199);}\n"
    "QPushButton:hover {background-color: rgb(181, 172, 222);}\n"
    "QPushButton:clicked {background-color: rgb(173, 173, 173);}\n"
    ""));

            layoutWithSpecialBtns->addWidget(clearButton, 0, 0, 1, 3);

            rightBracketButton = new QPushButton(page);
            rightBracketButton->setObjectName(QString::fromUtf8("rightBracketButton"));
            sizePolicy.setHeightForWidth(rightBracketButton->sizePolicy().hasHeightForWidth());
            rightBracketButton->setSizePolicy(sizePolicy);
            rightBracketButton->setMinimumSize(QSize(61, 61));
            rightBracketButton->setMaximumSize(QSize(16777215, 90));
            rightBracketButton->setFont(font);
            rightBracketButton->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(199, 199, 199);}\n"
    "QPushButton:hover {background-color: rgb(181, 172, 222);}\n"
    "QPushButton:clicked {background-color: rgb(173, 173, 173);}"));

            layoutWithSpecialBtns->addWidget(rightBracketButton, 2, 1, 1, 1);

            leftBracketButton = new QPushButton(page);
            leftBracketButton->setObjectName(QString::fromUtf8("leftBracketButton"));
            sizePolicy.setHeightForWidth(leftBracketButton->sizePolicy().hasHeightForWidth());
            leftBracketButton->setSizePolicy(sizePolicy);
            leftBracketButton->setMinimumSize(QSize(61, 61));
            leftBracketButton->setMaximumSize(QSize(16777215, 90));
            leftBracketButton->setFont(font);
            leftBracketButton->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(199, 199, 199);}\n"
    "QPushButton:hover {background-color: rgb(181, 172, 222);}\n"
    "QPushButton:clicked {background-color: rgb(173, 173, 173);}"));

            layoutWithSpecialBtns->addWidget(leftBracketButton, 2, 0, 1, 1);

            pushButton_div = new QPushButton(page);
            binaryBtnGroup = new QButtonGroup(MainWindow);
            binaryBtnGroup->setObjectName(QString::fromUtf8("binaryBtnGroup"));
            binaryBtnGroup->addButton(pushButton_div);
            pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));
            sizePolicy.setHeightForWidth(pushButton_div->sizePolicy().hasHeightForWidth());
            pushButton_div->setSizePolicy(sizePolicy);
            pushButton_div->setMinimumSize(QSize(61, 61));
            pushButton_div->setMaximumSize(QSize(16777215, 90));
            QFont font4;
            font4.setFamily(QString::fromUtf8("Microsoft JhengHei UI Light"));
            font4.setPointSize(20);
            pushButton_div->setFont(font4);
            pushButton_div->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(199, 199, 199);}\n"
    "QPushButton:hover {background-color: rgb(181, 172, 222);}\n"
    "QPushButton:clicked {background-color: rgb(173, 173, 173);}"));

            layoutWithSpecialBtns->addWidget(pushButton_div, 2, 4, 1, 1);

            delLastSymbBtn = new QPushButton(page);
            delLastSymbBtn->setObjectName(QString::fromUtf8("delLastSymbBtn"));
            sizePolicy.setHeightForWidth(delLastSymbBtn->sizePolicy().hasHeightForWidth());
            delLastSymbBtn->setSizePolicy(sizePolicy);
            delLastSymbBtn->setMinimumSize(QSize(131, 51));
            delLastSymbBtn->setMaximumSize(QSize(16777215, 90));
            QFont font5;
            font5.setFamily(QString::fromUtf8("Microsoft Sans Serif"));
            font5.setPointSize(12);
            delLastSymbBtn->setFont(font5);
            delLastSymbBtn->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(199, 199, 199);}\n"
    "QPushButton:hover {background-color: rgb(181, 172, 222);}\n"
    "QPushButton:clicked {background-color: rgb(173, 173, 173);}"));

            layoutWithSpecialBtns->addWidget(delLastSymbBtn, 0, 3, 1, 2);


            gridLayout_page->addLayout(layoutWithSpecialBtns, 2, 1, 1, 1);

            layoutWithMainBtns = new QGridLayout();
            layoutWithMainBtns->setSpacing(0);
            layoutWithMainBtns->setObjectName(QString::fromUtf8("layoutWithMainBtns"));
            layoutWithMainBtns->setSizeConstraint(QLayout::SetNoConstraint);
            layoutWithMainBtns->setContentsMargins(0, -1, -1, -1);
            negativeButton = new QPushButton(page);
            negativeButton->setObjectName(QString::fromUtf8("negativeButton"));
            sizePolicy.setHeightForWidth(negativeButton->sizePolicy().hasHeightForWidth());
            negativeButton->setSizePolicy(sizePolicy);
            negativeButton->setMinimumSize(QSize(61, 61));
            QFont font6;
            font6.setFamily(QString::fromUtf8("Microsoft JhengHei Light"));
            font6.setPointSize(14);
            negativeButton->setFont(font6);
            negativeButton->setStyleSheet(QString::fromUtf8("QPushButton:hover {background-color: rgb(237, 228, 239);}\n"
    "QPushButton:clicked {background-color: rgb(207, 207, 207);}"));

            layoutWithMainBtns->addWidget(negativeButton, 3, 0, 1, 1);

            pushButton_0 = new QPushButton(page);
            digitsBtnGroup = new QButtonGroup(MainWindow);
            digitsBtnGroup->setObjectName(QString::fromUtf8("digitsBtnGroup"));
            digitsBtnGroup->addButton(pushButton_0);
            pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
            sizePolicy.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
            pushButton_0->setSizePolicy(sizePolicy);
            pushButton_0->setMinimumSize(QSize(61, 61));
            pushButton_0->setFont(font3);
            pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton:hover {background-color: rgb(237, 228, 239);}\n"
    "QPushButton:clicked {background-color: rgb(207, 207, 207);}"));

            layoutWithMainBtns->addWidget(pushButton_0, 3, 1, 1, 1);

            pushButton_6 = new QPushButton(page);
            digitsBtnGroup->addButton(pushButton_6);
            pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
            sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
            pushButton_6->setSizePolicy(sizePolicy);
            pushButton_6->setMinimumSize(QSize(61, 61));
            pushButton_6->setFont(font3);
            pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton:hover {background-color: rgb(237, 228, 239);}\n"
    "QPushButton:clicked {background-color: rgb(207, 207, 207);}"));

            layoutWithMainBtns->addWidget(pushButton_6, 1, 2, 1, 1);

            pushButton_minus = new QPushButton(page);
            binaryBtnGroup->addButton(pushButton_minus);
            pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
            sizePolicy.setHeightForWidth(pushButton_minus->sizePolicy().hasHeightForWidth());
            pushButton_minus->setSizePolicy(sizePolicy);
            pushButton_minus->setMinimumSize(QSize(61, 61));
            QFont font7;
            font7.setFamily(QString::fromUtf8("Microsoft JhengHei UI Light"));
            font7.setPointSize(17);
            pushButton_minus->setFont(font7);
            pushButton_minus->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(199, 199, 199);}\n"
    "QPushButton:hover {background-color: rgb(181, 172, 222);}\n"
    "QPushButton:clicked {background-color: rgb(173, 173, 173);}"));

            layoutWithMainBtns->addWidget(pushButton_minus, 1, 3, 1, 1);

            pushButton_7 = new QPushButton(page);
            digitsBtnGroup->addButton(pushButton_7);
            pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
            sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
            pushButton_7->setSizePolicy(sizePolicy);
            pushButton_7->setMinimumSize(QSize(61, 61));
            pushButton_7->setFont(font3);
            pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton:hover {background-color: rgb(237, 228, 239);}\n"
    "QPushButton:clicked {background-color: rgb(207, 207, 207);}"));

            layoutWithMainBtns->addWidget(pushButton_7, 2, 0, 1, 1);

            pushButton_plus = new QPushButton(page);
            binaryBtnGroup->addButton(pushButton_plus);
            pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
            sizePolicy.setHeightForWidth(pushButton_plus->sizePolicy().hasHeightForWidth());
            pushButton_plus->setSizePolicy(sizePolicy);
            pushButton_plus->setMinimumSize(QSize(61, 61));
            pushButton_plus->setFont(font7);
            pushButton_plus->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(199, 199, 199);}\n"
    "QPushButton:hover {background-color: rgb(181, 172, 222);}\n"
    "QPushButton:clicked {background-color: rgb(173, 173, 173);}"));

            layoutWithMainBtns->addWidget(pushButton_plus, 2, 3, 1, 1);

            pushButton_3 = new QPushButton(page);
            digitsBtnGroup->addButton(pushButton_3);
            pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
            sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
            pushButton_3->setSizePolicy(sizePolicy);
            pushButton_3->setMinimumSize(QSize(61, 61));
            pushButton_3->setFont(font3);
            pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton:hover {background-color: rgb(237, 228, 239);}\n"
    "QPushButton:clicked {background-color: rgb(207, 207, 207);}"));

            layoutWithMainBtns->addWidget(pushButton_3, 0, 2, 1, 1);

            pushButton_8 = new QPushButton(page);
            digitsBtnGroup->addButton(pushButton_8);
            pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
            sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
            pushButton_8->setSizePolicy(sizePolicy);
            pushButton_8->setMinimumSize(QSize(61, 61));
            pushButton_8->setFont(font3);
            pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton:hover {background-color: rgb(237, 228, 239);}\n"
    "QPushButton:clicked {background-color: rgb(207, 207, 207);}"));

            layoutWithMainBtns->addWidget(pushButton_8, 2, 1, 1, 1);

            pushButton_5 = new QPushButton(page);
            digitsBtnGroup->addButton(pushButton_5);
            pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
            sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
            pushButton_5->setSizePolicy(sizePolicy);
            pushButton_5->setMinimumSize(QSize(61, 61));
            pushButton_5->setFont(font3);
            pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton:hover {background-color: rgb(237, 228, 239);}\n"
    "QPushButton:clicked {background-color: rgb(207, 207, 207);}"));

            layoutWithMainBtns->addWidget(pushButton_5, 1, 1, 1, 1);

            floatButton = new QPushButton(page);
            floatButton->setObjectName(QString::fromUtf8("floatButton"));
            sizePolicy.setHeightForWidth(floatButton->sizePolicy().hasHeightForWidth());
            floatButton->setSizePolicy(sizePolicy);
            floatButton->setMinimumSize(QSize(61, 61));
            QFont font8;
            font8.setFamily(QString::fromUtf8("Segoe UI Semibold"));
            font8.setPointSize(15);
            floatButton->setFont(font8);
            floatButton->setStyleSheet(QString::fromUtf8("QPushButton:hover {background-color: rgb(237, 228, 239);}\n"
    "QPushButton:clicked {background-color: rgb(207, 207, 207);}"));

            layoutWithMainBtns->addWidget(floatButton, 3, 2, 1, 1);

            pushButton_mult = new QPushButton(page);
            binaryBtnGroup->addButton(pushButton_mult);
            pushButton_mult->setObjectName(QString::fromUtf8("pushButton_mult"));
            sizePolicy.setHeightForWidth(pushButton_mult->sizePolicy().hasHeightForWidth());
            pushButton_mult->setSizePolicy(sizePolicy);
            pushButton_mult->setMinimumSize(QSize(61, 61));
            pushButton_mult->setFont(font7);
            pushButton_mult->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(199, 199, 199);}\n"
    "QPushButton:hover {background-color: rgb(181, 172, 222);}\n"
    "QPushButton:clicked {background-color: rgb(173, 173, 173);}"));

            layoutWithMainBtns->addWidget(pushButton_mult, 0, 3, 1, 1);

            pushButton_4 = new QPushButton(page);
            digitsBtnGroup->addButton(pushButton_4);
            pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
            sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
            pushButton_4->setSizePolicy(sizePolicy);
            pushButton_4->setMinimumSize(QSize(61, 61));
            pushButton_4->setFont(font3);
            pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton:hover {background-color: rgb(237, 228, 239);}\n"
    "QPushButton:clicked {background-color: rgb(207, 207, 207);}"));

            layoutWithMainBtns->addWidget(pushButton_4, 1, 0, 1, 1);

            pushButton_9 = new QPushButton(page);
            digitsBtnGroup->addButton(pushButton_9);
            pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
            sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
            pushButton_9->setSizePolicy(sizePolicy);
            pushButton_9->setMinimumSize(QSize(61, 61));
            pushButton_9->setFont(font3);
            pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton:hover {background-color: rgb(237, 228, 239);}\n"
    "QPushButton:clicked {background-color: rgb(207, 207, 207);}"));

            layoutWithMainBtns->addWidget(pushButton_9, 2, 2, 1, 1);

            resultButton = new QPushButton(page);
            resultButton->setObjectName(QString::fromUtf8("resultButton"));
            sizePolicy.setHeightForWidth(resultButton->sizePolicy().hasHeightForWidth());
            resultButton->setSizePolicy(sizePolicy);
            resultButton->setMinimumSize(QSize(61, 61));
            resultButton->setFont(font7);
            resultButton->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgba(255, 106, 196, 180);}\n"
    "QPushButton:hover {background-color: rgb(224, 136, 195);}\n"
    "QPushButton:clicked {background-color: rgb(193, 112, 161);}"));

            layoutWithMainBtns->addWidget(resultButton, 3, 3, 1, 1);

            pushButton_2 = new QPushButton(page);
            digitsBtnGroup->addButton(pushButton_2);
            pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
            sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
            pushButton_2->setSizePolicy(sizePolicy);
            pushButton_2->setMinimumSize(QSize(61, 61));
            pushButton_2->setFont(font3);
            pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton:hover {background-color: rgb(237, 228, 239);}\n"
    "QPushButton:clicked {background-color: rgb(207, 207, 207);}"));

            layoutWithMainBtns->addWidget(pushButton_2, 0, 1, 1, 1);

            pushButton_1 = new QPushButton(page);
            digitsBtnGroup->addButton(pushButton_1);
            pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
            sizePolicy.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
            pushButton_1->setSizePolicy(sizePolicy);
            pushButton_1->setMinimumSize(QSize(61, 61));
            pushButton_1->setFont(font3);
            pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton:hover {background-color: rgb(237, 228, 239);}\n"
    "QPushButton:clicked {background-color: rgb(207, 207, 207);}"));

            layoutWithMainBtns->addWidget(pushButton_1, 0, 0, 1, 1);


            gridLayout_page->addLayout(layoutWithMainBtns, 3, 1, 1, 1);

            stackedWidget->addWidget(page);
            stackedWidget->addWidget(page2);

            gridLayout_centralwidget->addWidget(stackedWidget, 0, 0, 1, 1);

            MainWindow->setCentralWidget(centralwidget);

            retranslateUi(MainWindow);

            QMetaObject::connectSlotsByName(MainWindow);
        } // setupUi

        void retranslateUi(QMainWindow *MainWindow)
        {
            MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
            pushButton_switch->setText(QCoreApplication::translate("MainWindow", "Matrix calculator", nullptr));
            optLabel->setText(QString());
            label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
            cubeButton->setText(QCoreApplication::translate("MainWindow", "x\302\263", nullptr));
            sqrButton->setText(QCoreApplication::translate("MainWindow", "x\302\262", nullptr));
            cubeRootButton->setText(QCoreApplication::translate("MainWindow", "\342\210\233", nullptr));
            sqrtButton->setText(QCoreApplication::translate("MainWindow", "\342\210\232", nullptr));
            twoInPowerButton->setText(QCoreApplication::translate("MainWindow", "2\342\201\277", nullptr));
            rootButton->setText(QCoreApplication::translate("MainWindow", "\342\201\277\342\210\232", nullptr));
            eInPowerButton->setText(QCoreApplication::translate("MainWindow", "e\342\201\277", nullptr));
            natLogButton->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
            powerButton->setText(QCoreApplication::translate("MainWindow", "x\342\201\277", nullptr));
            decLogButton->setText(QCoreApplication::translate("MainWindow", "lg", nullptr));
            tenInPowerButton->setText(QCoreApplication::translate("MainWindow", "10\342\201\277", nullptr));
            logButton->setText(QCoreApplication::translate("MainWindow", "log\342\202\223y", nullptr));
            moduleButton->setText(QCoreApplication::translate("MainWindow", "|x|", nullptr));
            eButton->setText(QCoreApplication::translate("MainWindow", "e", nullptr));
            factButton->setText(QCoreApplication::translate("MainWindow", "n!", nullptr));
            piButton->setText(QCoreApplication::translate("MainWindow", "\360\235\235\205", nullptr));
            reverseButton->setText(QCoreApplication::translate("MainWindow", "\342\205\237\342\202\223", nullptr));
            clearButton->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
            rightBracketButton->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
            leftBracketButton->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
            optLabel->setText(QString());
            label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
            pushButton_div->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
            delLastSymbBtn->setText(QCoreApplication::translate("MainWindow", "\342\214\253", nullptr));
            negativeButton->setText(QCoreApplication::translate("MainWindow", "\302\261", nullptr));
            pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
            pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
            pushButton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
            pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
            pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
            pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
            pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
            pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
            floatButton->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
            pushButton_mult->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
            pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
            pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
            resultButton->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
            pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
            pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
            line1_1->setText(QCoreApplication::translate("MatrixWindow", "0", nullptr));
            line1_2->setText(QCoreApplication::translate("MatrixWindow", "0", nullptr));
            line1_3->setText(QCoreApplication::translate("MatrixWindow", "0", nullptr));
            line1_5->setText(QCoreApplication::translate("MatrixWindow", "0", nullptr));
            line1_4->setText(QCoreApplication::translate("MatrixWindow", "0", nullptr));
            line1_6->setText(QCoreApplication::translate("MatrixWindow", "0", nullptr));
            line1_8->setText(QCoreApplication::translate("MatrixWindow", "0", nullptr));
            line1_7->setText(QCoreApplication::translate("MatrixWindow", "0", nullptr));
            line1_9->setText(QCoreApplication::translate("MatrixWindow", "0", nullptr));
            line2_9->setText(QCoreApplication::translate("MatrixWindow", "0", nullptr));
            line2_8->setText(QCoreApplication::translate("MatrixWindow", "0", nullptr));
            line2_2->setText(QCoreApplication::translate("MatrixWindow", "0", nullptr));
            line2_6->setText(QCoreApplication::translate("MatrixWindow", "0", nullptr));
            line2_4->setText(QCoreApplication::translate("MatrixWindow", "0", nullptr));
            line2_7->setText(QCoreApplication::translate("MatrixWindow", "0", nullptr));
            line2_1->setText(QCoreApplication::translate("MatrixWindow", "0", nullptr));
            line2_3->setText(QCoreApplication::translate("MatrixWindow", "0", nullptr));
            line2_5->setText(QCoreApplication::translate("MatrixWindow", "0", nullptr));
            text_action->setText(QString());
            text_ravno->setText(QCoreApplication::translate("MatrixWindow", "=", nullptr));
            multi_radioButton->setText(QCoreApplication::translate("MatrixWindow", "Multiplication", nullptr));
            plus_radioButton->setText(QCoreApplication::translate("MatrixWindow", "Addition", nullptr));
            label_1->setText(QCoreApplication::translate("MatrixWindow", "Matrix A", nullptr));
            label_2->setText(QCoreApplication::translate("MatrixWindow", "Matrix B", nullptr));
            label_3->setText(QCoreApplication::translate("MatrixWindow", "Matrix C", nullptr));
            label_5->setText(QCoreApplication::translate("MatrixWindow", "det B = ", nullptr));
            det_b_label->setText(QString());
            label_6->setText(QCoreApplication::translate("MatrixWindow", "det C = ", nullptr));
            det_c_label->setText(QString());
            label_4->setText(QCoreApplication::translate("MatrixWindow", "det A = ", nullptr));
            det_a_label->setText(QString());
            pushButton->setText(QCoreApplication::translate("MatrixWindow", "Calculate det", nullptr));
            pushButton_switchToMain->setText(QCoreApplication::translate("MatrixWindow", "Main calculator", nullptr));
        } // retranslateUi
};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // CALCULATOR_H
