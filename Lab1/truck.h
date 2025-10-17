#ifndef TRUCK_H
#define TRUCK_H

#include "vehicle.h"
class Truck:public Vehicle
{
public:
    Truck(std::string name,short fuel);
    void refuel(int cantidad) override;//VIRTUA
    void status() const override;//VIRTUAL
    void simulateHour () override;//Retorna void
};

#endif // TRUCK_H
