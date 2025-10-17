#include "vehicle.h"
#include <algorithm>
#include <iostream>
using std::max;
using std::min;
using std::cout;
using std::endl;



Vehicle::Vehicle(std::string name,short fuelLevel) {
    this->name_ = name;
    this->fuelLevel_ = 100;
}


void Vehicle::normalizeFuelLevel(){
    int num = (int) Vehicle::getFuelLevel();
    num = std::max(num,0);//Revisa si no baja de 0
    num= std::min(num,100);//Revisa si no se queda mayor de 100
    Vehicle::fuelLevel_ = (short) num;
}

void Vehicle::simulateHour(){
    //Resta 5 de fuel por default
    Vehicle::fuelLevel_ -= 5;//Resta

    if (Vehicle::getFuelLevel()<=20)//Warning
    {
        cout<<"WARNING: LOW FUEL | Current Fuel:"<< Vehicle::getFuelLevel() <<endl;
    }

}
