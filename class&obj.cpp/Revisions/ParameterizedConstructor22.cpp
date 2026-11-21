#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int age;
 Student(string name, int age){
    this->name = name;
    this->age = age;
 }
 void display(){
    cout<<"STUDENT--"<<endl;
    cout<< "Name:" << name <<endl;
    cout<< "Age:" << age <<endl;
 }
};
int main(){
    Student s1("Abhinandan",103);
    s1.display();
}



// #include <iostream>
// using namespace std;

// class Student {
// public:
//     int roll;
//     string name;

//     // Parameterized Constructor
//     Student(int r, string n) {
//         roll = r;
//         name = n;
//     }

//     void display() {
//         cout << "Roll: " << roll << endl;
//         cout << "Name: " << name << endl;
//     }
// };

// int main() {

//     // First object
//     Student s1(101, "Abhinandan");

//     // Second object
//     Student s2(102, "Rahul");

//     s1.display();
//     s2.display();

//     return 0;
// }
