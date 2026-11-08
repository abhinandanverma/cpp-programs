
#include <iostream>
using namespace std;

// Student class
class Student {
public:
    int roll;
    string name;

    // Parameterized Constructor
    Student(int r, string n) {
        roll = r;
        name = n;
    }

    // Student ki details show karne ka function
    void display() {
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {

    // Object banate time values pass ki
    Student s1(101, "Abhinandan");

    // Details display ki
    s1.display();

 return 0;
}
