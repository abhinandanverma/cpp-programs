// #include <iostream>
// using namespace std;

// // Function with default arguments
// void add(int a, int b ) {
//     cout<< a + b << endl;
// }

// int main() {
//     // add(5);      // Uses default value of b = 10
//     add(5, 20);  // Uses given value of b = 20

//     return 0;
// }



#include<iostream>
using namespace std;

void add(int a ,int b=12){
    cout<< a+b <<endl;
}
int main(){
    add(5);
}