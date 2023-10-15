#include <iostream>
#include <string>
#include <array>
#include <stdlib.h>
#include <mutex>


using namespace std;

int main()
{
	int NumberToGuess = rand() % 1000;
	string userGuess;
	int GuessCount = 1;
	bool ContinuePlaying = true;
	srand((unsigned)time(NULL));
    string gameStart = "== Ok, now you know the rules of the game so..\n== Guess a Number between 0 and 1000";
	
	cout << endl;
	cout << "== Guess a Number between 0 and 1000" << endl;
	cout << "== For example, type 41" << endl;
	cout << endl;
	
		while (ContinuePlaying)
	{
		cin >> userGuess;
		cout << endl;

		int UserNumber = stoi(userGuess);
		   
		if (UserNumber == NumberToGuess)
		{
			cout << "== Yes! you WON! you are Amazing! <3" << endl;
			cout << "== It took you " << GuessCount << " many guesses to guess the Magic Number" << endl;
			cout << "== I dare you to spin around " << GuessCount << " times" << endl;
			cout << endl;
			cout << "== Do you want to play again? (y/n)" << endl;
			
			string playAgain;
			cin >> playAgain;
			cout << endl;

			if (playAgain == "y") {
				NumberToGuess = rand() % 1000 + 1;
				GuessCount = 0;
				cout << gameStart << endl;
				cout << endl;
			}
			else if (playAgain == "n") {
				cout << "== Thanks for Playing :) ==" << endl;
				ContinuePlaying = false;
			}
		}
		else if (UserNumber == NumberToGuess, GuessCount == 4) {
			cout << "You guessed in 4!";
			cout << endl;
		}
		else if (UserNumber > NumberToGuess) {
			cout << "== My Number is Lower, drink and try again" << endl;
			GuessCount++;
			cout << "Attemps " << GuessCount << endl;
			cout << endl;
		}
		else if (UserNumber < NumberToGuess) {
			cout << "== My Number is Higher, drink and try again" << endl;
			GuessCount++;
			cout << "Attemps " << GuessCount << endl;
			cout << endl;
		}
		
	}
}