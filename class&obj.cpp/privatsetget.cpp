#include<iostream>
using namespace std;
class BankAccount{
private:
    int balance;
public:
    void setBalance(int b){
        balance = b;

    }  
    int getBalance(){
        return balance;
    }  
    void display(){
        cout<<"Balance = "<<balance<<endl;;
    }
};
int main(){
    BankAccount B1,B2;
    B1.setBalance(1000);
    // cout<<"Balance = "<< B1.getBalance()<<endl;
    B1.display();
    B2.setBalance(299);
    B2.display();
    return 0;
}