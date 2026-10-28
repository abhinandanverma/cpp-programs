#include<iostream>
using namespace std;
class Student {
    private:
     int Marks;
    public:
       void setMarks(int n)
       {
         Marks = n;
       }
       int getMarks(){
        return Marks;
       }

};
int main(){
    Student s1;
    s1.setMarks (90);
    s1.getMarks();
    cout<< s1.getMarks();

    return 0;
}