#include<iostream>
using namespace std;

template<typename T>
T maximum (T a, T b){
    if (a>b)
    {
        return a;
    }
    else
    {
        return b;
    }    
    
}
int main(){
    cout<< maximum(12,10)<<endl;
    cout<< maximum(2.5, 1.5);
    return 0;
}
