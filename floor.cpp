#include <QDebug>
#include "floor.h"

Floor::Floor(const int number): number(number) {
    ecs = ECS::getInstance();
}

void Floor::on_upButton_clicked() {
    qDebug() << "Up clicked for floor " << number;
}

void Floor::on_downButton_clicked() {
    qDebug() << "Down clicked for floor " << number;
}
