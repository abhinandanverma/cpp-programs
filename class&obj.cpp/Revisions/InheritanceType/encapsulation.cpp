#include<iostream>
using namespace std;
class Student{
private:
 string name;
public:
 void setname(string n){
    name = n;
 }
 void display(){
    cout<< "Student name = "<< name <<endl;
 }
};
int main(){
    Student s;
    s.setname("Abhinandan");
    s.display();
}