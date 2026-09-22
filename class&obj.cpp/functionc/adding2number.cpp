#include<iostream>
using namespace std;
int add (int a,int b)
{
    return a+b;
}
int main()
{
    int x,y, result;
    cout<<"Enter the first number :";
    cin>>x;
    cout<<"Enter the second number:";
    cin>>y;
    result =add (x,y);
    cout<<"sum = "<<result;
    return 0;
}
