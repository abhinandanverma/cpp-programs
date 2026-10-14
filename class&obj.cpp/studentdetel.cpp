
#include <iostream>
using namespace std;

// Student naam ki class banayi
class Student {
public:
    string name;
    int rollNo;
    float marks;

    // Student ki details input lene ke liye function
    void input() {
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> rollNo;

        cout << "Enter marks: ";
        cin >> marks;
    }

    // Student ki details display karne ke liye function
    void display() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    // Student class ka object banaya
    Student s1;

    // Functions ko call kiya
    s1.input();
    s1.display();

    return 0;
}
