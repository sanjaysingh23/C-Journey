#include<iostream>
using namespace std;
class Subject{
    public:
        virtual void maxMarks() = 0;
};
class Maths:public Subject{
    public:
        void maxMarks(){
            cout<<"Maths class "<<endl;
        }
};
class History:public Subject{
    public:
        void maxMarks(){
            cout<<"History class "<<endl;
        }
};
class English:public Subject{
    public:
        void maxMarks(){
            cout<<"English class "<<endl;
        }
};
void show(Subject *s){
    s -> maxMarks();
}

int main(){
    Maths m;
    English e;
    History h;
    show( &m);
    show( &e);
    show( &h);
    return 0;
}