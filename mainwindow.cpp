#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::MainWindow){
	ui->setupUi(this);
}

void MainWindow::on_OpenBTN_clicked(){
    QString FilePath = QFileDialog::getOpenFileName(this, "Open images", QDir::homePath(), "Images (*.png *.jpg)");

    if(!FilePath.isEmpty()){
        QPixmap img(FilePath);
        ui->DisplayLB->setPixmap(img);
    }
}

MainWindow::~MainWindow(){
	delete ui;
}
