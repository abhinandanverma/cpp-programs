// #include<iostream>
// using namespace std;
// class Animal
// {
//     public:
//         virtual int sound()
//         {
//             return 10;
//         }
// };

// class Dog: public Animal {
//     public:
//         int sound()
//         {
//             return 20;
//         }

// };
// int main()
// {
//     Animal *a;
//     Dog d;
//     a=&d;
//     cout << a-> sound();
//     return 0;

// }



#include<iostream>
#include<string>
using namespace std;

class Student {
    string name;
    int marks;
public:
    void input() {
        cout << "Naam dalo: ";
        cin >> name;
        cout << "Marks dalo: ";
        cin >> marks;
    }
    void result() {
        cout << name << " ka result: ";
        if(marks >= 90) cout << "A+" << endl;
        else if(marks >= 75) cout << "A" << endl;
        else if(marks >= 60) cout << "B" << endl;
        else cout << "Fail" << endl;
    }
};

int main() {
    Student s1;
    s1.input();
    s1.result();
    return 0;
}