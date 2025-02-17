#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::MainWindow){
	ui->setupUi(this);
}

void MainWindow::on_actionOpen_triggered(){
    QString FilePath = QFileDialog::getOpenFileName(this, "Open images", QDir::homePath(), "Images (*.png *.jpg *.jpeg)");

    if(!FilePath.isEmpty()){
        QPixmap img(FilePath);
        ui->DisplayLB->setPixmap(img);
        ui->actionCloseIMG->setEnabled(true);
    }
}

void MainWindow::on_OpenBTN_clicked(){
    MainWindow::on_actionOpen_triggered();
}

void MainWindow::on_actionExitApp_triggered(){
    QApplication::quit();
}

void MainWindow::on_actionCloseIMG_triggered(){
    ui->DisplayLB->clear();
    ui->DisplayLB->setText("Imagen not loaded");
    ui->actionCloseIMG->setDisabled(true);
}

MainWindow::~MainWindow(){
	delete ui;
}
