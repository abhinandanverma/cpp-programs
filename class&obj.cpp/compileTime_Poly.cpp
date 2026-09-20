#include<iostream>
using namespace std;
class Print{
    public:
    void seen(int number){
        cout<<" int " <<number<<endl;
    }
    void seen(char name){
        cout<< " char " <<name<<endl;
    }
};
int main(){
    Print p1;
    p1.seen('&');
   // p1.seen("");
}
