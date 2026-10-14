
#include <iostream>
using namespace std;

// Employee class
class Employee {
public:
    string name;
    int salary;

    // Employee ki details input karna
    void input() {
        cout << "Enter employee name: ";
        cin >> name;

        cout << "Enter salary: ";
        cin >> salary;
    }

    // Employee ki details display karna
    void display() {
        cout << "\nEmployee Name: " << name << endl;
        cout << "Salary: Rs. " << salary << endl;
    }
};

int main() {
    // Object banana
    Employee e1;

    // Functions call karna
    e1.input();
    e1.display();

    return 0;
}
