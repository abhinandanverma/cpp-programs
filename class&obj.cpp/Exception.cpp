#include<iostream>
using namespace std;
class customer
{
   string name;
   int balance,account_number; 
   public:
   customer(string name, int balcnce,int account_number){
    this->account_number = account_number;
    this->balance = balance;
    this->name = name;
   };
   //deposit
   void deposit (int amount) 
   {
      if (amount>0)
      {
        balance+=amount;
        cout <<amount<<" is credit successfully\n";
      }
      else
      {
        cout<<"amount should begreater than 0\n";
      }
    }
    //
    void withdraw(int amount)
    {
        if (amount>0&&amount<=balance)
        {
            balance-=amount;
            cout<< amount<<"is debited successfully\n";
        }
        else if(amount<0)
        {
           cout<<"amount should be greatr than 0\n";
        }
        else
        {
            cout<<"your balance is low<<endl";
        }
        
    }
};
int main()
{
customer c1("Abhinandan",5000,10);
c1.deposit(100);
c1.withdraw(6000);
}