
#include <iostream>
using namespace std;

// Bank class
class Bank {
public:
    int balance = 1000;

    // Balance check karne ka function
    void checkBalance() {
        cout << "Balance: " << balance << endl;
    }

    // Paise deposit karne ka function
    void deposit() {
        int amount;
        cout << "Enter amount: ";
        cin >> amount;

        balance = balance + amount;
        cout << "New Balance: " << balance << endl;
    }
};

int main() {
    // Object banaya
    Bank b1;

    b1.checkBalance();
    b1.deposit();

    return 0;
}
