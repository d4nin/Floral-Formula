#include <iostream>
#include <string>
#include <conio.h>
#include "bosnian.h"
void Bosnian() {
	system("CLS");
	std::string input;
	std::cout << "Dobrodosli!\n";
	std::cout << "Unesite ime porodice cvijeta:\n";
	std::cout << "(Upozorenje: C++ ne prihvata Bosanska slova!)\n";
	getline(std::cin, input);
	cvijetnaFormula(input);
}