#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int rno;
    float CGPA;
};
int main(){
    student s1;
    s1.name = "Abhinandan";
    s1.rno = 3;
    s1.CGPA = 9.9;
    // cout<<s1.name<<" "<<s1.rno<<" "<<s1.CGPA<<" "<<endl;
    cout<<"NAME = "<<s1.name<<endl;
    cout<<"ROLLNO= "<<s1.rno<<endl;
    cout<<"CGPA= "<<s1.CGPA<<endl;
}