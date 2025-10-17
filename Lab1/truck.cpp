#include "truck.h"
#include <iostream>
using std::cout;
using std::endl;

Truck::Truck(std::string name, short fuel):Vehicle(name,fuel) {
//Vacio
}
void Truck::simulateHour(){
    if (fuelLevel_ == 0)
    {
        return;

    }
    fuelLevel_ -= 9;

    normalizeFuelLevel();
    if (getFuelLevel()<=20)//Warning
    {
        cout<<"WARNING: LOW FUEL | Truck Fuel:"<< getFuelLevel() <<endl;
    }

}

void Truck::refuel(int cantidad){
    cantidad = cantidad/2;
    this->fuelLevel_ += (short) cantidad;
    normalizeFuelLevel();//Call function
}


void Truck::status() const{
    //Nombre + Fuel
    cout <<"Truck:" << name_<< "| Fuel : " <<fuelLevel_<<endl;
}
