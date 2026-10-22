#include<iostream>
using namespace std;
int sum (int a,int b){
    int sum=a+b;
    return sum;
}
int main(){
    int num1,num2;
    cout<<"enter the first number:";
    cin>>num1;
    cout<<"enter the second number:";
    cin>>num2;
    cout<<"the sum is :"<<sum(num1,num2);
    return 0;
}