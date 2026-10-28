#include <iostream>
using namespace std;

// Abstract class banana
class ATM {
public:
    // Pure virtual function
    void withdraw();
};
int main() {
    // Object banana

    ATM s1;
    // Function call karna
    s1.withdraw();

    return 0;
}
