#include<iostream>
using namespace std;
class  student
{
    public:
    string name;
    int id;
    student(){
        name="Abhinandaan";
        id=003;
    }
    int display(){
        cout<< " Name: " <<name << " id: " <<id<<endl;
    }
};
int main(){
    student s1;
    s1.display();
}