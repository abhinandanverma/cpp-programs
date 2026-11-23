
#include <iostream>
using namespace std;

// Base Class
class Student {
public:
    int roll = 101;

    // Base class function
    void showRoll() {
        cout << "Roll Number: " << roll << endl;
    }
};

// Derived Class
class Result : public Student {
public:
    int marks = 85;

    // Derived class function
    void showMarks() {
        cout << "Marks: " << marks << endl;
    }
};

int main() {

    // Derived class object
    Result r1;

    // Calling base class function
    r1.showRoll();

    // Calling derived class function
    r1.showMarks();

    return 0;
}
