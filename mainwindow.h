#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "elevator.h"
#include "floor.h"
#include "_constants.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_elevatorA_clicked();
    void on_elevatorB_clicked();
    void on_elevatorC_clicked();

private:
    Ui::MainWindow *ui;

    Elevator* elevators[NUM_ELEVATORS];
    Floor* floors[NUM_FLOORS];
};
#endif // MAINWINDOW_H
