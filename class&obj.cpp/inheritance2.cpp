#include<iostream>
using namespace std;
class Father{
public:
    void showFather(){
        cout<<"this is Father class"<<endl;
    }
};
class Son : public Father{
public:
    void showSone(){
        cout<< "this is Son class "<<endl;
    }
};
int main(){
    Son s1;
    s1.showFather();
    s1.showSone();
    return 0;
}