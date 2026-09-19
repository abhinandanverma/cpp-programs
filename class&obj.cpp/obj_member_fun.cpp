#include<iostream>
using namespace std;
class customer
{
    
    string name;
    int account_number;
    int balance;
    public:
    customer(string a,int b,int c){
        name=a;
        account_number=b;
        balance=c;
    }
    void display(){
        cout<<  "Name:" <<name<<  "account_number:" <<account_number<<  "balancce :" <<balance<<endl;
    }

};
int main(){
    customer A1("Abhinandan",123,1000);
    A1.display();
}