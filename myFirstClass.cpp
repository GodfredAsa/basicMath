#include<iostream>
using namespace std;
class Car{

    public: string carName;
    public: string carModel;
    public: string manufacturingYear;
    public: int nDoors;

//  Contructor
    Car(string Name, string Model, string Year, int doors){
        carName = Name;
        carModel = Model;
        manufacturingYear = Year;
        nDoors = nDoors;
    }

    public: void startCar(){
        cout<< "\nCar started";
    }

    public: void stopCar(){
        cout<<"\nCar stopped" ;
    }

    public: double Cost(int tax = 25, int amount=200000){
        double calTax = (tax * amount) / 100;
        cout<< "\nCalculated Tax: GHC "<< calTax;
        return calTax;
    }

    };


int main(){

    Car BMW("BMW", "BMW-1001-ABZ-23", "2021-08-5", 4);

    cout<< "\nCar Name: " + BMW.carName  + "\nCar Model: " + BMW.carModel + "\nCar Manu.: "+ BMW.manufacturingYear + "\nNumber of Doors: "<< BMW.nDoors;
    BMW.carName;
    BMW.startCar();
    BMW.stopCar();
    BMW.Cost();
    return 0;
}