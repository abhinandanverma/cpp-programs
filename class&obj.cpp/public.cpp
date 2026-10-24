#include<iostream>
using namespace std;
class student {
    public:
    string name;
    int age, rollNO;
    void display(){
        cout<< name<< " " << age << " " << rollNO <<endl;
    }

};
int main(){
    student s1;
    s1.name = "Arpit";
    s1.age = 22;
    s1.rollNO = 12;
    s1.display();

}