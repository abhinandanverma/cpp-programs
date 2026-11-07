#include<iostream>
using namespace std;
class Grandfather{
    public:
        void showGrandfather(){ // Base class
            cout<< "Grandfather class"<<endl;
        }
};
class father:public Grandfather { // Derived Class
    public:
        void showfather(){
            cout<< "This is the father classs "<<endl;
        }
};
class Son : public father{ // Final derived Class
    public:
        void showSon(){
            cout<< "This is the son class "<<endl;
        }
};
int main(){

    Son s1;
    s1.showfather();
    s1.showGrandfather();
    s1.showSon();
    return 0;

}