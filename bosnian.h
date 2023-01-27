#include <iostream>
#include <fstream>
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
	else if(cvijet == "Solanaceae" || cvijet == "solanaceae" || cvijet == "Pomocnice" || cvijet == "pomocnice") {
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

		SetConsoleTextAttribute(h, 10);
		std::cout << "Grada porodice Solanaceae (pomocnice): \n\n";
		std::cout << "* K(5) (C(5) A5) G(2)\n\n";
		SetConsoleTextAttribute(h, 4);
		std::cout << "* = cvijet simetrican\n";
		std::cout << "K = casicni listovi\n";
		std::cout << "C = krunicni listvoi\n";
		std::cout << "A = prasnici\n";
		std::cout << "G = plodnica obrasla\n";
		std::cout << "() = elementi srasli\n";
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
	else if(cvijet == "Liliaceae" || cvijet == "liliaceae" || cvijet == "Ljiljani" || cvijet == "ljiljani") {
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10);
		std::cout << "Grada porodice Liliaceae (ljiljana): \n\n";
		std::cout << "* P3+3 A3+3 G(3)\n";
		std::cout << "            ----\n\n";
		SetConsoleTextAttribute(h, 4);
		std::cout << "* = cvijet simetrican\n";
		std::cout << "P3+3 = broj ciklusa i clanova u ciklusu\n";
		std::cout << "A3+3 = broj ciklusa i clanova u ciklusu\n";
		std::cout << "G = plodnica obrasla\n";
		std::cout << "() = elementi srasli\n";
		SetConsoleTextAttribute(h, 7);
	}
	else if(cvijet == "Poaceae" || cvijet == "poaceae" || cvijet == "Trave" || cvijet == "trave") {
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCP(437);

		SetConsoleTextAttribute(h, 10);
		std::cout << "Grada porodice Poaceae (trave): \n\n";
		std::cout << "             ---\n";
		std::cout << "* ";
		std::cout << (char)24;
		std::cout << " P1+2 A3 G(2) \n\n";
		SetConsoleTextAttribute(h, 4);
		std::cout << "* = cvijet simetrican\n";
		std::cout << (char)24;
		std::cout << " = zigomorfna simetrija\n";
		std::cout << "P1+2 = broj ciklusa i clanova u ciklusu\n";
		std::cout << "A = prasnici\n";
		std::cout << "G = plodnica obrasla\n";
		std::cout << "() = elementi srasli\n";
		SetConsoleTextAttribute(h, 7);
	}
	else if (cvijet == "Nymphaeaceae" || cvijet == "nymphaeaceae" || cvijet == "Lopoci" || cvijet == "lopoci") {
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCP(437);

		SetConsoleTextAttribute(h, 10);
		std::cout << "Grada porodice Nymphaeceae (lopoci): \n\n";
		std::cout << "*K 5C";
		std::cout << (char)236;
		std::cout << "A";
		std::cout << (char)236;
		std::cout << "G(";
		std::cout << (char)236;
		std::cout << ")\n\n";
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
	else if (cvijet == "Magnoliaceae" || cvijet == "magnoliaceae" || cvijet == "Magnolije" || cvijet == "magnolije") {
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCP(437);

		SetConsoleTextAttribute(h, 10);
		std::cout << "Grada porodice Magnoliaceae (magnolije): \n\n";
		std::cout << "*P3+3+3 A";
		std::cout << (char)236;
		std::cout << " G";
		std::cout << (char)236;
		std::cout << ";\n";
		std::cout << "*K3 C3 A";
		std::cout << (char)236;
		std::cout << " G";
		std::cout << (char)236;
		std::cout << '\n' << '\n';
		SetConsoleTextAttribute(h, 4);
		std::cout << "* = cvijet simetrican\n";
		std::cout << "P3+3+3 = broj ciklusa i clanova u ciklusu\n";
		std::cout << "K = casicni listovi\n";
		std::cout << "C = krunicni listici\n";
		std::cout << "A = prasnici\n";
		std::cout << (char)236;
		std::cout << " = veliki broj clanova u zavojnici\n";
		std::cout << "G = plodnica obrasla\n";
		SetConsoleTextAttribute(h, 7);
	}
	else if (cvijet == "Ranunculaceae" || cvijet == "ranunculaceae" || cvijet == "Zabnjaci" || cvijet == "zabnjaci") {
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCP(437);

		SetConsoleTextAttribute(h, 10);
		std::cout << "Grada porodice Ranunculaceae (zabnjaci): \n\n";
		std::cout << "*K5C5A";
		std::cout << (char)236;
		std::cout << "G";
		std::cout << (char)236;
		std::cout << '\n' << '\n';
		SetConsoleTextAttribute(h, 4);
		std::cout << "K = casicni listovi\n";
		std::cout << "C = krunicni listici\n";
		std::cout << "A = prasnici\n";
		std::cout << (char)236;
		std::cout << " = veliki broj clanova u zavojnici\n";
		std::cout << "G = plodnica obrasla\n";
		SetConsoleTextAttribute(h, 7);
	}
	else if (cvijet == "Caryophyllaceae" || cvijet == "caryophyllaceae" || cvijet == "Karanfili" || cvijet == "karanfili") {
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

		SetConsoleTextAttribute(h, 10);
		std::cout << "Grada porodice Caryophyllaceae (karanfili): \n\n";
		std::cout << "K5C5A5+5G(2-5)\n";
		std::cout << "          ----\n\n";
		SetConsoleTextAttribute(h, 4);
		std::cout << "K = casicni listovi\n";
		std::cout << "C = krunicni listici\n";
		std::cout << "A = prasnici\n";
		std::cout << "G = plodnica obrasla\n";
		std::cout << "() = elementi srasli\n";
		std::cout << "_ (crta dole) = plodnica nadrasla\n";
		SetConsoleTextAttribute(h, 7);
	}
	else if (cvijet == "Cactaceae" || cvijet == "cactaceae" || cvijet == "Kaktusi" || cvijet == "kaktusi") {
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCP(437);

		SetConsoleTextAttribute(h, 10);
		std::cout << "Grada porodice Cactaceae (kaktusi): \n\n";
		std::cout << "*P";
		std::cout << (char)236;
		std::cout << " A";
		std::cout << (char)236;
		std::cout << "G(";
		std::cout << (char)236;
		std::cout << ")\n\n";
		SetConsoleTextAttribute(h, 4);
		std::cout << "K = casicni listovi\n";
		std::cout << "C = krunicni listici\n";
		std::cout << "A = prasnici\n";
		std::cout << "G = plodnica obrasla\n";
		std::cout << (char)236;
		std::cout << " = veliki broj clanova u zavojnici\n";
		std::cout << "() = elementi srasli\n";
		SetConsoleTextAttribute(h, 7);
	}
	else if (cvijet == "Fagaceae" || cvijet == "fagaceae" || cvijet == "Bukovnjace" || cvijet == "bukovnjace") {
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCP(437);

		SetConsoleTextAttribute(h, 10);
		std::cout << "Grada porodice Fagaceae (bukonvnjaca): \n";
		std::cout << "Muski cvijet: \n";
		std::cout << "P";
		std::cout << (char)236;
		std::cout << " A";
		std::cout << (char)236;
		std::cout << '\n' << '\n';
		std::cout << "Zenski cvijet: \n";
		std::cout << "      ---\n";
		std::cout << "P3+3 G(3);   (Quercus, Fagus)\n";
		std::cout << "      ---\n";
		std::cout << "P3+3 G(3);   (Castanea)\n\n";
		SetConsoleTextAttribute(h, 4);
		std::cout << "P = perigon\n";
		std::cout << "A = prasnici\n";
		std::cout << (char)236;
		std::cout << " = veliki broj clanova u zavojnici\n";
		std::cout << "G = plodnica obrasla\n";
		std::cout << "P3+3 = broj ciklusa i clanova u ciklusu\n";
		std::cout << "() = elementi srasli\n";
		std::cout << "_ (crta gore) = plodnica podrasla\n";
		SetConsoleTextAttribute(h, 7);
	}
	else if (cvijet == "Betulaceae" || cvijet == "betulaceae" || cvijet == "Breze" || cvijet == "breze") {
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

		SetConsoleTextAttribute(h, 10);
		std::cout << "Grada porodice Betulaceae (breze): \n";
		std::cout << "Muski cvijet:\n";
		std::cout << "P2 A2\n\n";
		std::cout << "Zenski cvijet:\n";
		std::cout << "G(2)\n";
		std::cout << " ---\n\n";
		SetConsoleTextAttribute(h, 4);
		std::cout << "P = perigon\n";
		std::cout << "A = prasnici\n";
		std::cout << "G = plodnica obrasla\n";
		std::cout << "() = elementi srasli\n";
		std::cout << "_ (crta gore) = plodnica podrasla\n";
		SetConsoleTextAttribute(h, 7);
	}
	else if (cvijet == "Salicaceae" || cvijet == "salicaceae" || cvijet == "Vrbe" || cvijet == "vrbe") {
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

		SetConsoleTextAttribute(h, 10);
		std::cout << "Grada porodice Salicacecae (vrbe):\n";
		std::cout << "Muski cvijet:\n";
		std::cout << "A2\n\n";
		std::cout << "Zenski cvijet:\n";
		std::cout << "G(2)\n";
		std::cout << " ---\n\n";
		SetConsoleTextAttribute(h, 4);
		std::cout << "A = prasnici\n";
		std::cout << "G = plodnica obrasla\n";
		std::cout << "() = elementi srasli\n";
		std::cout << "_ (crta gore) = plodnica podrasla\n";
		SetConsoleTextAttribute(h, 7);
	}
	else {
		std::cout<<"Ta porodica ne postoji. Pokusaj te ponovo.\n";
	}

}
void grupaSupnice(std::string cvijet) {
	std::ofstream supnica("Grupa_Supnice.txt", std::ios::out | std::ios::app);
	if (!supnica) {
		std::cout << "Ulaz u datoteku nije uspjelo!\n";
		std::cout << "Molimo vas provjerite da li ste slucajno izbrisali fajl ili ste ga pomjerili u drugi folder.\n";
		std::cout << "Zove se 'Grupa_Supnice.txt' i treba biti u istom folderu gdje je ostatak koda.\n";
		std::cout << "Ako jos se ova poruka pojavljuje, kontaktiraj te vlasnika na Github-u @Boofny.\n";
	} else {
		std::string jednosupnica = "Jednosupnice";
		std::string dvosupnica = "Dvosupnice";
		if (cvijet == "Rosaceae" || cvijet == "rosaceae" || cvijet == "Ruze" || cvijet == "ruze") supnica << "ROSACEAE (RUZE) -> " << dvosupnica << '\n';
		else if (cvijet == "Maloideae" || cvijet == "maloideae" || cvijet == "Jabuke" || cvijet == "jabuke") supnica << "MALOIDEAE (JABUKE) -> " << dvosupnica << '\n';
		else if (cvijet == "Prunoideae" || cvijet == "prunoideae" || cvijet == "Sljive" || cvijet == "sljive") supnica << "PRUNOIDEAE (SLJIVE) -> " << dvosupnica << '\n';
		else if (cvijet == "Brassicaceae" || cvijet == "brassicaceae" || cvijet == "Krstasice" || cvijet == "krstasice") supnica << "BRASSICACEAE (KRSTASICE) -> " << dvosupnica << '\n';
		else if (cvijet == "Scrophyloriaceae" || cvijet == "scrophyloriaceae" || cvijet == "Zijevalice" || cvijet == "zijevalice") supnica << "SCROPHYLORIACEAE -> " << dvosupnica << '\n';
		else if (cvijet == "Fabaceae" || cvijet == "fabaceae" || cvijet == "Leptirnjace" || cvijet == "leptirnjace") supnica << "FABACEAE (LEPTIRNJACE) -> " << dvosupnica << '\n';
		else if (cvijet == "Lamiaceae" || cvijet == "lamiaceae" || cvijet == "Usnatice" || cvijet == "usnatice") supnica << "LAMIACEAE (USNATICE) -> " << dvosupnica << '\n';
		else if (cvijet == "Solanaceae" || cvijet == "solanaceae" || cvijet == "Pomocnice" || cvijet == "pomocnice") supnica << "SOLANACEAE (POMOCNICE) -> " << dvosupnica << '\n';
		else if (cvijet == "Asteraceae" || cvijet == "asteraceae" || cvijet == "Glavocike" || cvijet == "glavocike") supnica << "ASTERACEAE (GLAVOLICKE) -> " << dvosupnica << '\n';
		else if (cvijet == "Liliaceae" || cvijet == "liliaceae" || cvijet == "Ljiljani" || cvijet == "ljiljani") supnica << "LILIACEAE (LJILJANI) -> " << jednosupnica << '\n';
		else if (cvijet == "Poaceae" || cvijet == "poaceae" || cvijet == "Trave" || cvijet == "trave") supnica << "POACEAE (TRAVE) -> " << jednosupnica << '\n';
		else if (cvijet == "Nymphaeaceae" || cvijet == "nymphaeceae" || cvijet == "Lopoci" || cvijet == "lopoci") supnica << "NYMPHAEACEAE (LOPOCI) -> " << "Karakteristike " << jednosupnica << " i " << dvosupnica << '\n';
		else if (cvijet == "Magnoliaceae" || cvijet == "magnoliaceae" || cvijet == "Magnolije" || cvijet == "magnolije") supnica << "MAGNOLIACEAE (MAGNOLIJE) -> " << "Nisu " << jednosupnica << " niti " << dvosupnica << '\n'; 
		else if (cvijet == "Ranunculaceae" || cvijet == "ranunculaceae" || cvijet == "Zabnjaci" || cvijet == "zabnjaci") supnica << "RANUNCULACEAE (ZABNJACI) -> " << dvosupnica << '\n'; 
		else if (cvijet == "Caryophyllaceae" || cvijet == "caryophyllaceae" || cvijet == "Karanfili" || cvijet == "karanfili") supnica << "CARYOPHYLLACEAE (KARANFILI) -> " << dvosupnica << '\n';
		else if (cvijet == "Cactaceae" || cvijet == "cactaceae" || cvijet == "Kaktusi" || cvijet == "kaktusi") supnica << "CACTACEAE -> " << dvosupnica << '\n';
		else if (cvijet == "Fagaceae" || cvijet == "fagaceae" || cvijet == "Bukovnjace" || cvijet == "bukovnjace") supnica << "FAGACEAE (BUKOVNJACE) -> " << dvosupnica << '\n';
		else if (cvijet == "Betulaceae" || cvijet == "betulaceae" || cvijet == "Breze" || cvijet == "breze") supnica << "BETULACEAE (BREZE) -> " << dvosupnica << '\n';
		else if (cvijet == "Salicaceae" || cvijet == "salicaceae" || cvijet == "Vrbe" || cvijet == "vrbe") supnica << "SALICACEAE (VRBE) -> " << dvosupnica << "\n";
		else supnica << "PORODICA NE POSTOJI\n";
 	}
}