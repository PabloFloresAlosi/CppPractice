#include <iostream>

int PiggyDollars() {

	double pesos;
	double reais;
	double soles;
	double dollars;

	std::cout << "Enter number of Colombian Pesos: ";
	std::cin >> pesos;

	std::cout << "Enter number of Brazilian Reais: ";
	std::cin >> reais;

	std::cout << "Enter number of Peruvian Soles: ";
	std::cin >> soles;

	/* Conversion Rates
	Pesos to USD = 0,00024
	Reais to USD = 0,00080
	Soles to USD = 0,00108 */

	dollars = (0.00024 * pesos) + (0.00080 * reais) + (0.00108 * soles);

	std::cout << "US Dollars = " << dollars;

}