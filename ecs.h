#ifndef ECS_H
#define ECS_H

class ECS {
public:
    static ECS* getInstance();
    static void resetInstance();

    void addFloorRequest(int floor, bool up);
    void addCarRequest(QString carName, int floor);

protected:
    ECS();

private:
    static ECS* _instance;
};

#endif // ECS_H
