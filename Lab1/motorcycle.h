#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include "vehicle.h"

class Motorcycle : public Vehicle
{
public:
    Motorcycle(std::string name,short fuel);
    void refuel(int cantidad) override;//VIRTUA
    void status() const override;//VIRTUAL
    void simulateHour () override;//Retorna void
};

#endif // MOTORCYCLE_H
