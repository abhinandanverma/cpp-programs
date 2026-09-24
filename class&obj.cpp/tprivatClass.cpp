#include<iostream>
using namespace std;
class BankAccount
{
    private:
     int  balance;
    public:
      void setBalance(int balance){
     this-> balance =balance;
    }
    int display(){
        return balance;
    }
};
int main(){
    BankAccount b1;
    b1.setBalance(1000);
    cout<<"Balance: "<< b1.display();
}