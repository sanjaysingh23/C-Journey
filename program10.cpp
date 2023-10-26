// program10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct car {
    int cid;
    char name[20];

};
struct bike {
    int bid;
    char name[20];
};
struct truck {
    int tid;
    char name[20];
};
void disp(car c) {
    cout << "Car ID " << c.cid << endl;
    cout << "Car name " << c.name << endl;
}
void disp(bike b) {
    cout << "Bike ID " << b.bid << endl;
    cout << "Bike name " << b.name << endl;
}
void disp(truck t) {
    cout << "Truck ID " << t.tid << endl;
    cout << "Truck name " << t.name << endl;
}
int main()
{
    //car x;
   // cin >> x.cid;
    car x = { 1,"asd" };


    bike y = { 2, "qwer" };
    truck z = { 3,"zxcvb" };
    disp(x);
    disp(y);
    disp(z);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
