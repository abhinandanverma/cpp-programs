#include<iostream>
using namespace std;
class student
{
public:
    int marks;
    student(int marks){
        this->marks = marks;
    }    
    void display()
    {
        cout<< " Your Marks: "<<marks ;
    }
};
int main(){
    student s1(99);
    s1.display();
}
