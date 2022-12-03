#include <iostream>
#include <windows.h>
void cvijetnaFormula(std::string cvijet)
{
	std::cout<<'\n';
	if (cvijet == "Ostrolist" || cvijet == "ostrolist") {
		SetConsoleCP(437);
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		

		SetConsoleTextAttribute(h, 10);
		std::cout << "Grada cvijeta ostrolista:\n\n";
		std::cout << "                        :\n";
		std::cout << "* - ";
		std::cout << (char)25;
		std::cout << " K(5) [C(5) A5 G] (2)\n";
		std::cout << "			-\n";
		std::cout << "                        :\n\n";
		SetConsoleTextAttribute(h, 4);
		std::cout << "* = cvijet simetrican\n";
		std::cout << (char)25;
		std::cout << " = nesimetrican";
		std::cout << "K = casicni listovi, broj kaze da ih je 5\n";
		std::cout << "C = krunicni listici\n";
		std::cout << "[] i () = elementi srasli\n";
		std::cout << "A - prasnici\n";
		std::cout << "G - tuckovi\n";
		std::cout << "_ (crta dole) = plodnica nadrasla\n";
		std::cout << "_ (crta gore) = plodnica podrasla\n";
		std::cout << ": = plodnica se raspada na onoliko dijelova koliko je tackica";
		SetConsoleTextAttribute(h, 7);
	}
	else if(cvijet == "Rosaceae" || cvijet == "rosaceae" || cvijet == "Ruze" || cvijet == "ruze" || cvijet == "Ruza" || cvijet == "ruza")  {
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCP(437);

		SetConsoleTextAttribute(h, 10);
		std::cout << "Grada porodice Rosaceae (ruze): \n\n";
		std::cout << "* K5 C5 A";
		std::cout << (char)236;
		std::cout << " G-1-\n\n";
		SetConsoleTextAttribute(h, 4);
		std::cout << "* = cvijet simetrican\n";
		std::cout << "K = casicni listovi\n";
		std::cout << "C = krunicni listici\n";
		std::cout << "A = prasnici\n";
		std::cout << (char)236;
		std::cout << " = veliki broj clanova u zavojnici\n";
		std::cout << "G = plodnica obrasla\n";
		SetConsoleTextAttribute(h, 7);
	}
	else if(cvijet == "Maloideae" || cvijet == "maloideae" || cvijet == "Jabuke" || cvijet == "jabuke") {
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

		SetConsoleTextAttribute(h, 10);
		std::cout << "Grada potporodice Maloideae (jabuke): \n\n";
		std::cout << "* K5 C5 A";
		std::cout << (char)236;
		std::cout << " G(5)\n\n";
		SetConsoleTextAttribute(h, 4);
		std::cout << "K = casicni listovi\n";
		std::cout << "C = krunicni listici\n";
		std::cout << "A - prasnici\n";
		std::cout << (char)236;
		std::cout << " = veliki broj clanova u zavojnici\n";
		std::cout << "G = tuckovi\n";
		std::cout << "() = elementi srasli\n";
		SetConsoleTextAttribute(h, 7);
	}
	else if(cvijet == "Prunoideae" || cvijet == "prunoideae" || cvijet == "Sljive" || cvijet == "sljive") {
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCP(437);

		SetConsoleTextAttribute(h, 10);
		std::cout << "Grada potporodice Prunoideae (sljive): \n\n";
		std::cout << "K5 C5 A";
		std::cout << (char)236;
		std::cout << " G-1-\n\n";
		SetConsoleTextAttribute(h, 4);
		std::cout << "K = casicni listovi\n";
		std::cout << "C = krunicni listici\n";
		std::cout << "A = prasnici\n";
		std::cout << (char)236;
		std::cout << " = veliki broj clanova u zavojnici\n";
		std::cout << "G-1- = plodnica obrasla\n";
		SetConsoleTextAttribute(h, 7);
	} 
	else if(cvijet == "Brassicaceae" || cvijet == "brassicaceae" || cvijet == "Krstasice" || cvijet == "krstasice") {
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

		SetConsoleTextAttribute(h, 10);
		std::cout << "Grada porodice Brassicaceae (krstasica): \n\n";
		std::cout << "* K2+2 C4 A2+4 G(2)\n\n";
		SetConsoleTextAttribute(h, 4);
		std::cout << "* = cvijet simetrican\n";
		std::cout << "K2+2 = broj ciklusa i clanova u ciklusu\n";
		std::cout << "C = krunicni listici\n";
		std::cout << "A2+4 = broj ciklusa i članova u ciklusu\n";
		std::cout << "() = elementi srasli\n";
		std::cout << "G = plodnica obrasla\n";
		SetConsoleTextAttribute(h, 7);
	}
	else if(cvijet == "Scrophulariaceae" || cvijet == "scrophulariaceae" || cvijet == "Zijevalice" || cvijet == "zijevalice") {
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCP(437);

		SetConsoleTextAttribute(h, 10);
		std::cout << "Grada porodice Scrophulariaceae (zijevalice): \n\n";
		std::cout << (char)25;
		std::cout << " K(5) [C(5) A5-4-2] G(2)\n";
		std::cout << "                       -\n\n";
		SetConsoleTextAttribute(h, 4);
		std::cout << (char)25;
		std::cout << " = nesimetrican";
		std::cout << "K = casicni listovi\n";
		std::cout << "C = krunicni listici\n";
		std::cout << "[] i () = elementi srasli\n";
		std::cout << "A - prasnici\n";
		std::cout << "G - tuckovi\n";
		std::cout << "_ (crta dole) = plodnica nadrasla\n";
		SetConsoleTextAttribute(h, 7);
	}
	else if(cvijet == "Fabaceae" || cvijet == "fabaceae" || cvijet == "Leptirnjace" || cvijet == "leptirnjace") {
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCP(437);

		SetConsoleTextAttribute(h, 10);
		std::cout << "Grada porodice Fabaceae (leptirnjaca): \n\n";
		std::cout << (char)24;
		std::cout << " K(5) C5 A(10) G1\n";
		std::cout << "                 -\n\n";
		SetConsoleTextAttribute(h, 4);
		std::cout << (char)24;
		std::cout << " = zigomorfna simetrija\n";
		std::cout << "K = casicni listovi\n";
		std::cout << "C = krunicni listvoi\n";
		std::cout << "A = prasnici\n";
		std::cout << "G = plodnica obrasla\n";
		std::cout << "[] i () = elementi srasli\n";
		std::cout << "_ (crta dole) = plodnica nadrasla\n";
		SetConsoleTextAttribute(h, 7);
	}
	else if(cvijet == "Lamiaceae" || cvijet == "lamiaceae" || cvijet == "Usnatice" || cvijet == "usnatice") {
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCP(437);

		SetConsoleTextAttribute(h, 10);
		std::cout << "Grada porodice Lamiaceae (usnatice): \n\n";
		std::cout << "Lamnium: \n";
		std::cout << (char)24;
		std::cout << " K(5) [C(5) A4] G(2)\n";
		std::cout << "                   -\n\n";
		std::cout << "Salvia:\n";
		std::cout << (char)24;
		std::cout << " K(5) [C(5) A2] G(2)\n";
		std::cout << "                   -\n\n";
		SetConsoleTextAttribute(h, 4);
		std::cout << (char)24;
		std::cout << " = zigomorfna simetrija\n";
		std::cout << "K = casicni listovi\n";
		std::cout << "C = krunicni listvoi\n";
		std::cout << "A = prasnici\n";
		std::cout << "G = plodnica obrasla\n";
		std::cout << "[] i () = elementi srasli\n";
		std::cout << "_ (crta dole) = plodnica nadrasla\n";
		SetConsoleTextAttribute(h, 7);

	}
	else if(cvijet == "Asteraceae" || cvijet == "asteraceae" || cvijet == "Glavocike" || cvijet == "glavocike") {
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

		SetConsoleTextAttribute(h, 10);
		std::cout << "Grada porodice Asteracaea (glavocike): \n\n";
		std::cout << "* K(5) [C(5) A5] G(2)\n\n";
		SetConsoleTextAttribute(h, 4);
		std::cout << "* = cvijet simetrican\n";
		std::cout << "K = casicni listovi\n";
		std::cout << "C = krunicni listvoi\n";
		std::cout << "A = prasnici\n";
		std::cout << "G = plodnica obrasla\n";
		std::cout << "[] i () = elementi srasli\n";
		SetConsoleTextAttribute(h, 7);
	}
	else {
		std::cout<<"Ta porodica ne postoji. Pokusaj te ponovo:\n";
	}
}
