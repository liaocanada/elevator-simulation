#ifndef ELEVATORDIALOG_H
#define ELEVATORDIALOG_H

#include <QDialog>
#include <QDebug>
#include "elevator.h"

namespace Ui {
class ElevatorDialog;
}

class ElevatorDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ElevatorDialog(Elevator* elevator, QWidget *parent = nullptr);
    ~ElevatorDialog();

private:
    Ui::ElevatorDialog *ui;
    ECS* ecs;
    Elevator* elevator;
};

#endif // ELEVATORDIALOG_H
