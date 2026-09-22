#include<iostream>
using namespace std;
class teacher{
    public:
    string name;
    string subject;
    double salary;
    teacher(string name,string subject,double salary){
        this->name=name;
        this ->subject =subject;
        this->salary =salary;
    
    }
    void desplay(){
        cout<< "Teacher: " << name << " subject: " << subject << "salary: " << salary <<endl;
    }  
};
int main(){
    teacher t1("Abhinandan", "c++"  ,25000);
    teacher t2(t1); /// this is the copy constructor
    teacher t3("Arpit","java",30000);
    t1.desplay();
    t2.desplay();
    t3.desplay();
}