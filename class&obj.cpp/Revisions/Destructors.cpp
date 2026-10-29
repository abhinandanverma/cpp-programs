#include<iostream>
using namespace std;
class Student{
public:
    Student(){
        cout<<"constructor called"<<endl;
    }
    ~Student(){
        cout<<"Destructors is called"<<endl;
    }
};
int  main(){
    Student s1;
    
}
