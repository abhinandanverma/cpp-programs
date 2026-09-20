#include<iostream>
using namespace std;
class Parent{
    public:
    void display() // this is the function 1.this id the same function name.
    {
        cout<< " parent class "<<endl;
    }
     virtual void hello()
    {
        cout<< " this is the virtual fun " <<endl;
    }
};
class child
{
    public:
    void display()//  this is the function 2.this id the same function name.
    {
        cout<< " child class";
    }
    void hello()
    {
        cout<< " this is the not virtual fun " <<endl;
    }
};
int main(){
    child c1;
    c1.hello();
    
}