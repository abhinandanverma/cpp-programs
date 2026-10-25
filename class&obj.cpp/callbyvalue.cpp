#include<iostream>
using namespace std;
void byValue(int x){ x = x+10;}
void byaddress(int *x){*x = *x+10;}
void byreference(int &x){x = x+10;}
int main(){
    int a=5;
    byValue(a);cout<<"byvalue: "<< a <<endl;//5
    byaddress(&a);cout<<"byaddress: " <<a <<endl; //15
    byreference(a);cout<<"byreference:" << a <<endl;
}