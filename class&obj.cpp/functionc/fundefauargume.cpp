#include<iostream>
using namespace std;
void add (int a ,int b=10){
    cout<<" sum = " << a+b;
}
int main(){
    add(5);
    add(22,34);
    return 0;
}