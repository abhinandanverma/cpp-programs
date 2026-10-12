#include<iostream>
using namespace std;
class  Student{
public:
    void display(int roll){
        cout <<  " RollNO: " << roll <<endl;    
    }
    void display (string name)
    {
        cout << " Name: " << name <<endl;
    }
};
int main(){
    Student s;
    s.display(3);
    s.display("Abhinandnad");
}