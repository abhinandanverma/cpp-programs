#include<iostream>
using namespace std;
class father{
public:
    void showfather(){
        cout<<"this is the father class"<<endl;
    }
};
class mother{
public:
    void showmother(){
        cout<<"this is the mother class"<<endl;
    }
};
class Child:public father,public mother{
public:
void showChild(){
    cout<<"this is the child class"<<endl;
}
};
int main(){
    Child c1;
    c1.showfather();
    c1.showmother();
    c1.showChild();
}