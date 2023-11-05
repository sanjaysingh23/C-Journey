#include<iostream>
using namespace std;
class Weapon{
    public:
        virtual void attack()=0;
};
class Gun:public Weapon{
    public:
        void attack(){
            cout<<"Gun func"<<endl;
        }
};
class Sword:public Weapon{
    public:
        void attack(){
            cout<<"Sword func"<<endl;
        }
};
class Rifle:public Weapon{
    public:
        void attack(){
            cout<<"Rifle func"<<endl;
        }
        void chambering(){
            cout<<"Chambering"<<endl;
        }
};
int main(){
    Weapon *w[2];
    Gun g;
    Sword s;
    Rifle r;
    w[0]= &g;
    w[1] = &s;
    w[2] = &r;
    return 0;
}