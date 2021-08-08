#include<iostream>
using namespace std;

/*
This is a multi-level inheritance where Vehicle is the base class, Toyota inherits Vehicle and Landcruiser also inherits from Toyota.
*/
// Base class
class Vehicle{
    public: void starts(){
        cout<< "All vehicles are driven ";
    }
};


// sub class 
class Toyota: public Vehicle{
    public: string brand = "Toyota";
};

// sub class to Toyota and inherits it
class Landcruiser: public Toyota{

};


int main(){
//instance of Landcruiser class 
    Landcruiser myFirst;
//accessing the method in the base class
    myFirst.starts();
//accessing brand attribute in the base or super class
    cout<<"\nThe brand name is: " + myFirst.brand;
    return 0;
}