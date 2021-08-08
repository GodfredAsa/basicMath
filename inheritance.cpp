#include<iostream>
using namespace std;

class Fruits{
    public:
    string fruitName;
    int numberOfSeeds;
    string typeOfFruit;


Fruits(string name, int seedcount, string type){
    fruitName = name;
    numberOfSeeds = seedcount;
    typeOfFruit = type;
}

    public: 
    void ripen(){

        cout<< "\nthis fruit rippens well and looks tasty";
        cout<<"\n";

    }

};

int main(){

    Fruits drupe("Coconut", 1, "Drupe");

    cout<< "\nFruit Name: " + drupe.fruitName + "\nNumber of seeds:  "<<drupe.numberOfSeeds; 

    drupe.ripen();

}