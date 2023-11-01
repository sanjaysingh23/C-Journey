#include<iostream>
using namespace std;
class Cource{
    public:
        virtual void fees(){
            cout<<"Cource fun. "<<endl;
        }
};
class DacCource:public Cource{
    public:
        void fees(){
            cout<<"DacCource fun. "<<endl;
        }
};
class Dbda:public DacCource{
    public:
        void fees(){
            cout<<"Dbda fun. "<<endl;
        }
};
int main(){
    Cource *c = new Cource;
    c->fees();
    Cource *d = new DacCource;
    d->fees();
    Cource *e = new Dbda;
    e->fees();

    return 0;
}