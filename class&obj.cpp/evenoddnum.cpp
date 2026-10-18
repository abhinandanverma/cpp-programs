
#include <iostream>
using namespace std;

// Number class
class Number {
public:
    int num;

    // Even ya Odd check karne ka function
    void check() {
        cout << "Enter a number: ";
        cin >> num;

        if (num % 2 == 0) {
            cout << "Number is Even";
        } else {
            cout << "Number is Odd";
        }
    }
};

int main() {
    // Object banaya
    Number n1;

    // Function call kiya
    n1.check();

    return 0;
}
