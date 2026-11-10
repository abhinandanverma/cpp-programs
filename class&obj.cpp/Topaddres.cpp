#include<iostream>
using namespace std;
class Personal{
public:
    void showPersonal(){
        cout<<"Name : Rajan rajpoot"<<endl;
        cout<<"City : Lucknow"<<endl;
    }
};

class Academic {
public:
    void showAcademic(){
    cout<< "House Num : 4/512 secter H " << endl;
    cout<< "Mohla : jankipuram "<<endl;
    }
};
class Student : public Personal, public Academic{
public:
        void showTopperinfor(){
            cout<<"Topper Informesion"<<endl;
        }
};
int main(){
    Student obj;
    obj.showTopperinfor();
    obj.showAcademic();
    obj.showPersonal();

    return 0;
}