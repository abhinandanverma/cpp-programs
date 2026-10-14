#include<iostream>
using namespace std;
class Criketer{
    public:
    string name;
    int run;
    float avg;
    Criketer(string name,int run,float avg){
        this->name = name;
        this->run = run;
        this->avg = avg;
    }
    void display(){
        cout << name << run << avg <<endl;
    }
};
int main(){
    Criketer* c1= new Criketer("Virat kohli",25000,55.2);
    c1->display();
}
