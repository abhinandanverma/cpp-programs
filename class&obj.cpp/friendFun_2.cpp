#include <iostream>
using namespace std;
class Student
{
    private:;
        int s = 90;
    public: 
        friend void showMarks(Student student);
};
void showMarks(Student s)
{
    cout<< "Marks = " << s.s;
}
int main()
{
    Student s1;
    showMarks (s1);

}