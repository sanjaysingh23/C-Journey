#include<iostream>
using namespace std;
class FourWhellaer{
    public:
        virtual void start()=0;
};
class Qualis:public FourWhellaer{
    public:
        void start(){
            cout<<"Qualis "<<endl;
        }
};
class Sumo:public FourWhellaer{
    public:
        void start(){
            cout<<"Sumo "<<endl;
        }
};
class Volvo:public FourWhellaer{
    public:
        void start(){
            cout<<"Volvo "<<endl;
        }
};
 int main(){
    FourWhellaer *f[3];
    Qualis q;
    Sumo s;
    Volvo v;
    f[0] = &q;
    f[1] = &s;
    f[2] = &v; 
    for(int i=0; i<3; i++){
        f[i]->start();
    }
    return 0;
 }