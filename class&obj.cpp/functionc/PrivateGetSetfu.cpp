#include<iostream>
using namespace std;

class Student {
    private: // bahar se direct access nahi hoga
        int marks;
    
    public:
        // Get - data lene ke liye
        int getMarks() {
            return marks;
        }
        // Set - data dalne ke liye
        void setMarks(int m) {
            marks = m;
        }
};

int main() {
    Student s1;
    s1.setMarks(90); // set kiya
    cout << s1.getMarks(); // 90 print hoga
}