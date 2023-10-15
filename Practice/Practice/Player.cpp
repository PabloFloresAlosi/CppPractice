#include "Player.h"
#include <iostream>
#include <string>

using namespace std;
/*
//Here we are going to implement the variables and functions that we declare in .h
//This are the Constructer that we are going to call in the MAIN Objects and Instances

Player::Player()
{
	Health = 100;
	Power = 55;
	Mana = 32;

}

//We can create all the constructors that we want. We can define values inse the constructors

Player::Player(int _power, float _health)
{
	this->Power = _power;
	this->Health = _health;
}

void Player::Attack()
{
	cout << "The player is attaking" << endl;
}

void Player::Walk()
{
	cout << "The player is walking" << endl;
}

int Player::GetMana()
{
	return this->Mana;
}

void Player::SetMana(int _mana)
{
	this->Mana = _mana;
}
