#include<iostream>
using namespace std;

class Employee {

    public: string firstName;
    public: string lastName;
    public: string age;
    public: string programOfStudy;
  
    // private: int gpa;

    Employee(string fname, string lname, string myage, string program){
        firstName = fname;
        lastName = lname;
        // age  =  myAge;
        programOfStudy = program;
    }

// Setter
//     public: void set_gpa(double mygpa) {
//         gpa = mygpa;
//       }
// // Getter
//       int get_gpa() {
//         return gpa;
//       }
// };

int main() {
    Employee truth("Truth", "Gadagoe", "36", "Science");
    cout<<"\nEmployee Details \nName: " + truth.firstName + truth.lastName + "Age: "<<truth.age + "Program " + truth.programOfStudy;

    // truth.set_gpa(4.0);
    // cout<< "GPA: " << truth.get_gpa();
    return 0;
}