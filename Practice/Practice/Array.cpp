#include <iostream>
#include <string>
#include <array>
#include "Player.h"

using namespace std;

// ARRAY it uses [how many values can store]
// Be careful about the ammount of element lives in the Array and which is the Size we ask for. I can use numbers, names, anything
// Intead of "a" I can put "names". Insted of numbers I can put nuames

int main()
{
    int a[10] = { 2, 3, 6, 12, 45, 23423, 5234526, 4, 6565, 7 };

    for (int i = 0; i < size(a); i++) {

        cout << "El valor es: " << a[i] << endl;
    }
}