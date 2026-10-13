#include<iostream>
using namespace std;
class bestFriend{
public:
    string name;
    int num;
   bestFriend(string name, int num){
    this->name =name;
    this->num = num;
   } 
   void display(){
    cout << " Two Best friend: " << name << " num: " << num <<endl; 
   }
};
int main(){
    bestFriend b1("Abhinandna and Arpit is a best friend of after three  month" ,3);
    b1.display();
}