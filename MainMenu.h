#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <conio.h>
void ostatakTeksta() {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 4);
    std::cout<< std::setw(25);
    std::cout<<"             Sve cvijetne formule su dostupne u samo nekoliko koraka!\n\n";
    std::cout<<"                    Pritisnite bilo koje dugme da nastavite!\n";
    SetConsoleTextAttribute(h, 7);
}


void glavniMeni() {
    system("CLS");
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    std::cout<< std::setw(50);
    SetConsoleTextAttribute(h, 13);
    std::cout<<"CVIJETNA FORMULA\n"; 
    SetConsoleTextAttribute(h, 7);
    ostatakTeksta();
    if(getch()) {
        Beep(500,200);
    }
}