#include<iostream>
#include<string.h>
using namespace std;
class myclass{
    private:
        char *name;
        int age;
    public:
        void setval(char *a, int b){
            name = a;
            age = b;
        }
        myclass()
        {
            cout<<"default constructor";
        }
        myclass(char *str, int n){
            name = new char[strlen(str)+1];
            strcpy(name, str);
            age = n;
            cout<<"Age "<<age<<endl;
            cout<<"Name "<<name<<endl;
        }    
        ~myclass(){
            delete []name;
        }
};
int main(){
    // int h =88;
    myclass clm("qwert",20);


    int num;
    // char val[20];
    cout<<"Enter the number of object you want to enter ";
    cin>>num;
    myclass *ptr = new myclass[num];
    
    // myclass *prt = new myclass[num];

    // myclass m1(val, age);
    for(int i=0; i<num; i++){
        cout<<"enter age ";
        cin>>ptr[i].age;
        cout<<"Enter name ";
        cin>>ptr[i].name;
    }
    for(int i=0; i<num; i++){
        cout<<"Entered age "<<ptr[i].age<<endl;
        cout<<"Entered name "<<ptr[i].name;
    }
    return 0;
}
