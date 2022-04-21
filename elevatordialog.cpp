#include "elevatordialog.h"
#include "ui_elevatordialog.h"

ElevatorDialog::ElevatorDialog(Elevator* elevator, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ElevatorDialog),
    elevator(elevator)
{
    ui->setupUi(this);
    connect(ui->button1, SIGNAL(clicked()), elevator, SLOT(on_floorButton_clicked()));
    connect(ui->button2, SIGNAL(clicked()), elevator, SLOT(on_floorButton_clicked()));
    connect(ui->button3, SIGNAL(clicked()), elevator, SLOT(on_floorButton_clicked()));
    connect(ui->button4, SIGNAL(clicked()), elevator, SLOT(on_floorButton_clicked()));
    connect(ui->button5, SIGNAL(clicked()), elevator, SLOT(on_floorButton_clicked()));
    connect(ui->button6, SIGNAL(clicked()), elevator, SLOT(on_floorButton_clicked()));

    // Display elevator name
    QString carDescription = "Car " + elevator->getName() + "\nMax 800kg\n10 Passengers";
//    carDescription.prepend("Car ");
//    carDescription.append("\nMax 800kg\n10 Passengers");
    ui->carDescription->setPlainText(carDescription);

    // Light up already selected buttons
}

ElevatorDialog::~ElevatorDialog() {
    delete ui;
}
