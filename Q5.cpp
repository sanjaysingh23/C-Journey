#include<iostream>
using namespace std;
class Shape{
    public:
        virtual void display(){
            cout<<"dispay on the canvas "<<endl;
        }
        virtual void draw() = 0;
};
class Circle:public Shape{
    public:
        void display(){
            cout<<"dispay on the circle "<<endl;
        }
        void draw(){
            cout<<"circle "<<endl;
        }
        
};
class Triangle:public Shape{
    public:
        void display(){
            cout<<"dispay on the triangle "<<endl;
        }
        void draw(){
            cout<<"triangle "<<endl;
        }
};
class Rectange:public Shape{
    public:
        void display(){
            cout<<"dispay on the rectangle "<<endl;
        }
        void draw(){
            cout<<"rectangle "<<endl;
        }
};
 int main(){
    Shape *s[3];
    Circle c;
    Triangle t;
    Rectange r;
    s[0] = &c;
    s[1] = &t;
    s[2] = &r;
    for(int i=0; i<3; i++){
        s[i]->display();
        s[i]->draw();
    }
    return 0;
 }