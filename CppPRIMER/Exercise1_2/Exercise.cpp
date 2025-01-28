#include <iostream>
// Write a program to print Hello, World on the standart outpu

int main() 
{
	std::cout << "Hello World" << std::endl;

//Write a program that use multiplication

	int a1 = 0,a2 = 0;

	std::cout << "Type 2 numbers and press Enter \n";
	std::cin >> a1 >> a2;

	std::cout << "Muy bien, ahora vamos a multiplicar los numeros, el resultado es \n";
	std::cout << (a1 * a2);
	std::cout << "The mult of " << a1 << " and " << a2 << " \n is \n\n" << a1 * a2 << std::endl;
}