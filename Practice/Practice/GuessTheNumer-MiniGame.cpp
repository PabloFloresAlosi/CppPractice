#include <iostream>
#include <string>
#include <array>

using namespace std;

int main()
{
	int NumberToGuess = rand() % 1000;
	string userGuess;
	int GuessCount = 0;
	bool ContinuePlaying = true;

	while (ContinuePlaying)
	{
		cout << "Guess a Number between 0 and 999" << endl;
		cin >> userGuess;

		int UserNumber = stoi(userGuess);

		if (UserNumber == NumberToGuess) 
		{
			cout << "Yes! you WON!" << endl;
			cout << "It took you " << GuessCount << " many guesses to guess the number" << endl;
			cout << "PlayAgain? (y/n)" << endl;

			string playAgain;

			cin >> playAgain;

			if (playAgain == "y") {
				NumberToGuess = rand() % 1000;
				GuessCount = 0;
			}
			else if (playAgain == "n") {
				cout << "Thanks for Playing :)" << endl;
				ContinuePlaying = false;
			}
		}
		else if (UserNumber > NumberToGuess) {
			cout << "My Number is Lower, try again" << endl;
			GuessCount++;
		}
		else if (UserNumber < NumberToGuess) {
			cout << "My Number is Higher, try again" << endl;
			GuessCount++;
		}
	}
}
	


