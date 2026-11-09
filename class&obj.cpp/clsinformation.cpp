#include<iostream>
using namespace std;
class Personal{
public:
    void showPersonal(){
        cout<<"Name : topper"<<endl;
        cout<<"Topper age : 20"<<endl;
    }
};

class Academic {
public:
    void showAcademic(){
    cout<< "Course : Bca " << endl;
    cout<< "Year : Second Year "<<endl;
    }
};
class Student : public Personal, public Academic{
public:
        void showStudent(){
            cout<<"Student Information"<<endl;
        }
};
int main(){
    Student obj;
    obj.showStudent();
    obj.showAcademic();
    obj.showPersonal();

    return 0;
}