#include<iostream>
#include<string>
using namespace std;
class Student{
public:
    Student(){
        cout<<"Defalt constr"<<endl;
    }
    Student(int n){
        cout<<"Perameter const= "<<n<<endl;
    }
    Student(int r , string n){
        cout<<"Two pertameter const= "<< r << " " << n <<endl;
    }

};
int main(){
    Student s1;
    Student(101);
    Student(101,"Abhinandan");
    return 0;
}