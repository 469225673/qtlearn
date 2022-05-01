#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <QTime>
#include <QMessageBox>
#include <QFont>
#include <QFontDialog>
#include <QInputDialog>
#include <QPainter>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //创建定时器对象
    QTimer *timer = new QTimer(this);
    timer->setTimerType(Qt::PreciseTimer);
    //按钮的点击事件
    connect(ui->begin,&QPushButton::clicked,this,[=]()
    {
    //启动定时器
        if(timer->isActive())
        {
            timer->stop();//关闭定时器
            ui->begin->setText("开始");
        }
        else
        {
            ui->begin->setText("关闭");
            timer->start(1000);

        }
    });
    connect(timer,&QTimer::timeout,this,[=]()
    {
       QTime tm  = QTime::currentTime();
       //格式化当前系统时间
       QString tmstr = tm.toString("hh:mm:ss:zzz");
       ui->curTime->setText(tmstr);
    });
    setMaximumSize(1200,1200);//设置窗口最大尺寸
    setWindowTitle("你咋进来了！！！");//设置窗口标题
    setWindowIcon(QIcon("://image/tuyan.png"));//窗口显示图标
    ui->daye->setTristate(true);

    connect(ui->daye,&QCheckBox::clicked,this,[=](bool bl){
        if(bl)
        {
           ui->libai->setChecked(true);
           ui->gongben->setChecked(true);
           ui->houzi->setChecked(true);

        }
        else
        {
            ui->libai->setChecked(false);
            ui->gongben->setChecked(false);
            ui->houzi->setChecked(false);

        }
    });
    connect(ui->libai,&QCheckBox::stateChanged,this,&MainWindow::checks);
    connect(ui->gongben,&QCheckBox::stateChanged,this,&MainWindow::checks);
    connect(ui->houzi,&QCheckBox::stateChanged,this,&MainWindow::checks);

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    int x = 50 + rand() %500;
    int y = 50 + rand() %500;

    QRect rect = this->frameGeometry();
    //move(rect.topLeft()+QPoint(100,200));
    move(rect.topLeft()+QPoint(x,y));

}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::about(this,"让你点你就点啊","抽根烟冷静一下");
}

void MainWindow::on_pushButton_3_clicked()
{
    bool ok;
    QFont ft = QFontDialog::getFont(&ok,QFont("微软雅黑",12,QFont::Bold),this,"选择字体");
    // = QFontDialog::getFont(&ok,QFont("微软雅黑",12,QFont::Bold),this,"选择字体");
    QApplication::setFont(ft);
   // ui->label->setFont(ft);


}

void MainWindow::on_pushButton_4_clicked()
{
    QString name = QInputDialog::getText(this,"名字","你的姓名：",QLineEdit::Normal,"");
    ui->lineEdit->setText(name);
    int ret = QInputDialog::getInt(this,"年龄","你的当前年龄: ",10,1,100,1);
    ui->lineEdit_2->setText( QString().setNum(ret));
    QStringList fruits;
    fruits<<"苹果"<<"香蕉"<<"橘子"<<"葡萄";
    QString fruit = QInputDialog::getItem(this,"选择喜欢的水果","你最喜欢的水果是：",fruits);
    ui->lineEdit_3->setText(fruit);
    QString ttt = QInputDialog::getMultiLineText(this,"hahaha","说点什么吧");
    ui->textEdit->setText(ttt);
}

void MainWindow::checks(int state)
{
    if(state==Qt::Checked)
    {
        m_num++;
    }
    else {
        m_num--;
    }
    if(m_num==3)
    {
        ui->daye->setCheckState(Qt::Checked);
    }
    else if(m_num==0)
    {
        ui->daye->setCheckState(Qt::Unchecked);
    }
    else {
        ui->daye->setCheckState(Qt::PartiallyChecked);
    }
}

