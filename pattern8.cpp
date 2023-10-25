#include<iostream>
using namespace std;
 int main(){
    int x = 1;
    for(int i=0; i<5; i++){
        x = 1;
        for(int j=5; j>i; j--){
            cout<<x<<" ";
            x++;
        }
        cout<<endl;
    }
    return 0;
 }