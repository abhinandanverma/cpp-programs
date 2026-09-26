#include<iostream>
using namespace std;

class Test {
    private:
        int a = 10;  // ye private hai, bahar se nahi dikhega
    
    public:
        // friend bana diya
        friend void display(Test t);
};

// Ye function class ke bahar hai
void display(Test t) {
    cout << "Private a = " << t.a; // fir bhi access kar liya
}

int main() {
    Test obj;
    display(obj);  // friend ko bulaya
    return 0;
}