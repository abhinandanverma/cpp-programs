#include<iostream>
using namespace std;
class Student{
private:
    int age;
public:
    void setAge(int age){
        this->age = age;
    }
    void display(){
        cout<< "Age = "<< age <<endl;
    }
};
int main(){
    Student  S;
    S. setAge(20);
    S.display();

    return 0;
}