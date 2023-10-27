#include<iostream>
#include<string.h>
using namespace std;
class myclass{
    private:
        char *name;
        int id;
    public:
        void setnum(char *ch, int num){
            name = ch;
            id = num;
        }
        int getnum(){
            return id;
        }
        void disp(){
            cout<<endl<<"Name is "<<name<<endl;
            cout<<"id "<<id<<endl;
        }
        myclass(){
            // id = 25;
            cout<<endl<<"Inside constructor "<<endl;
        }
        myclass(char *str, int k){
            name = new char[strlen(str) + 1];
		    strcpy(name,str);
            // strcpy_s(name, strlen(str) + 1,str);
            cout<<k<<endl;
            cout<<"Inside parametrized constructor"<<endl;
        }
        ~myclass(){

            cout<<endl<<"Distructor "<<endl;
            delete []name;
        }
};
int main(){
    
    
    char val1[] = "sanjay";
    char val2[] = "Arun";
    myclass m1(val1,10);
    myclass m2;
    m1.setnum(val1,100);
    m2.setnum(val2,200);
    cout<<"m1 "<<m1.getnum()<<endl;
    cout<<"m2 "<<m2.getnum();
    m1.disp();
    m2.disp();
    // int num;
    // for(int i=0; i<3; i++){
    //     cin>>num;
    //     m[i].setnum(num);
        
    // }
    // for(int i=0; i<3; i++){
    //     cout<<m[i].getnum()<<endl;
    // }


    return 0;
}
