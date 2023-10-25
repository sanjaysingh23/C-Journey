#include<iostream>
using namespace std;
 int main(){
    int a;
    cout<<"Enter a number ";
    cin>>a;
    for(int i=0;i<a;i++){
        
        
        for(int j=0;j<i;j++){
            cout<<"a";
        }
        for(int k=a+1;k>i;k--){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
 }