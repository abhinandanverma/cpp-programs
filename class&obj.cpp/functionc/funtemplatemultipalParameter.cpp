#include<iostream>
using namespace std;
    template <typename T1 , typename T2>
     void display(T1 a , T2 b){
        cout<< a <<endl;
        cout<< b <<endl;
     }
     int main(){
        display(10,3.14);
        display("Abhinandan","Age = 20");
     }
