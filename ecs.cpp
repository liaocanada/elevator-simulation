#include<QDebug>
#include "ecs.h"

ECS* ECS::_instance = 0;

ECS::ECS() {}

ECS* ECS::getInstance() {
    if (_instance == 0) {
        _instance = new ECS;
    }
    return _instance;
}

void ECS::resetInstance() {
    delete _instance;
    _instance = NULL;
}

void ECS::addFloorRequest(int floor, bool up) {
    qDebug() << "Add floor request from floor " << floor << " going " << (up ? "up" : "down");
}

void ECS::addCarRequest(QString carName, int floor) {
    qDebug() << "Add car request" << carName << "-->" << floor;
}
