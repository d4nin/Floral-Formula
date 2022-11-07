#include <iostream>
#include "languages.h"
//Floral formula for Biology 
//Currently only in Bosnian.
/*
    Author: Danin Sadžak
            @Neoxelly
*/
int main()
{
    std::string selection;
    std::cout << "Floral Formula!\n";
    std::cout << "Select the language you want to use:\n\n";
    std::cout << "1.Bosnian\n";
    std::cout << "2.English (Currently unavailable)\n";
    input:std::cin >> selection;
    if (selection == "Bosnian" || selection == "bosnian" || selection == "Bosanski" || selection == "bosanski") {
        std::cout<<'\n';
        Bosnian();
    }
    else if (selection == "English" || selection == "english") {
        English();
    }
    else {
        std::cout << "Unknown input. Please write out the name.\n";
        goto input;
    }
}

