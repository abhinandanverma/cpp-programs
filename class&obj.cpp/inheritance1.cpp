#include<iostream>
using namespace std;
class A{
public:
    int a;
    A(){
        a=10;
    }
};
class B:public A{
    public:
    int b;
    B(){
        b = 20;
    }
    void display(){
    cout<<"Value of a = "<<a<<endl;
    cout<<"Value of b = "<<b<<endl;

    }
};
int main(){
    B obj;
    obj.display();
};
