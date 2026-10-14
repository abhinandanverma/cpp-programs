#include<iostream>
using namespace std;

class BestFriend{
public:
    string name;
    string name2;
    string Friendship;
    BestFriend(string name , string nnam2 , string Friendship){
        this->name = name;
        this->name2 =name2;
        this->Friendship = Friendship;
    }
    void display(){
        cout<< name << name2 << Friendship <<endl;
    }
};
int main(){
    BestFriend b1("Abhinandan" ," Arpit" , "BestFriend");
    b1.display();

}
