#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");
    ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();

  //  ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
  //  ksiazkaAdresowa.rejestracjaUzytkownika();
  //  ksiazkaAdresowa.rejestracjaUzytkownika();
   ksiazkaAdresowa.logowanieUzytkownika();
   // ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
   ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();


    return 0;
}
