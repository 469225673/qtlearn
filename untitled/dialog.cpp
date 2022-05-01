#include "dialog.h"
#include "ui_dialog.h"
#include <QMessageBox>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    setWindowIcon(QIcon("://image/xiyan.png"));
    setWindowTitle("你没有账号密码是进不来的！！！");//设置窗口标题


}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    if(ui->lineEdit->text() ==tr("chy")&&ui->lineEdit_2->text() ==tr("123456"))
    {
        accept();
    }
    else{
        QMessageBox::warning(this,tr("错误"),tr("用户名或者密码错误"),QMessageBox::Yes);
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
        ui->lineEdit->setFocus();
    }
}
