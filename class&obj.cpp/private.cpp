#include<iostream>
using namespace std;
class student {
    private:
    string name;
    int age, rollNO;
    public:
    void setname(string n)
    {
        name = n;
    }
        void setage(int a)
        {
        age = a;
        }
        void setrollNo(int r)
        {
        rollNO = r;
       }
    void display(){
        cout<< name<< " " << age << " " << rollNO <<endl;
    }

};
int main(){
    student s1;
    s1.setname("Abhinandan");
    s1.setage(10);
    s1.setrollNo(12);
    s1.display();
}