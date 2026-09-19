#include<iostream>
using namespace std;
void swapPoniter(int* a,int* b){
    int temp = *a; // 4  4   5
    *a = *b;       // 4  5   5
    *b = temp;     // 4  5   4 
}
int main(){
    int x=4;
    int y=5;
    cout<<x<<" "<<y<<" "<<endl;
    swapPoniter(&x,&y);
    cout<<x<<" "<<y<<" "<<endl;
    return 0;
}
