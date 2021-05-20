#include "KsiazkaAdresowa.h"

using namespace std;



void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenedzer.rejestracjaUzytkownika();

}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();

}

int KsiazkaAdresowa::logowanieUzytkownika()
{
   uzytkownikMenedzer.logowanieUzytkownika();
}
void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}

 int KsiazkaAdresowa::wylogowanieUzytkownika()
 {
     uzytkownikMenedzer.wylogowanieUzytkownika();
 }

 int KsiazkaAdresowa::dodajAdresata(int idZalogowanego)
 {
     adresatMenedzer.dodajAdresata(idZalogowanego);
 }
 int KsiazkaAdresowa::odczytajIdZalogowanegoUzytkownika()
 {
    uzytkownikMenedzer.odczytajIdZalogowanegoUzytkownika();
 }
 void KsiazkaAdresowa::wyswietlWszystkichAdresatow(int idZalogowanego)
 {
     adresatMenedzer.wyswietlWszystkichAdresatow(idZalogowanego);
 }


