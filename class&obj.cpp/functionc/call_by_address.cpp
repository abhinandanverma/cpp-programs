#include<iostream>
using namespace std;
void change (int *x)
{
    *x=20;
}
int main(){
    int a=10;
    cout<<"Before:"<<a<<endl;
    change(&a);
    cout<<"After: "<< a;
    return 0;
}
