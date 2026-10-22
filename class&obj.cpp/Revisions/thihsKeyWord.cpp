#include<iostream>
using namespace std;
class Cricketer{
public:
 string name;
 int run;
 Cricketer(string name, int run){
    this->name =name;
    this->run =run;
 }
 void display(){
    cout<< name <<" " << run <<endl;
 }

};
int main(){
    Cricketer c1("virat",25000);
    Cricketer c2("Rohit", 18000);
    c1.display();
    c2.display();
}