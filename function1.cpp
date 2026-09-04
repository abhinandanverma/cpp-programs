#include<iostream>
using namespace std;
int add(int a=10,int b=20)
{
    return a+b;
}
int main()
{
    cout<<"sum with defalt agrgument:"<<add()<<endl;
    cout<<"sum with one agrgument:"<<add(5)<<endl;
    cout<<"sum with two agrgument:"<<add(12,34)<<endl;
    return 0;
}