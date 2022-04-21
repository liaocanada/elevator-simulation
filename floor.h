#ifndef FLOOR_H
#define FLOOR_H

#include <QObject>
#include "ecs.h"

class Floor: public QObject {
    Q_OBJECT

public:
    Floor(const int number);

private slots:
    void on_upButton_clicked();
    void on_downButton_clicked();

private:
    ECS* ecs;
    const int number;
};

#endif // FLOOR_H
