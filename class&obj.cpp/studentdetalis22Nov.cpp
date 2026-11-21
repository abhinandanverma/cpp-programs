
#include <iostream>
using namespace std;

// Student class
class Student {
public:
    int roll;
    string name;
    float marks;

    // Parameterized Constructor
    Student(int r, string n, float m) {
        roll = r;
        name = n;
        marks = m;
    }

    // Function to display student details
    void display() {
        cout << "Student Details" << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {

    // Creating object and passing values
    Student s1(101, "Abhinandan", 85.5);

    // Calling display function
    s1.display();

    return 0;
}
