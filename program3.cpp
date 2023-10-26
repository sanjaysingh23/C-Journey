// program3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct empl {
    int id;
    char name[20];
    char desig[20];
};
int main()
{
    empl e1;
    cout << "Enter the ID ";
    cin >> e1.id;
    //cin.ignore();
    cout << endl<<"Enter the name ";
    //cin.getline (e1.name,20);
    cin >> e1.name;
    cout <<endl<< "Enter the desig ";
    //cin.getline(e1.desig,20);
    cin >> e1.desig;
    cout << endl << "Entered detail " << e1.id << e1.name << e1.desig;
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
