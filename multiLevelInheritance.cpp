#include<iostream>
using namespace std;

class Vehicle{
    public: void starts(){

        cout<< "All vehicles are driven ";

    }
};


class Toyota: public Vehicle{

    public: string name = "Landcruiser";
};


int main(){

    return 0;
}