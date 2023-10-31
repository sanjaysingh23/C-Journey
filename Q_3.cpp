#include<iostream>
using namespace std;
class Person{
    public:
        void walk(){
            cout<<"Walk normal "<<endl;
        }
};
class Athelit:public Person{
    public:
        void walk(){
            cout<<"Walk fast "<<endl;
        }
};
 int main(){
    Athelit a;
    a.walk();
    a.Person::walk();
 }