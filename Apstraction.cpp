#include<iostream>
using namespace std;
class ATM{ 
public:
    void withdraw(){
        cout<< "Money withdrawn successfilly"; 
    }

};
int main(){
    ATM a;
    a.withdraw();

    return 0;
}