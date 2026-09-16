#include<iostream>
using namespace std;
class Employee
{
    private:
    int a,b,c;
    public:
    int d,e;
    void data(int a1,int b1,int c10);
    void display(){
        cout<<"the value of a is :"<<a<<endl;
        cout<<"the value of b is :"<<b<<endl;
        cout<<"the value of c is :"<<c<<endl;
        cout<<"the value of d is:"<<d<<endl;
        cout<<"the value of e is:"<<e<<endl;
    }
};
void Employee ::data (int a1,int b1,int c1)
{
    a=a1;
    b=b1;
    c=c1;

}
int main ()
{
    Employee abhinandan;
    abhinandan.d=34;
    abhinandan.e=43;
    abhinandan.data(1,2,4);
    abhinandan.display();
}