#include "stdio.h"
#include <QApplication>
#include <QWidget>
#include <QLabel>




int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    // 创建界面
    QWidget *widgetMain = new QWidget();


    // 修改参数
    widgetMain->setWindowTitle("GODay"); //可显示团队名称
    widgetMain->resize(300,150);//窗口大小
    widgetMain->setStyleSheet("background-color: black");


    // 创建标签
    QLabel *labelTemperatureText = new QLabel();
    // 修改便签内容
    labelTemperatureText->setText("T-");
    // 设置父控件
    labelTemperatureText->setParent(widgetMain);
    labelTemperatureText->setGeometry(0, 50, 50, 50);//setGeometry(x, y, w, h)x,y是左上角坐标w是宽度h是高度
    labelTemperatureText->setStyleSheet("background-color: black; font-size:20px;color: white"); // todo 完成字号、字体设置//背景样式


    // 创建标签
    QLabel *labelTemperatureData = new QLabel(widgetMain);//等价于labelTemperatureText->setParent(widgetMain);
    // 修改标签内容
    labelTemperatureData->setText("36.5");
    labelTemperatureData->setGeometry(50, 0, 100, 150);//
    labelTemperatureData->setStyleSheet("background-color:black; font-size:20px;color: rgb(255,0,255)");// todo 完成字号、字体设置


    // 更新主窗口显示内容
    widgetMain->show();


    return a.exec();
}
