#include<iostream>
using namespace std;
 int main(){
    char ch = 'A';
    for(int i=0; i<6; i++){
        // ch = 'A';
        
        for(int j=6; j>i; j--){
            cout<<" ";
        }
        for(int k=0; k<=i; k++){
            cout<<ch<<" ";
            
        }
        ch++;
        cout<<endl;
    }
    return 0;
 }