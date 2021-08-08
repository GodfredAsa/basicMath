#include<iostream>
using namespace std;

class Fruits{
    public:
    string fruitName = "coconut";
    int numberOfSeeds;
    string typeOfFruit;


    // method
    public: 
    void ripen(){

        cout<< "\nThe fruit ripens";
    }

// constructor
Fruits(string name, int seedcount, string type){
    fruitName = name;
    numberOfSeeds = seedcount;
    typeOfFruit = type;
}

};

// inheritance
class Coconut: public Fruits{
    public: int numberOfLayers = 3;
};



// main method
int main(){
    Fruits drupe("Coconut", 1, "Drupe");
    cout<< "\nFruit Name: " + drupe.fruitName + "\nNumber of seeds:  "<<drupe.numberOfSeeds; 
    drupe.ripen();

    // Coconut coco();
    // cout<< coco.fruitName();

}