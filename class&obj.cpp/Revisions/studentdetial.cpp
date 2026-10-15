#include<iostream>
using namespace std;
class StudDiteal{
public:
  string name;
  int num;
  float cgpa;
  StudDiteal(string name ,int num, float cgpa ){
    this->name = name;
    this->num = num;
    this->cgpa = cgpa;
  }
  void display(){
    cout << name <<" " << num << " " << cgpa << endl;
  }
};
int main(){
    StudDiteal s1("Abhinandan", 23 ,9.9);
    s1.display();

}