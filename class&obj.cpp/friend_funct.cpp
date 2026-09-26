#include <iostream>
using namespace std;
class Student
{
    private:
        int marks;
    public:
        Student()
        {
            marks = 90;
        }    
        friend void showMarks(Student student);
};
void showMarks(Student s)
{
    cout<< "Marks = " << s.marks;
}
int main()
{
    Student s1;
    showMarks (s1);

}