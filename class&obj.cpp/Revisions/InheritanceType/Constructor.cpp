#include<iostream>
using namespace std;
class Dog{
public:
 Dog(){
    cout<< "Constructor called"<<endl;
 }
};
int main(){
    Dog d1;
    return 0;
}