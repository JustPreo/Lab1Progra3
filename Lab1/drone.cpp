#include "drone.h"
#include <iostream>
using std::cout;
using std::endl;

Drone::Drone(std::string name,short battery) : Vehicle(name,battery){}
void Drone::simulateHour(){

    fuelLevel_ -= 8;

    normalizeFuelLevel();
    if (getFuelLevel()<=20)//Warning
    {
        cout<<"WARNING: LOW BATTERY | Drone Battery:"<< getFuelLevel() <<endl;
    }


}

void Drone::refuel(int cantidad){
    cantidad = (cantidad*3)/2;
    this->fuelLevel_ += (short) cantidad;
    normalizeFuelLevel();
}


void Drone::status() const{
    //Nombre + Fuel
    cout <<"Drone:" << name_<< "| Battery : " <<fuelLevel_<<endl;
}

void Drone::fly(int minutes){
    if (fuelLevel_ == 0)
    {
        return;

    }
    this->fuelLevel_ -= (minutes * 3);
    normalizeFuelLevel();
    cout <<name_<< " flew for " << minutes << " minutes"<<endl;
}

