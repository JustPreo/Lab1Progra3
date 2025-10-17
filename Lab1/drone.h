#ifndef DRONE_H
#define DRONE_H

#include "IFlyable.h"
#include "vehicle.h"


class Drone : public Vehicle,IFlyable
{
public:
    Drone(std::string name , short fuel);
    void refuel(int cantidad) override;
    void status() const override ;
    void simulateHour() override;
    void fly(int minutes) override;
};

#endif // DRONE_H
