#include<iostream>
using namespace std;
class student{
public:
    string name;
    int rno;
    float cgpa;
    student(string s, int r,float c){
        name=s;
        rno=r;
        cgpa=c;
    }
};
int main(){
    student s1("udit verma", 76,8.2);
    // s1.name="Abhinandan verma";
    // s1.rno= 3;
    // s1.cgpa=7.1;

    // student s2;
    // s2.name="Ajeet vrema";
    // s2.rno= 12;
    // s2.cgpa=.81;

    cout<<s1.name<<" "<<s1.rno<<" "<<s1.cgpa<<endl;
    // cout<<s2.name<<" "<<s2.rno<<" "<<s2.cgpa<<endl;
}