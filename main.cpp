#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");
    ksiazkaAdresowa.logowanieUzytkownika();
  //  ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
  //  ksiazkaAdresowa.wylogowanieUzytkownika();
    ksiazkaAdresowa.dodajAdresata(ksiazkaAdresowa.odczytajIdZalogowanegoUzytkownika());

    ksiazkaAdresowa.dodajAdresata(ksiazkaAdresowa.odczytajIdZalogowanegoUzytkownika());
   // ksiazkaAdresowa.dodajAdresata(ksiazkaAdresowa.odczytajIdZalogowanegoUzytkownika());
  //  ksiazkaAdresowa.wylogowanieUzytkownika();
  //  ksiazkaAdresowa.logowanieUzytkownika();
  // ksiazkaAdresowa.dodajAdresata(ksiazkaAdresowa.odczytajIdZalogowanegoUzytkownika());
  //  ksiazkaAdresowa.dodajAdresata(ksiazkaAdresowa.odczytajIdZalogowanegoUzytkownika());
  //  ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
  //  ksiazkaAdresowa.rejestracjaUzytkownika();


   // ksiazkaAdresowa.wypiszWszystkichUzytkownikow();



    return 0;
}
