#include<iostream>
using namespace std;
class MyClass1{
    private:
        int num1;
    public:
        void disp1(){
            cout<<"Disp of class1"<<endl;
        }    
        
    
};
class MyClass2{
    private:
        int num2;
    public:
        void disp2(MyClass1 &ref, int num){
            num2 = num;
            cout<<"Num = "<<num2;
            cout<<"Disp of class2";
            ref.disp1();
        }    
        int sendVal(){
            return num2;
        }
};
 int main(){
    MyClass1 m1;
    MyClass2 m2;
    m2.disp2(m1,100);
    return 0;
 }