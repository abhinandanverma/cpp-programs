#include<iostream>
using namespace std;
class coustamer{
public:
    string name;
    int account_number ,belance;
    coustamer(string n, int a ,int b){
        name = n;
        account_number = a;
        belance =  b;
    }
    void display(){
        cout<<"Name= " <<name<<endl <<"Acount_number= " <<account_number<<endl <<"Belance= "<<belance<<endl;
    }
};
int main(){
    coustamer c1("Abhinandan",5918,2000);
    c1.display();
    return 0;

}
