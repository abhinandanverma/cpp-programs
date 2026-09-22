#include<iostream>
using namespace std;
class Parent{
    public:
    void display() // this is ths over writing the function this is the function 1.this id the same function name.
    {
        cout<< " parent class "<<endl;
    }
};
class child
{
    public:
    void display()// this is ths over writing the function this is the function 2.this id the same function name.
    {
        cout<< " child class";
    }
};
int main(){
    child c1;
    c1.display();
    // Parent p1;
    // p1.display();
}