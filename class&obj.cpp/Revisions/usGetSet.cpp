#include<iostream>
using namespace std;
class Student{
    private:
     int Marks;
    public:
     void setMraks(int m){
        Marks = m ;
     }
     int getMarks(){
        return Marks;
     }
     void display(){
        cout<<"Marks: " << Marks <<endl;
     }

};
int main(){
    Student s1;
    s1.setMraks(99);
    s1.getMarks();
    s1.display();
    return 0;
}