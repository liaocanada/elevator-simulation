#include "elevator.h"

Elevator::Elevator(const QString name, const int xStart):
    name(name), x(xStart), y(0), speed(0), buttonsIlluminated{false} {

    ecs = ECS::getInstance();
}

void Elevator::on_floorButton_clicked() {
    QPushButton* button = (QPushButton*) sender();
    int floor = button->text().toInt();
    ecs->addCarRequest(this->name, floor);
}

const QString Elevator::getName() {
    return this->name;
}
