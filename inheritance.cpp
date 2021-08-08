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

        cout<< "\nThe fruit ripens";
        cout<<"\n";

    }

};

int main(){

    Fruits drupe("Coconut", 1, "Drupe");

    cout<< "\nFruit Name: " + drupe.fruitName + "\nNumber of seeds:  "<<drupe.numberOfSeeds; 

    drupe.ripen();

}