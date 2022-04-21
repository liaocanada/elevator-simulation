#ifndef ELEVATOR_H
#define ELEVATOR_H

#include <QObject>
#include <QString>
#include <QPushButton>
#include "_constants.h"
#include "ecs.h"

class Elevator: public QObject {
    Q_OBJECT

public:
    Elevator(const QString name, const int xStart);
//    void move(int targetFloor);
//    bool isIdle();
    const QString getName();

private slots:
    void on_floorButton_clicked();
//    void on_fireButton_clicked();

private:
    ECS* ecs;
    const QString name;
    const int x;
    int y;
    int speed;
    bool buttonsIlluminated[NUM_FLOORS];
};

#endif // ELEVATOR_H
