#include<iostream>
using namespace std;
class Calculator
{
    public:
    int add(int a,int b)
    {
        return a+b;
    }
    int add(int a,int b,int c)
    {
        return a+b+c;
    }
    int add(float a,float b)
    {
        return a+b;
    }
};
int main(){
// Calculator c1;
// Calculator c2;
// Calculator c3;
// cout<< "sum = " << c1.add(10 ,20) <<endl;
// cout<< "sum = " << c2.add(10,20,30) <<endl;
// cout<< "sum = " << c3.add(2.5f,3.5f) <<endl;

Calculator c1;
cout<< "sum = " << c1.add(10 ,20) <<endl;
cout<< "sum = " << c1.add(10,20,30) <<endl;
cout<< "sum = " << c1.add(2.5f,3.5f) <<endl;
}
