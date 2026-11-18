#include <iostream>
using namespace std;
template <typename T>
T maxsimum (T a, T b){
    if (a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    cout<<maxsimum(12 , 45)<<endl;
    cout<<maxsimum(1.23 , 2.34);
    
    return 0;
}