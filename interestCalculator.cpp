#include<iostream>
using namespace std;

string mySelf(){
    string firstName;
    int age;
    cout<< "\nEnter your full name: ";
    cin>>firstName;

    cout<< "Enter your age: ";
    cin>>age;

    return firstName;
    
}


// FUNCTION CALCULATING SIMPLE IMTEREST
void simpleInterest(){
    float interest;
    int principal;
    float rate;
    int time;

    cout<<"\nTax Calculator\nFill in the following Details\n";

    cout<< "Enter Principal: ";
    cin>> principal;
    
    cout<< "Enter Time: ";
    cin>> time;

    cout<< "Enter rate: ";
    cin>> rate;

    interest = (principal * time * rate) / 100;
    cout<< "Interest: GHC " <<interest<<"\n";
    }

    // AREA AND PERIMETER CALCULATOR
    void areaPerimeterCalculator(int figWidth, int figLength){

        cout<< "\nEnter Rectangle Width: ";
        cin>> figWidth;

        cout<< "Enter Rectangle Length: ";
        cin>> figLength;

        double rectangleArea = figLength * figWidth;
        double perimeterOfRectangle = 2 * (figLength + figWidth);

        cout<< "Area of Rectangle is: " << rectangleArea;
        cout<< "\nPerimeter of Rectangle: " <<perimeterOfRectangle;
}

int main(){ 
      mySelf();
      simpleInterest();
      areaPerimeterCalculator(100,200);
}