#include <iostream>
#include <iomanip>		//do funkcji setw
#include <string>
using namespace std;
//*********************************************************************************************************
void pokaz(string opis, string wlasciwy)
{
	cout << "Tresc obiektu " << setw(15)
		<< opis << ": [" << wlasciwy << "]\n";
}

//*********************************************************************************************************
int main()
{
	string napisA;
	string napisB1("jakis tekst");				//string (const char* cstr)

	char tablica[20] = { "Natenczas Wojski" };	//string (const char* cstr)
	string napisB2(tablica);
	
	string wiadomosc(&tablica[5]);				//string (const char* cstr)

	string ostrzezenie("Awaria studni", 8);		//string (const char*, size_t ile);

	string gwiazdki(25, '*');					//string (size_t ile, char znak);

	string litery({ 'a','b','c' });

	string jedna(1, 'a');
	string sama({ 'a' });

	string inny = "ABCDEFGH";
	string nowy(inny, 4, 2);					//string (const strig& inny string, size_t pozycja, size_t ile);
	//==========dla spradzenia==========
	pokaz("napisaA", napisA);
	pokaz("napisB1", napisB1);
	pokaz("napisB2", napisB2);
	pokaz("wiadomosc", wiadomosc);
	pokaz("ostrzezenie", ostrzezenie);
	pokaz("gwiazdki", gwiazdki);
	pokaz("nowy", nowy);
}