
#include <iostream>
#include <string>
using namespace std;

// Base Class
class Person {
public:
    string name;
    int age;

    // Person ki details show karne ka function
    void showPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived Class
class Student : public Person {
public:
    int rollNo;
    string course;

    // Student ki details show karne ka function
    void showStudent() {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    // Student class ka object
    Student s1;

    // Details assign karna
    s1.name = "Rahul Sharma";
    s1.age = 20;
    s1.rollNo = 15;
    s1.course = "BCA";

    // Student ki complete details print karna
    cout << "===== Student Details =====" << endl;

    // Base class ka function call
    s1.showPerson();

    // Derived class ka function call
    s1.showStudent();

    return 0;
}
