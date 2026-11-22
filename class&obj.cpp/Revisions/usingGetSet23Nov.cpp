
// #include <iostream>
// using namespace std;

// class Student {
// private:
//     int roll;
//     string name;

// public:

//     // Setter function: value set karega
//     void setData(int r, string n) {
//         roll = r;
//         name = n;
//     }

//     // Getter function: roll number return karega
//     int getRoll() {
//         return roll;
//     }

//     // Getter function: name return karega
//     string getName() {
//         return name;
//     }
// };

// int main() {

//     Student s1;

//     // Setter function call
//     s1.setData(103, "Abhinandan");

//     // Getter function call
//     cout << "Roll Number: " << s1.getRoll() << endl;
//     cout << "Name: " << s1.getName() << endl;

//     return 0;
// }



#include<iostream>
using namespace std;
class Student{
    private:
    int mark;
    public:
    void setMark(int mark){
        this->mark = mark;
    }
    int getmark(){
        return mark;
    }
};
int main(){
    Student s1;
    s1.setMark(100);
    cout<<"Mark: "<< s1.getmark();
}