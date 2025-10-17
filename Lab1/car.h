#ifndef CAR_H
#define CAR_H
#include "vehicle.h"

class Car : public Vehicle
{
private:
//A ver
public:
    Car(std::string name,short fuel);

    void refuel(int cantidad) override;//VIRTUA
    void status() const override;//VIRTUAL
    void simulateHour () override;//Retorna void
};

#endif // CAR_H
