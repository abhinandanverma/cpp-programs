
#include <iostream>
using namespace std;

// Abstract class banana
class ATM {
public:
    // Pure virtual function
    virtual void withdraw() = 0;
};

// Derived class
class SBI : public ATM {
public:
    // Function ko define karna
    void withdraw() override {
        cout << "Enter your PIN" << endl;
        cout << "Please collect your cash" << endl;
    }
};

int main() {
    // Object banana
    SBI s1;

    // Function call karna
    s1.withdraw();

    return 0;
}
