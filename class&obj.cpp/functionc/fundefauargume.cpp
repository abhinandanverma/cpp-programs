#include<iostream>
using namespace std;
void add (int a ,int b=10){ //make aa defalt fun with argument
    cout<<" sum = " << a+b;
}
int main(){
    add(5); // call to the function
    add(22,34);// 
    return 0;
}