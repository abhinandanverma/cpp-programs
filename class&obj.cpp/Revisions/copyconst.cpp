#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    int rno;
    int age;
Student(string name, int rno, int age){
    this ->name = name;
    this ->rno = rno;
    this ->age =age;
}
};
int main(){
    Student s1("abhinandan",3,19);
    Student s2(s1);
    cout<< s1.name << "" << s1.rno << " " << s1.age<<endl;
    cout<< s2.name << "" << s2.rno << " " << s2.age<<endl;
    

}