#include "car.h"
#include "drone.h"
#include "vehicle.h"
#include <QCoreApplication>
#include <iostream>
using std::vector;
using std::cout;
using std::endl;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    vector<Vehicle*> vehicles;
    //Agregar los vehiculos ahi
    vehicles.push_back(new Car("Toyota Camry 2010",100));
    vehicles.push_back(new Drone("DJI Mini 3",100));//No importa reallmente el 100

    //Doble for para recorrer horas y recorrer array
    for (int h = 0;h < 8;h++)
    {
        cout <<"["<<h<<"]"<<endl;
        for (Vehicle* vehi : vehicles){
            vehi->simulateHour();
            vehi->status();
            cout <<endl;

            Drone* drone2 = dynamic_cast<Drone*>(vehi);//ideal
            if (drone2 != nullptr)
            {

                if ((h%2) == 0 && h!= 0){
                    cout <<"Attempting flight for flyable vehicles..."<<endl;
                    drone2->fly(5);
                }

            }
            if ((h%3) == 0 && h!= 0){
                vehi->refuel(15);
            }

        }
        if ((h%3) == 0){
            cout <<"Refueling all vehicles (+15)"<<endl;}
        cout <<endl;
    }



    cout<<"---------------------------------------------"<<endl;
    cout<<"FINAL SUMMARY"<<endl;
    for (Vehicle* vehi : vehicles){
        vehi->status();
    }

    for (Vehicle* vehi : vehicles){
        delete vehi;
    }
    vehicles.clear();

    return a.exec();
}
