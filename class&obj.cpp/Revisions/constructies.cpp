#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int ROllNo;
    float GPA;
    Student(string name, int RollNo, float GPA){
        this -> name = name;
        this -> ROllNo = RollNo;
        this -> GPA = GPA;

    }
    void display(){
        cout<< "Name: " << name << " ROllNo: "<<ROllNo<<" GPA: " <<GPA<<endl;
    }
};

int main(){
    Student s1("Arpit Gupata",12,9.9);
    //cout<<s1.name<<" "<<s1.RollNo<<" "<<s1.GPA<<endl;
    s1.display();
}