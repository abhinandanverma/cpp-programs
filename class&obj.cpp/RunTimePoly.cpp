#include<iostream>
using namespace std;
class Parent{
    public:
    void display(){
        cout<< " parent class "<<endl;
    }
};
    
class child{
        public:
    void display(){
        cout<< " child class";
    }
};
int main(){
    child c1;
    c1.display();
    // Parent p1;
    // p1.display();
}