// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int x ;
// //     for(int i=0; i<=5; i++){
// //         x=i;
// //         for(int j=1; j<=i; j++){
// //             cout<<x<<" ";
// //             x--;
// //         }
// //         cout<<endl;
// //     }
// //     return 0;
// // }
// #include <iostream>
// using namespace std;
// int main()
// {
//     char *arr1;
//     arr1 = new char[10];
//     cout << "Enter your name ";
//     cin >> arr1;
//     for (int i = 0; i < 10; i++) {
//         cout<< arr1[i];
//     }
//     delete arr1;
//     cout << endl;
//     char* arr2;
//     arr2 = new char[50];
//     cout << "Enter your address ";
//     cin >> arr2;
//     for (int i = 0; i < 15; i++) {
//         cout << arr2[i];
//     }
//     delete arr2;
//     cout << endl;
//     int age;
//     cin >> age;
//     cout << age;

// //    cout << "Hello World!\n";

// }
#include <iostream>
using namespace std;
int main()
{
    char *arr1;
    arr1 = new char[10];
    cout << "Enter your name ";
    cin >> arr1;
    
    int t1 = 0, t2 = 2;
    while (arr1[t1] != NULL) {
        t1++;
    }
    for (int i = 0; i < t1; i++) {
        cout<< arr1[i];
    }
    delete arr1;
    cout << endl;
    char* arr2;
    arr2 = new char[50];
    cout << "Enter your address ";
    cin >> arr2;
    while (arr2[t2] != NULL) {
        t2++;
    }
    for (int i = 0; i < t2; i++) {
        cout << arr2[i];
    }
    delete arr2;
    cout << endl;
    int age;
    cin >> age;
    cout << age;

//    cout << "Hello World!\n";

}