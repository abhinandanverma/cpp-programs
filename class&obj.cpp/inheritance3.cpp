#include<iostream>
using namespace std;
class Grandfather{
    public:
        void showGrandfather(){
            cout<< "Grandfather class"<<endl;
        }
};
class father:public Grandfather {
    public:
        void showfather(){
            cout<< "This is the father classs "<<endl;
        }
};
class Son : public father{
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