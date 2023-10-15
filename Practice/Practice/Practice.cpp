// Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>
#include <array>
#include "Player.h"

using namespace std;
/*
//FUNCIONES - tienen que estar arriba del Main para que sepa que existen y luego ejecutarlas
//no regresa valor
void nombredelafuncion() {} 
//si regresa valor
int nombredelafuncion2() {
    return 0;
}

//ejemplo
int nombredelafuncion3(int a, float b, double c, string f) {

    int resultado = b - c;

    return resultado;

}

// VARIABLES Y MATH
int main()
{
    float empieza = 1.f;
    float termina = 2.f;
    int a = 7;
    int b = 9;
    
    int substraction = a - termina;

    std::cout << "Resultado: " << substraction;

}

//Como llamar a una FUNCION
int main()
{
    int resultado = nombredelafuncion3(15, 12, 3, "Raul Alfonso");

    std::cout << "Que salio? " << resultado;

}

//CONDITIONAL STATEMENTS IF
int main()
{
    int a = 5;

    if (a > 6) {
        std::cout << "A is bigger than 6";

    }
    else if (a < 2) {
        std::cout << "A is less than 2";
    }
    else if (a <= 12) {
        std::cout << "A is less or equal than 12";
    }
    else if (a == 2) {
        std::cout << "A is equal than 2";
    }
    else {
        std::cout << "No pasa nada";
            }
}

//CONDITIONAL STATEMENTS SWITCH
int main()
{
    int Jose = 12;

    switch (Jose) {

    case 1:
    std::cout << "The value is 1";
        break;

    case 6:
    std::cout << "The value is 6";
        break;

    case 9:
    std::cout << "The value is 9";
        break;

    case 12:
    std::cout << "The value is 12";
        break;

    default:
    std::cout << "The Default was Executed";
        break;
    }


}

//LOOPING
void ProbandoFunction() {
    std::cout << "The value is : " << endl;
}
int main() {
    for (int i = 6; i < 30; i++) {

        //std::cout << "The value is : " << i << endl; comentado para testear la function

        ProbandoFunction();
    }
}

// ARRAY se declara con [cuantos valores la array puede guardar]
// Tener cuidado cuando elementos hay en la Array y cual es el size que pedimos. Puedo usar lo que quiera, puedo poner string y utulizar nombres.
// En vez de "a" poner "names" y en vez de numeros poner nombres
int main()
{
    int a[10] = {2, 3, 6, 12, 45, 23423, 5234526, 4, 6565, 7 };
    
    for (int i = 0; i < size(a); i++) {
        
        cout << "El valor es: " << a[i] << endl;
    }
}


//POINTERS - llama/call al valor en la memoria, no al valor asignado
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

//POINTERS/REFERENCES point/ref the value of the variable. No pueden existir solas, tienen que referenciar algo
//Podemos referencias objetos o clases (https://www.youtube.com/watch?v=g7iEhcPHG8E&list=PLZhNP5qJ2IA0aAwjC3_3kAuF01oG_ol3d&index=11)
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


//CLASES con variables Publicas y Privadas

class Player {
public:
    int power;
    float heath;
    int mana;

private:
    int magic;
};

int main()
{
    Player wizard = Player();
    wizard.power = 100;
    //wizard.magic = 3; VARIABLE privada
    cout << "The power is: " << wizard.power;
}

//CLASSES para UNREAL se crean haciendo click en Add >> Class

int main()
{
    Player Wizard = Player();
    Player Wolf = Player();
    Player Limon = Player(13, 102);

    Wizard.Power = 88;

    cout << "Wizard MANA: " << Wizard.GetMana() << endl;
    cout << "Wizard POWER: " << Wizard.Power << endl;
    cout << "Wizard HEALTH: " << Wizard.Health << endl;
    
    Wizard.SetMana(11);

    cout << endl;
    cout << "Changed Mana Value" << endl;
    cout << "Wizard MANA: " << Wizard.GetMana() << endl;
    cout << endl;

    Wizard.Walk();
    Wizard.Attack();

    cout << endl;

    Wolf.Health = 200;

    cout << "Wolf Health" << Wolf.Health << endl;
    cout << endl;

    cout << "Limon Health: " << Limon.Health << endl;
    cout << "Limon Power: " << Limon.Power << endl;
}


// FInal Mini DOS game https://www.youtube.com/watch?v=6wEZ_rxrUBQ&list=PLZhNP5qJ2IA0aAwjC3_3kAuF01oG_ol3d&index=12
