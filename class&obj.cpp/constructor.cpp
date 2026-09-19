#include<iostream>
using namespace std;
class techer{
    public:
    string name;
    string subject;
    double salary;
    techer(string name,string subject,double salary){
        this->name=name;
        this ->subject =subject;
        this->salary =salary;
    
    }
    void desplay(){
        cout<< "Teacher: " << name << " subject: " << subject << "salary: " << salary <<endl;
    }  
};
int main(){
    techer t1("Abhinandan", "c++"  ,25000);
    t1.desplay();
}