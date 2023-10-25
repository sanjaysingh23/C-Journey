#include<iostream>
using namespace std;
 int main(){
    int a = 1;
    for(int i=0; i<4; i++){
        a = 1;
        for(int k=0; k<i; k++){
            cout<<" ";
        }
        for(int j=4; j>i; j--){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
    return 0;
 }