#include<iostream>
using namespace std;
class student // student
{
    public:
    string name;
    int age;
    void display(){
        cout<<  " name: " << name << " Age: " <<age<<endl;
    }
};
int main(){
    student s1;//object
    s1.name = "Abhinandan";// object ke though data access
    s1.age = 19;
    s1.display();// member function call
}
