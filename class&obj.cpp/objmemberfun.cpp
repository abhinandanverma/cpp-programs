#include<iostream>
using namespace std;
class Student{
     string name;
     public:
        Student(string n)
        {
            name = n ;
        }
        void display(){
            cout<< " Name: " <<name <<endl;
        }
};
int main(){
    Student s1("Abhinandan");
    s1.display();
}