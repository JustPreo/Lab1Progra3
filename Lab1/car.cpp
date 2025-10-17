#include "car.h"
#include <iostream>

using std::cout;
using std::endl;

Car::Car(std::string name,short fuel):Vehicle(name,fuel) {
//Vacio cause why not
}
void Car::simulateHour(){
    if (fuelLevel_ == 0)
    {
        return;
    }
    fuelLevel_ -= 6;//Resta
    normalizeFuelLevel();//Revisar 0s y 100s
    if (getFuelLevel()<=20)//Warning
    {
        cout<<"WARNING: LOW FUEL | Car Fuel:"<< getFuelLevel() <<endl;
    }


}

void Car::refuel(int cantidad){
    this->fuelLevel_ += (short) cantidad;
    normalizeFuelLevel();//Call function
}


void Car::status() const{
//Nombre + Fuel
    cout <<"Car:" << name_ << "| Fuel : " <<Vehicle::fuelLevel_<<endl;
}
