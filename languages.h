#include <iostream>
#include <string>
#include "bosnian.h"
void Bosnian() {
	std::string input;
	std::cout << "Dobrodosli!\n";
	std::cout << "Unesite ime porodice cvijeta:\n";
	std::cout << "(Upozorenje: C++ ne prihvata Bosanska slova!)\n";
	std::cin >> input;
	cvijetnaFormula(input);
}

void English() {
	std::cout << "Welcome! But unfortunately, this option is not available.";
}