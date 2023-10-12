#pragma once

//Here we are going to declare Variables and Functions
//It is a "rule" make all variables and functions Private

class Player
{
	public:
		Player();
		Player(int _power, float _health);

	int Power;
	float Health;
	void Attack();
	void Walk();

//To access to a Private variable, we have to do it in a different way
//We are going to create GET y SET functions to declare values for the private functions
	int GetMana();
	void SetMana(int _mana);

private:
	int Mana;
};


