#include<iostream>
using namespace std;
void callbyrefer(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int x=5, y=3;
    callbyrefer(x,y);
        cout<<"the value is x: "<<x<< " ,the value is y: "<<y<<endl;
}