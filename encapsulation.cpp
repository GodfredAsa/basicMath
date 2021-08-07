#include<iostream>
using namespace std;

class Employee {

    public: string firstName;
    public: string lastName;
    public: int age;
    public: string programOfStudy;
  
    private: int gpa;

// Setter
    public: void set_gpa(double mygpa) {
        gpa = mygpa;
      }
// Getter
      int get_gpa() {
        return gpa;
      }
};

int main() {
    Employee truth;
    truth.set_gpa(4.0);
    cout<< "GPA: " << truth.get_gpa();
    return 0;
}