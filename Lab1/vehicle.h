#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>

class Vehicle
{
protected:
    std::string name_;
    short fuelLevel_;
public:
    Vehicle(std::string name,short fuelLevel);
    void normalizeFuelLevel();
    virtual ~Vehicle() {}
    std::string getName(){return this->name_;}//Retorna name
    short getFuelLevel() {return this->fuelLevel_;}//Retorna el fuel


    virtual void refuel(int cantidad) = 0;//VIRTUAL PURA
    virtual void status() const = 0;//VIRTUAL PURA

    virtual void simulateHour();//Retorna void
};

#endif // VEHICLE_H
