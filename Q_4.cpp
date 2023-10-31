#include<iostream>
using namespace std;
class A{
    public:
        int a;
        A(int n1):a(n1){
            cout<<a<<" A constructor "<<endl;
        }
        ~A(){
            cout<<"A destructor "<<endl;
        }
};
class B{
    public:
        int b;
        B(int n2):b(n2){
            cout<<b<<" B constructor "<<endl;
        }
        ~B(){
            cout<<"B destructor "<<endl;
        }
};
class C:public B, public A{

    public:
        int c;
        C(int x, int y , int z):A(y), B(z){
            c = x;
            cout<<c<<" C constructor "<<endl;
        }
        ~C(){
            cout<<"C destructor "<<endl;
        }
};
int main(){
    C c1(10,20,30);
    return 0;
}