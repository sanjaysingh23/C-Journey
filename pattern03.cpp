#include<iostream>
using namespace std;
int main(){
    int a,num = 0;
    cout<<"Enter a number ";
    cin>>a;
    for(int i=0; i<a; i++){
        num++;
        for(int j=i; j>=1; j--){
            
            cout<<j<<" ";
           
        }
        cout<<endl;
    }
    return 0;
}