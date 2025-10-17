#include "motorcycle.h"
#include <iostream>
using std::endl;
using std::cout;


Motorcycle::Motorcycle(std::string name , short fuel) : Vehicle(name,fuel) {}

void Motorcycle::simulateHour(){
    if (fuelLevel_ == 0)
    {
        return;
    }
    fuelLevel_ -= 4;

    normalizeFuelLevel();
    if (getFuelLevel()<=20)//Warning
    {
        cout<<"WARNING: LOW FUEL | Motorcycle Fuel:"<< getFuelLevel() <<endl;
    }


}

void Motorcycle::refuel(int cantidad){
    cantidad = (cantidad*3)/2;
    this->fuelLevel_ += (short) cantidad;
    normalizeFuelLevel();
}


void Motorcycle::status() const{
    //Nombre + Fuel
    cout <<"Motorcycle:" << name_<< "| Fuel : " <<fuelLevel_<<endl;
}

