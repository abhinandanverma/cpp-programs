
#include <iostream>
using namespace std;

// Student class banana
class Student {
public:
    string name;
    int rollNo;
    int marks;

    // Student ki details print karne ka function
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    // Do objects banana
    Student s1;
    Student s2;

    // First student ki details set karna
    s1.name = "Abhinandan";
    s1.rollNo = 3;
    s1.marks = 85;

    // Second student ki details set karna
    s2.name = "Rahul";
    s2.rollNo = 10;
    s2.marks = 90;

    // Dono objects ka function call karna
    cout << "First Student Details:" << endl;
    s1.display();

    cout << "\nSecond Student Details:" << endl;
    s2.display();

    return 0;
}
