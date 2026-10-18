#include<iostream>
using namespace std;

// 1. CLASS banayi
class Student {
    public:  // access specifier
        string name;  // data member
        int roll;     // data member

        // member function
        void display() {
            cout << "Name: " << name << endl;
            cout << "Roll: " << roll << endl;
        }
}; // class ka ; mat bhoolna

int main() {
    // 2. OBJECT banaya
    Student s1;  // s1 is object of Student class
    
    // 3. Object ke through data dala
    s1.name = "Rahul";
    s1.roll = 101;
    
    // 4. Object ke through function call kiya
    s1.display();
    
    return 0;
}