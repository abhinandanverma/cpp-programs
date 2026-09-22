#include<iostream>
using namespace std;
int add (int a,int b)// functon add and a or b is the parameter
{
    return a+b; // send the sum back
}
int main()
{
    int x,y, result;
    //cout<<"Enter the first number :";
    cin>>x;
    //cout<<"Enter the second number:";
    cin>>y;
    result =add (x,y); // call the function
    cout<<"sum = "<<result; // display the result 
    return 0;
}
