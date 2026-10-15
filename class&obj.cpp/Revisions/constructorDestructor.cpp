#include<iostream>
using namespace std;

class Student {
    public:
        string name;
        
        // Constructor
        Student(string n) {
            name = n;
            cout << "Object bana" << endl;
        }
        
        // Destructor
        ~Student() {
            cout << "Object khatam" << endl;
        }
        
        
        void show() {
            cout << "Name: " << name << endl;
        }
};

int main() {
    Student s1("Rahul"); // Constructor chalega
    s1.show();
    return 0; // Destructor chalega
}