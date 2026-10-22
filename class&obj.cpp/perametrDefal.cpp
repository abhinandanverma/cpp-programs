#include<iostream>
using namespace std;
class Student{
public:
  string name;
  int rollNO;
  float gpa;
  Student(){

  }
Student(string name, int rollNO, float gpa) {
    this-> name = name;
    this->rollNO = rollNO;
    this->gpa = gpa;

}
void display(){
    cout  << name <<" "<< rollNO << " "<< gpa <<endl;
}
 };
 int main(){
    Student s1("Abhinandan",3,9.9);
    s1.display();
    Student s2;
    s2.name = "Arpit";
    s2.rollNO = 12;
    s2.gpa = 9.9;
    s2.display();
 }