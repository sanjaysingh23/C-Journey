#include<iostream>
using namespace std;
class Base{
    public:
        int num1;
        Base(int a){
            num1 = a;
            cout<<num1<<" Base Parm "<<endl;
        }
        ~Base(){
            cout<<"Base dist. "<<endl;
        }
};
class Sub1: public Base{
    public:
        int num2;
        Sub1(int b):Base(10){
            num2 = b;
            cout<<num2<<" Sub1 param "<<endl;
        }
        ~Sub1(){
            cout<<"Sub1 dist. "<<endl;
        }
};
class Sub2: public Sub1{
    public:
        int num3;
        Sub2(int c):Sub1(20){
            num3 = c;
            cout<<"Sub2 param "<<endl;
        }
        ~Sub2(){
            cout<<"Sub2 dist. "<<endl;
        }
};
int main(){
    Sub1 s1(200);

    return 0;
}