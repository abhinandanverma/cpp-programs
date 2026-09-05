#include<iostream>
using namespace std;
class cricketer
{
public:
string name;
int runs;
int avg;
cricketer(string name,int runs,int avg){
    this->name=name;
    this->runs=runs;
    this->avg=avg;
}
};
int main(){
    cricketer c1("Virat kohli",25000,55.2);
    cricketer*c2=new cricketer("Rohit sharma",18000,47.8);
    cout<<c1.name<<" "<<c1.runs<<" "<<c1.avg<<" "<<endl;
    cout<<c2->name<<" "<<c2->runs<<" "<<c2->avg<<" "<<endl;

}