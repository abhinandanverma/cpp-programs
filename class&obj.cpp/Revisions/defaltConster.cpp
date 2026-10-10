#include<iostream>
using namespace std;
class Student {
    public:
    string name;
    int rno;
    int seates;
    Student(){

    }
    void display(){
        cout<<name<<" "<<rno<<" "<<seates<<endl;
    }
};
int main(){
    Student s1;
    s1.name = "Abhi Gupta";
    s1.rno = 03 ;
    s1.seates = 5 ;
    s1.display();
}