#include<iostream>
using namespace std;
int factoril(int n ){
    int fact=1;
    for(int i=1;i<=n;i++) {
         fact *=i;
    }

    return fact;

}
int main(){
    cout<<factoril(4)<<endl;
    cout<<factoril(5)<<endl;
    return 0;
}
    