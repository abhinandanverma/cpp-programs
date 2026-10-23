#include<iostream>
using namespace std;
 int minoftwo(int a, int b){

    if (a<b){
        return a;
    }
    else {  
        return b;
        }
    }
 
 int main(){
    cout<<minoftwo(5,3) <<endl;
 }