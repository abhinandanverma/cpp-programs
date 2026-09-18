#include<iostream>
using namespace std;
void add(int a=10,int b=20);
int main()
{
    add();
    add(10);
    add(5,6);
    return 0;
}
void add(int a,int b){
    cout<<"sum="<<a+b<<endl;
}