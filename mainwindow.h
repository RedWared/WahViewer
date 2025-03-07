#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPixmap>
#include <QFileDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
	class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
	Q_OBJECT

public:
	MainWindow(QWidget *parent = nullptr);
	~MainWindow();

private:
	Ui::MainWindow *ui;

private slots:
    void on_OpenBTN_clicked();
    void on_actionOpen_triggered();
    void on_actionExitApp_triggered();
    void on_actionCloseIMG_triggered();
};
#endif // MAINWINDOW_H
