#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "elevatordialog.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    elevators[0] = new Elevator("A", 130);
    elevators[1] = new Elevator("B", 170);
    elevators[2] = new Elevator("C", 210);

    for (int i = 0; i < NUM_FLOORS; ++i) {
        floors[i] = new Floor(i+1);
    }
    connect(ui->floor1_up, SIGNAL(clicked()), floors[0], SLOT(on_upButton_clicked()));
    connect(ui->floor1_down, SIGNAL(clicked()), floors[0], SLOT(on_downButton_clicked()));
    // TODO multiple floors
}

MainWindow::~MainWindow() {
    delete ui;
    ECS::resetInstance();

    delete elevators[0];
    delete elevators[1];
    delete elevators[2];

    for (int i = 0; i < NUM_FLOORS; ++i) {
        delete floors[i];
    }
}

void MainWindow::on_elevatorA_clicked() {
    ElevatorDialog elevatorDialog(elevators[0]);
    elevatorDialog.exec();
}

void MainWindow::on_elevatorB_clicked() {
    ElevatorDialog elevatorDialog(elevators[1]);
    elevatorDialog.exec();
}

void MainWindow::on_elevatorC_clicked() {
    ElevatorDialog elevatorDialog(elevators[2]);
    elevatorDialog.exec();
}
