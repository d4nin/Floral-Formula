#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>
#include <codecvt>
#include <locale>
#include <shellapi.h>

void cvijetnaFormula(std::string cvijet)
{
	std::ofstream supnica("Grupa_Supnice.txt", std::ios::out | std::ios::app);
	std::string jednosupnica = "Jednosupnice";
	std::string dvosupnica = "Dvosupnice";

	std::cout<<'\n';
	if (cvijet == "Ostrolist" || cvijet == "ostrolist" || cvijet == "Borago officialis" || cvijet == "borago officialis") {
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
		supnica << "BORAGO OFFICIALIS (OSTROLIST) -> " << dvosupnica << '\n';
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
		supnica << "ROSACEAE (RUZA) -> " << dvosupnica << '\n';
		std::cout << '\n';
		SetConsoleTextAttribute(h, 6);
		int odluka;
		std::cout << "Izaberite jedne od 3 ponudenih slika!\n";
		std::cout << "1. Uzivo cvjet\n";
		std::cout << "2. Plod cvjeta\n";
		std::cout << "3. Graficki prikaz\n";
		SetConsoleTextAttribute(h, 7);
		again:std::cin >> odluka;
		std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> convert;
		std::wstring url;
		switch(odluka) {
			case 1:
  				url = convert.from_bytes("https://cdn.discordapp.com/attachments/594198772150698024/1070387261100798023/img0jnf707632139f58f824f66bb612ce06_1__6fea583c1735693ab4d09057699dea5f_z1.jpg");
  				ShellExecuteW(NULL, L"open", url.c_str(), NULL, NULL, SW_SHOWNORMAL);
				break;
			case 2:
				url = convert.from_bytes("https://cdn.discordapp.com/attachments/594198772150698024/1070387261335666758/Untitled-8-min.png");
				ShellExecuteW(NULL, L"open", url.c_str(), NULL, NULL, SW_SHOWNORMAL);
				break;
			case 3:
				url = convert.from_bytes("https://cdn.discordapp.com/attachments/594198772150698024/1070387261520232548/dddd.PNG");
				ShellExecuteW(NULL, L"open", url.c_str(), NULL, NULL, SW_SHOWNORMAL);
				break;
			default:
				std::cout << "Molimo vas da izabere brojeve izmedju 1-3!\n";
				goto again;
		}
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
		supnica << "MALOIDEAE (JABUKE) -> " << dvosupnica << '\n';
		std::cout << '\n';
		SetConsoleTextAttribute(h, 6);
		int odluka;
		std::cout << "Izaberite jedne od 3 ponudenih slika!\n";
		std::cout << "1. Uzivo cvjet\n";
		std::cout << "2. Plod cvjeta\n";
		std::cout << "3. Graficki prikaz\n";
		SetConsoleTextAttribute(h, 7);
		again1:std::cin >> odluka;
		std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> convert;
		std::wstring url;
		switch(odluka) {
			case 1:
  				url = convert.from_bytes("https://cdn.discordapp.com/attachments/594198772150698024/1070409565335732269/00513676wja.jpg");
  				ShellExecuteW(NULL, L"open", url.c_str(), NULL, NULL, SW_SHOWNORMAL);
				break;
			case 2:
				url = convert.from_bytes("https://cdn.discordapp.com/attachments/594198772150698024/1070409565629321386/Capture.PNG");
				ShellExecuteW(NULL, L"open", url.c_str(), NULL, NULL, SW_SHOWNORMAL);
				break;
			case 3:
				url = convert.from_bytes("https://cdn.discordapp.com/attachments/594198772150698024/1070409565860003840/preuzmi.jpg");
				ShellExecuteW(NULL, L"open", url.c_str(), NULL, NULL, SW_SHOWNORMAL);
				break;
			default:
				std::cout << "Molimo vas da izabere brojeve izmedju 1-3!\n";
				goto again1;
		}
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
		supnica << "PRUNOIDEAE (SLJIVE) -> " << dvosupnica << '\n';
		std::cout << '\n';
		SetConsoleTextAttribute(h, 6);
		int odluka;
		std::cout << "Izaberite jedne od 3 ponudenih slika!\n";
		std::cout << "1. Uzivo cvjet\n";
		std::cout << "2. Plod cvjeta\n";
		std::cout << "3. Graficki prikaz\n";
		SetConsoleTextAttribute(h, 7);
		again2:std::cin >> odluka;
		std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> convert;
		std::wstring url;
		switch(odluka) {
			case 1:
  				url = convert.from_bytes("https://cdn.discordapp.com/attachments/594198772150698024/1070411755915858040/prunus-spinosa-prunus-spinosa-thorn-thorn-prickly-plum-small-prickly-shrub-species-genus-prunus-235085148.jpg");
  				ShellExecuteW(NULL, L"open", url.c_str(), NULL, NULL, SW_SHOWNORMAL);
				break;
			case 2:
				url = convert.from_bytes("https://cdn.discordapp.com/attachments/594198772150698024/1070411755504799884/images.jpg");
				ShellExecuteW(NULL, L"open", url.c_str(), NULL, NULL, SW_SHOWNORMAL);
				break;
			case 3:
				url = convert.from_bytes("https://cdn.discordapp.com/attachments/594198772150698024/1070411755118919710/Capture.PNG");
				ShellExecuteW(NULL, L"open", url.c_str(), NULL, NULL, SW_SHOWNORMAL);
				break;
			default:
				std::cout << "Molimo vas da izabere brojeve izmedju 1-3!\n";
				goto again2;
		}
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
		supnica << "BRASSICACEAE (KRSTASICE) -> " << dvosupnica << '\n';
		std::cout << '\n';
		SetConsoleTextAttribute(h, 6);
		int odluka;
		std::cout << "Izaberite jedne od 3 ponudenih slika!\n";
		std::cout << "1. Uzivo cvjet\n";
		std::cout << "2. Plod cvjeta\n";
		std::cout << "3. Graficki prikaz\n";
		SetConsoleTextAttribute(h, 7);
		again3:std::cin >> odluka;
		std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> convert;
		std::wstring url;
		switch(odluka) {
			case 1:
  				url = convert.from_bytes("https://cdn.discordapp.com/attachments/594198772150698024/1070413716635525292/Capture.PNG");
  				ShellExecuteW(NULL, L"open", url.c_str(), NULL, NULL, SW_SHOWNORMAL);
				break;
			case 2:
				url = convert.from_bytes("https://cdn.discordapp.com/attachments/594198772150698024/1070413716878807140/ffff.PNG");
				ShellExecuteW(NULL, L"open", url.c_str(), NULL, NULL, SW_SHOWNORMAL);
				break;
			case 3:
				url = convert.from_bytes("https://cdn.discordapp.com/attachments/594198772150698024/1070413717105278996/200px-33_Alliaria_officinalis_Andrz.jpg");
				ShellExecuteW(NULL, L"open", url.c_str(), NULL, NULL, SW_SHOWNORMAL);
				break;
			default:
				std::cout << "Molimo vas da izabere brojeve izmedju 1-3!\n";
				goto again3;
		}
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
		supnica << "SCROPHULARIACEAE (ZIJEVALICE) -> " << dvosupnica << '\n';
		std::cout << '\n';
		SetConsoleTextAttribute(h, 6);
		int odluka;
		std::cout << "Izaberite jedne od 2 ponudenih slika!\n";
		std::cout << "1. Uzivo cvjet\n";
		std::cout << "2. Plod cvjeta\n";
		SetConsoleTextAttribute(h, 7);
		again4:std::cin >> odluka;
		std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> convert;
		std::wstring url;
		switch(odluka) {
			case 1:
  				url = convert.from_bytes("https://cdn.discordapp.com/attachments/594198772150698024/1070415168732926042/bijela-zijevalica-0001.jpg");
  				ShellExecuteW(NULL, L"open", url.c_str(), NULL, NULL, SW_SHOWNORMAL);
				break;
			case 2:
				url = convert.from_bytes("https://cdn.discordapp.com/attachments/594198772150698024/1070415168963629267/Capture.PNG");
				ShellExecuteW(NULL, L"open", url.c_str(), NULL, NULL, SW_SHOWNORMAL);
				break;
			default:
				std::cout << "Molimo vas da izabere brojeve izmedju 1-2!\n";
				goto again4;
		}
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
		supnica << "FABACEAE (LEPTIRNJACE) ->" << dvosupnica << '\n';
		std::cout << '\n';
		SetConsoleTextAttribute(h, 6);
		int odluka;
		std::cout << "Izaberite jedne od 3 ponudenih slika!\n";
		std::cout << "1. Uzivo cvjet\n";
		std::cout << "2. Plod cvjeta\n";
		std::cout << "3. Graficki prikaz\n";
		SetConsoleTextAttribute(h, 7);
		again5:std::cin >> odluka;
		std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> convert;
		std::wstring url;
		switch(odluka) {
			case 1:
  				url = convert.from_bytes("https://cdn.discordapp.com/attachments/594198772150698024/1070416307809435798/Flowering_kudzu.jpg");
  				ShellExecuteW(NULL, L"open", url.c_str(), NULL, NULL, SW_SHOWNORMAL);
				break;
			case 2:
				url = convert.from_bytes("https://cdn.discordapp.com/attachments/594198772150698024/1070416308191101039/images.jpg");
				ShellExecuteW(NULL, L"open", url.c_str(), NULL, NULL, SW_SHOWNORMAL);
				break;
			case 3:
				url = convert.from_bytes("https://cdn.discordapp.com/attachments/594198772150698024/1070416308451164344/Capture.PNG");
				ShellExecuteW(NULL, L"open", url.c_str(), NULL, NULL, SW_SHOWNORMAL);
				break;
			default:
				std::cout << "Molimo vas da izabere brojeve izmedju 1-3!\n";
				goto again5;
		}
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
		supnica << "LAMIACEAE (USNATICE) -> " << dvosupnica << '\n';
		std::cout << '\n';
		SetConsoleTextAttribute(h, 6);
		int odluka;
		std::cout << "Izaberite jedne od 2 ponudenih slika!\n";
		std::cout << "1. Uzivo cvjet\n";
		std::cout << "2. Plod cvjeta\n";
		SetConsoleTextAttribute(h, 7);
		again6:std::cin >> odluka;
		std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> convert;
		std::wstring url;
		switch(odluka) {
			case 1:
  				url = convert.from_bytes("https://cdn.discordapp.com/attachments/594198772150698024/1070417548564250684/preuzmi.jpg");
  				ShellExecuteW(NULL, L"open", url.c_str(), NULL, NULL, SW_SHOWNORMAL);
				break;
			case 2:
				url = convert.from_bytes("https://cdn.discordapp.com/attachments/594198772150698024/1070417548190953534/Capture.PNG");
				ShellExecuteW(NULL, L"open", url.c_str(), NULL, NULL, SW_SHOWNORMAL);
				break;
			default:
				std::cout << "Molimo vas da izabere brojeve izmedju 1-2!\n";
				goto again6;
		}
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
		supnica << "SOLONACEAE (POMOCNICE) -> " << dvosupnica << '\n';
		std::cout << '\n';
		SetConsoleTextAttribute(h, 6);
		int odluka;
		std::cout << "Izaberite jedne od 3 ponudenih slika!\n";
		std::cout << "1. Uzivo cvjet\n";
		std::cout << "2. Plod cvjeta\n";
		std::cout << "3. Graficki prikaz\n";
		SetConsoleTextAttribute(h, 7);
		again7:std::cin >> odluka;
		std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> convert;
		std::wstring url;
		switch(odluka) {
			case 1:
  				url = convert.from_bytes("https://cdn.discordapp.com/attachments/594198772150698024/1070418431674945606/Brugmansia_lg.jpg");
  				ShellExecuteW(NULL, L"open", url.c_str(), NULL, NULL, SW_SHOWNORMAL);
				break;
			case 2:
				url = convert.from_bytes("https://cdn.discordapp.com/attachments/594198772150698024/1070418431997911101/Capture.PNG");
				ShellExecuteW(NULL, L"open", url.c_str(), NULL, NULL, SW_SHOWNORMAL);
				break;
			case 3:
				url = convert.from_bytes("https://cdn.discordapp.com/attachments/594198772150698024/1070418432257953864/ffff.PNG");
				ShellExecuteW(NULL, L"open", url.c_str(), NULL, NULL, SW_SHOWNORMAL);
				break;
			default:
				std::cout << "Molimo vas da izabere brojeve izmedju 1-3!\n";
				goto again7;
		}
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
		supnica << "ASTERACEAE (GLAVOLICKE) -> " << dvosupnica << '\n';
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
		supnica << "LILIACEAE (LJILJANI) -> " << jednosupnica << '\n';
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
		supnica << "POACEAE (TRAVE) -> " << dvosupnica << '\n';
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
		supnica << "NYMPHAEACEAE (LOPOCI) -> " << dvosupnica << '\n';
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
		supnica << "MAGNOLIACEAE (MAGNOLIJE) -> " << dvosupnica << '\n';
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
		supnica << "RANUNCULACEAE (ZABNJACI) -> " << dvosupnica << '\n';
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
		supnica << "CARYOPHYLLACEAE (KARANFILI) -> " << dvosupnica << '\n';
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
		supnica << "CACTACEAE (KAKTUSI) -> " << dvosupnica << '\n';
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
		supnica << "FAGACEAE (BUKOVNJACE) -> " << dvosupnica << '\n';
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
		supnica << "BETULACEAE (BREZE) -> " << dvosupnica << '\n';
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
		supnica << "SALICACEAE (VRBE) -> " << dvosupnica << '\n';
	}
	else if (cvijet == "Spiraeoideae" || cvijet == "spiraeoideae" || cvijet == "Grmlje" || cvijet == "grmlje") {
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCP(437);

		SetConsoleTextAttribute(h, 10);
		std::cout << "Grada potporodice Spiraeoideae (grmlje): \n\n";
		std::cout << "K5C5A";
		std::cout << (char)236;
		std::cout << "G2-5(1-8)\n";
		std::cout << "       --------\n\n";
		SetConsoleTextAttribute(h, 4);
		std::cout << "K = casicni listovi\n";
		std::cout << "C = krunicni listici\n";
		std::cout << "A = prasnici\n";
		std::cout << "G = plodnica obrasla\n";
		std::cout << (char)236;
		std::cout << " = veliki broj clanova u zavojnici\n";
		std::cout << "() = elementi srasli\n";
		SetConsoleTextAttribute(h, 7);
		supnica << "SPIRAEOIDEAE (GRMLJE) -> " << dvosupnica << '\n';
	}
	else if (cvijet == "Mimosoideae" || cvijet == "mimosoideae" || cvijet == "Mimozovke" || cvijet == "mimozovke") {
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCP(437);

		SetConsoleTextAttribute(h, 10);
		std::cout << "Grada potporodice Mimosoideae (mimozovke):\n\n";
		std::cout << "*K4 C4 A4 G1;     (Mimosa)\n";
		std::cout << "*K(4) C4 A";
		std::cout << (char)236;
		std::cout << " G1;   (Accacia)\n\n";
		SetConsoleTextAttribute(h, 4);
		std::cout << "* = radijalna simetrija\n";
		std::cout << "K = casicni listovi\n";
		std::cout << "C = krunicni listici\n";
		std::cout << "A = prasnici\n";
		std::cout << "G = plodnica obrasla\n";
		std::cout << "() = elementi srasli\n";
		std::cout << (char)236;
		std::cout << " = veliki broj clanova u zavojnici\n";
		SetConsoleTextAttribute(h, 7);
		supnica << "MIMOSOIDEAE (MIMOZOVKE) -> " << dvosupnica << '\n';
	}
	else if (cvijet == "Caesalpinioideae" || cvijet == "caesalpinioideae" || cvijet == "Sapanovke" || cvijet == "sapanovke") {
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCP(437);

		SetConsoleTextAttribute(h, 10);
		std::cout << "Grada porodice Caesalpinioideae (sapanovke): \n\n";
		std::cout << (char)24;
		std::cout << "K5 C5 A5+5 G1   (Cercis, Ceratonia)\n\n";
		SetConsoleTextAttribute(h, 4);
		std::cout << (char)24;
		std::cout << " = zigomorfna simetrija\n";
		std::cout << "K = casicni listovi\n";
		std::cout << "C = krunicni listici\n";
		std::cout << "A5+5 = broj ciklusa i clanova u ciklusu\n";
		std::cout << "G = plodnica obrasla\n";
		SetConsoleTextAttribute(h, 7);
		supnica << "CAESALPINIOIDEAE (SAPANOVKE) -> " << dvosupnica << '\n';
	}
	else if (cvijet == "Papilionoideae" || cvijet == "papilionoideae") {
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCP(437);

		SetConsoleTextAttribute(h, 10);
		std::cout << "Grada porodice Papilionoideae: \n\n";
		std::cout << (char)24;
		std::cout << "K(5) C5 A(9)+1 G1\n";
		std::cout << (char)24;
		std::cout << "K(5) C6 A(10) G1\n\n";
		SetConsoleTextAttribute(h, 4);
		std::cout << (char)24;
		std::cout << " = zigomorfna simetrija\n";
		std::cout << "K = casicni listovi\n";
		std::cout << "C = krunicni listici\n";
		std::cout << "A(9)+1 = broj ciklusa i clanova u ciklusu\n";
		std::cout << "A = prasnici\n";
		std::cout << "G = plodnica obrasla\n";
		std::cout << "() = elementi srasli\n";
		SetConsoleTextAttribute(h, 7);
		supnica << "PAPILIONOIDEAE -> " << dvosupnica << '\n';
	}
	else if (cvijet == "Rosoideae" || cvijet == "rosoideae") {
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCP(437);

		SetConsoleTextAttribute(h, 10);
		std::cout << "Grada potporodice Rosoideae: \n\n";
		std::cout << "K5C5A";
		std::cout << (char)236;
		std::cout << "G";
		std::cout << (char)236;
		std::cout << "   (Rosa)\n";
		std::cout << "       -\n";
		std::cout << "K5C5A";
		std::cout << (char)236;
		std::cout << "G-";
		std::cout << (char)236;
		std::cout << "-   (Fragaria, Robus)\n\n";
		SetConsoleTextAttribute(h, 4);
		std::cout << "K = casicni listovi\n";
		std::cout << "C = krunicni listici\n";
		std::cout << "A = prasnici\n";
		std::cout << "G = plodnica obrasla\n";
		std::cout << (char)236;
		std::cout << " = veliki broj clanova u zavojnici\n";
		std::cout << "G-";
		std::cout << (char)236;
		std::cout << "- = plodnica obrasla\n";
		SetConsoleTextAttribute(h, 7);
		supnica << "ROSOIDEAE -> " << dvosupnica << '\n';
	}
	else if (cvijet == "Boraginaceae" || cvijet == "boraginaceae" || cvijet == "Ostrolist" || cvijet == "ostrolist") {
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

		SetConsoleTextAttribute(h, 10);
		std::cout << "Grada porodice Boraginaceae (ostrolisti): \n\n";
		std::cout << "*K(5)[C(5) A5]G(2)\n\n";
		SetConsoleTextAttribute(h, 4);
		std::cout << "K = casicni listovi\n";
		std::cout << "C = krunicni listici\n";
		std::cout << "A = prasnici\n";
		std::cout << "G = plodnica obrasla\n";
		std::cout << "* = radijalna simetrija\n";
		std::cout << "() = srastavanje dijelova istog ciklusa\n";
		std::cout << "[] = prirastavanje dijelova razlicitih ciklusa\n";
		SetConsoleTextAttribute(h, 7);
		supnica << "BORAGINACEAE (OSTROLIST) -> " << dvosupnica << '\n';
	}
	else if (cvijet == "Apiaceae" || cvijet == "apiaceae" || cvijet == "Stitarke" || cvijet == "stitarke") {
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

		SetConsoleTextAttribute(h, 10);
		std::cout << "Grada porodice Apiaceae (stitarke): \n\n";
		std::cout << "*K5 C5 A5 G(2)\n\n";
		SetConsoleTextAttribute(h, 4);
		std::cout << "K = casicni listovi\n";
		std::cout << "C = krunicni listici\n";
		std::cout << "A = prasnici\n";
		std::cout << "G = plodnica obrasla\n";
		std::cout << "* = radijalna simetrija\n";
		std::cout << "() = srastavanje dijelova istog ciklusa\n";
		SetConsoleTextAttribute(h, 7);
		supnica << "APIACEAE (STITARKE) -> " << dvosupnica << '\n';
	}
	else if (cvijet == "Alismataceae" || cvijet == "alismataceae" || cvijet == "Zabocuni" || cvijet == "zabocuni") {
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCP(437);

		SetConsoleTextAttribute(h, 10);
		std::cout << "Grada porodice Alismataceae (zabocuni): \n\n";
		std::cout << "*P3+3 A3+3 G";
		std::cout << (char)236 << '\n';
		std::cout << "            -\n";
		std::cout << "ili\n\n";
		std::cout << "*K3 C3 A3+3 G";
		std::cout << (char)236 << '\n';
		std::cout << "             -\n\n";
		SetConsoleTextAttribute(h, 4);
		std::cout << "K = casicni listovi\n";
		std::cout << "C = krunicni listici\n";
		std::cout << "A = prasnici\n";
		std::cout << "G = plodnica obrasla\n";
		std::cout << "A3+3 = broj ciklusa i clanova u ciklusu\n";
		std::cout << "* = radijalna simetrija\n";
		std::cout << (char)236;
		std::cout << " = veliki broj clanova u zavojnici\n";
		std::cout << "_ (crta dole) = plodnica nadrasla\n";
		SetConsoleTextAttribute(h, 7);
		supnica << "ALISMATACEAE (ZABOCUNI) -> " << jednosupnica << '\n';
	}
	else if (cvijet == "Araceae" || cvijet == "araceae" || cvijet == "Kozlaci" || cvijet == "kozlaci") {
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		
		SetConsoleTextAttribute(h, 10);
		std::cout << "Grada porodice Araceae (kozlaci): \n\n";
		std::cout << "P0 A3-4;\n";
		std::cout << "P0 G11\n\n";
		SetConsoleTextAttribute(h, 4);\
		std::cout << "P = perigon\n";
		std::cout << "A = prasnici\n";
		std::cout << "G = plodnica obrasla\n";
		SetConsoleTextAttribute(h, 7);
		supnica << "ARACEAE (KOZLACI) -> " << jednosupnica << '\n';
	}
	else if (cvijet == "Lemnaceae" || cvijet == "lemnaceae" || cvijet == "Vodene lece" || cvijet == "vodene lece") {
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

		SetConsoleTextAttribute(h, 10);
		std::cout << "Grada porodice Lemnaceae (vodene lece): \n\n";
		std::cout << "A1 - muski cvijet\n";
		std::cout << "G1 - zenski cvijet\n\n";
		SetConsoleTextAttribute(h, 4);
		std::cout << "A = prasnici\n";
		std::cout << "G = plodnica obrasla\n";
		SetConsoleTextAttribute(h, 7);
		supnica << "LEMNACEAE (VODENE LEECE) -> " << jednosupnica << '\n';
	}
	else if (cvijet == "Arecaceae" || cvijet == "aracaceae" || cvijet == "Palmae" || cvijet == "palmae" || cvijet == "Palme" || cvijet == "palme") {
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCP(437);

		SetConsoleTextAttribute(h, 10);
		std::cout << "Grada porodice Arecaceae/Palmae (palme): \n\n";
		std::cout << "*P3+3 G(3)\n";
		std::cout << "       ---\n";
		std::cout << "*P3+3 A3+3\n\n";
		SetConsoleTextAttribute(h, 4);
		std::cout << "P = perigon\n";
		std::cout << "A = prasnici\n";
		std::cout << "G = plodnica obrasla\n";
		std::cout << "P3+3, A3+3 = broj ciklusa i clanova u ciklusu\n";
		std::cout << "* = radijalna simetrija\n";
		std::cout << "_ (crta dole) = plodnica nadrasla\n";
		std::cout << "() = srastavanje dijelova istog ciklusa\n";
		SetConsoleTextAttribute(h, 7);
		supnica << "ARECACEAE/PALMAE (PALME) -> " << jednosupnica << '\n';
	}
	else if (cvijet == "Juncaceae" || cvijet == "juncaceae" || cvijet == "Sitovi" || cvijet == "sitovi") {
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

		SetConsoleTextAttribute(h, 10);
		std::cout << "Grada porodice Juncaceae (sitovi): \n\n";
		std::cout << "*P3+3 A3+3 G(3)\n";
		std::cout << "            ---\n\n";
		SetConsoleTextAttribute(h, 4);
		std::cout << "P = perigon\n";
		std::cout << "A = prasnici\n";
		std::cout << "G = plodnica obrasla\n";
		std::cout << "P3+3, A3+3 = broj ciklusa i clanova u ciklusu\n";
		std::cout << "* = radijalna simetrija\n";
		std::cout << "_ (crta dole) = plodnica nadrasla\n";
		std::cout << "() = srastavanje dijelova istog ciklusa\n";
		SetConsoleTextAttribute(h, 7);
		supnica << "JUNCACEAE (SITOVI) -> " << jednosupnica << '\n';
	}
	else if (cvijet == "Cyperaceae" || cvijet == "cyperaceae" || cvijet == "Sasevi" || cvijet == "sasevi") {
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

		SetConsoleTextAttribute(h, 10);
		std::cout << "Grada porodice Cyperaceae (sasevi): \n\n";
		std::cout << "A3\n";
		std::cout << "G(3)\n";
		std::cout << " ---\n";
		std::cout << "A3G(3)\n";
		std::cout << "   ---\n\n";
		SetConsoleTextAttribute(h, 4);
		std::cout << "A = prasnici\n";
		std::cout << "G = plodnica obrasla\n";
		std::cout << "_ (crta dole) = plodnica nadrasla\n";
		std::cout << "() = srastavanje dijelova istog ciklusa\n";
		SetConsoleTextAttribute(h, 7);
		supnica << "CYPERACEAE (SASEVI) -> " << jednosupnica << '\n';
	}
	else if (cvijet == "Orchidaceae" || cvijet == "orchidaceae" || cvijet == "Orhideje" || cvijet == "orhideje") {
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCP(437);

		SetConsoleTextAttribute(h, 10);
		std::cout << "Grada porodice Orchidaceae (orhideje): \n\n";
		std::cout << "          ----\n";
		std::cout << (char)24;
		std::cout << "P3+3 [A1 G(3)]\n\n";
		SetConsoleTextAttribute(h, 4);
		std::cout << "P = perigon\n";
		std::cout << "A = prasnici\n";
		std::cout << "G = plodnica obrasla\n";
		std::cout << "P3+3 = broj ciklusa i clanova u ciklusu\n";
		std::cout << "[] i () = elementi srasli\n";
		std::cout << "_ (crta gore) = plodnica podrasla\n";
		SetConsoleTextAttribute(h, 7);
		supnica << "ORCHIDACEAE (ORHIDEJE) -> " << jednosupnica << '\n';
	}
	else if (cvijet == "Iridaceae" || cvijet == "iridaceae" || cvijet == "Perunike" || cvijet == "perunike") {
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

		SetConsoleTextAttribute(h, 10);
		std::cout << "Grada porodice Iridaceae (perunike): \n\n";
		std::cout << "          ---\n";
		std::cout << "*P3+3 A3 G(3)\n\n";
		SetConsoleTextAttribute(h, 4);
		std::cout << "P = perigon\n";
		std::cout << "A = prasnici\n";
		std::cout << "G = plodnica obrasla\n";
		std::cout << "P3+3 = broj ciklusa i clanova u ciklusu\n";
		std::cout << "() = elementi srasli\n";
		std::cout << "_ (crta gore) = plodnica podrasla\n";
		SetConsoleTextAttribute(h, 7);
		supnica << "IRIDACEAE (PERUNIKE) -> " << jednosupnica << '\n';
	}
	else {
		std::cout<<"Ta porodica ne postoji. Pokusaj te ponovo.\n";
		supnica << "PORODICA NEPOSTOJI" << '\n';
	}

}
