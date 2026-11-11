// #include<iostream>
// using namespace std;
// template<typename T1, typename T2>
// void display(T1 a , T2 b){ //this is the argument
//     cout<< a <<endl;
//     cout<< b <<endl;
// }
// int main(){
//     display (10,3.14); ///this is the perametr
//     display("hello" , 100);

//     return 0;
// }



#include<iostream>
using namespace std;
template <typename T1 , typename T2>
void display(T1 a ,T2 b){
    cout<< a <<endl;
    cout<< b <<endl;

}

int main(){
    display(12, 3.43);
    display ("hello",12);


    return 0;
}