#include<iostream>
using namespace std;
class Print{
    public:
    void seen(int number){  ///this is the function 1.
        cout<<" int " <<number<<endl;
    }
    void seen(char name){ // this is the function 2.
        cout<< " char " <<name<<endl;
    }
};
int main(){
    Print p1;
    p1.seen('&');
    p1.seen(101);
}
