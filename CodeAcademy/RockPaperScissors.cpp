/*
Rock Paper Scissors Lizard Spock
(The Big Bang Theory)
*/

#include <iostream>
#include <stdlib.h>

int main() {
    srand(time(NULL));

    int computer = rand() % 3 + 1;

    int user = 0;

    // Live long and prosper

    std::cout << "====================\n";
    std::cout << "rock paper scissors!\n";
    std::cout << "====================\n";

    std::cout << "1) Rock\n";
    std::cout << "2) Papper\n";
    std::cout << "3) Scissors\n";

    std::cout << "shoot! ";
    std::cin >> user;

    if (user == 1)
        std::cout << "you choose: Rock\n";
    else if (user == 2)
        std::cout << "you choose: Papper\n";
    else
        std::cout << "you choose: Scissors\n";

    if (computer == 1)
        std::cout << "cpu choose: Rock\n";
    else if (computer == 2)
        std::cout << "cpu choose: Papper\n";
    else
        std::cout << "cpu choose: Scissors\n";


    if (user == computer) {

        std::cout << "it's a tie!\n";

    }

    // user rock

    else if (user == 1) {

        if (computer == 2) {

            std::cout << "you lost! booooo!\n";

        }
        if (computer == 3) {

            std::cout << "you won! woohoo!\n";

        }

    }

    // user paper

    else if (user == 2) {

        if (computer == 1) {

            std::cout << "you won! woohoo!\n";

        }
        if (computer == 3) {

            std::cout << "you lost! boo!\n";

        }

    }

    // user scissors

    else if (user == 3) {

        if (computer == 1) {

            std::cout << "you lost! booooo!\n";

        }
        if (computer == 2) {

            std::cout << "you won! woohoo!\n";

        }

    }

    return 0;

}
