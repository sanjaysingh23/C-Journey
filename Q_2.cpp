#include<iostream>
using namespace std;
class Base{
	
    public:
        Base(){

        }
		void disp1(){
            cout<<"In disp1 "<<endl;
        };
		void disp3(){
            cout<<"In disp3 "<<endl;
        };
        
        void disp2(){
            cout<<"In disp2 "<<endl;
        };
        
        void disp4(){
            cout<<"In disp4 "<<endl;
        };
        void disp5(){
            cout<<"In disp5 "<<endl;
        };
};
class Sub: private Base{
    public:
        Sub(int x){
            cout<<"In Sub prametarize const. "<<endl;
        }
		 Base::disp1;
		 Base::disp3;
        void disp5(){
            cout<<"In Sub disp5 "<<endl;
        };
};
 int main(){
    Sub s(30);
    s.disp5();
    s.disp1();
    s.disp3();
    return 0;
 }