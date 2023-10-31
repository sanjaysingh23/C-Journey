#include<iostream>
using namespace std;
class Base{
    public:
        Base(){
            cout<<"No arg "<<endl;
        }
        Base(char *ptr){
            cout<<"Base param "<<ptr<<endl;
        }
        
};
class Sub : public Base{
public:
    Sub(){
        cout<<"Sub def. const "<<endl;
    }
    Sub(int x){
        cout<<"Sub 1 param "<<x<<endl;
    }
    Sub(char ch, double n){
        cout<<"Sub 2 param "<<ch<<" "<<n<<endl;
    }

};
int main(){
    Sub s;

    Sub *s1=new Sub(40);

    Sub *s2=new Sub('a',4.5);
    return 0;
}