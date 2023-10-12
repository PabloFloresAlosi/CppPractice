#include <iostream>
#include <string>
#include <array>
#include "Player.h"

using namespace std;

//CLASES with variables publics and prtivate

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
    //wizard.magic = 3; VARIABLE private
    cout << "The power is: " << wizard.power;
}
//CLASSES for  UNREAL can be created clicking in Add >> Class

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