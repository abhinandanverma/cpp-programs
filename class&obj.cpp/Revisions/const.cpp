#include<iostream>
using namespace std;

class Calculator {  // Class
    public:
        int add(int a, int b) {  // function
            return a + b;
        }
};

int main() {
    Calculator calc;  // Object
    int sum = calc.add(5, 3);  // Object se function call
    cout << "Answer: " << sum;
}