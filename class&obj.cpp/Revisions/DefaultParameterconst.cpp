#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int age;
    int rno;
    float marks;
    Student(string n,int a,int r,float m){   // this is the perameter constructor
        name=n;
        age =a;
        rno = r;
        marks = m;
    }
    Student(){ // this is the defualt constructor
        
    }
    void display(){
        cout<< " name: " << name << " age: " << age << " rno: " << rno << " marks: " << marks <<endl;
    }
};
int main(){
    Student s1("Abhinandan",19,3,9.9);
    Student s2;
    s2.name = "Arpit Gupta";
    s2.age = 23;
    s2.rno = 12;
    s2.marks = 10.1;
    s1.display();
    s2.display();
}
