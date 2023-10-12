#include <iostream>
#include <string>
#include <array>
#include "Player.h"

using namespace std;

// POINTERS - call the value in the MEMORY, NOT the assigned value
int main()
{
    int a = 5;

    int* pointerTo_A = &a;

    cout << "The a value is: " << a << endl;
    cout << "The memory Addres of the variable is: " << &a << endl;
    cout << endl;
    cout << "The value of pointerTo_A is: " << *pointerTo_A << endl;
    cout << "The memory Addres of pointerTo_A is: " << pointerTo_A << endl;

}

//POINTERS/REFERENCES point/ref the value of the variable. They can't exist by themself, they need to have a reference
//We can reference objects and class (https://www.youtube.com/watch?v=g7iEhcPHG8E&list=PLZhNP5qJ2IA0aAwjC3_3kAuF01oG_ol3d&index=11)
int main()
{
    int a = 5;

    int& refTo_A = a;

    cout << "The a value is: " << a << endl;
    cout << "The value of refTo_A: " << refTo_A << endl;
    cout << endl;
    cout << "The value of pointerTo_A is: " << &a << endl;
    cout << "The memory Addres of refTo_A is: " << &refTo_A << endl;
}
