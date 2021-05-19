#ifndef ADRESAT_H
#define ADRESAT_H

#include <iostream>
#include "UzytkownikMenedzer.h"


using namespace std;

class Adresat
{
    int id;
    int idZalogowanegoUzytkownika;
    string imie;
    string nazwisko;
    string numerTelefonu;
    string email;
    string adres;

public:

    void ustawId(int noweId);
    void ustawImie(string noweImie);
    void ustawNazwisko(string noweNazwisko);
    void ustawNumerTelefonu(string nowyNumerTelefonu);
    void ustawEmail(string nowyEmail);
    void ustawAdres(string nowyAdres);
    void ustawIdZalogowanegoUzytkownika(int id);

    int pobierzId();
    int pobierzIdUzytkownika();
    string pobierzImie();
    string pobierzNazwisko();
    string pobierzNumerTelefonu();
    string pobierzEmail();
    string pobierzAdres();

};


#endif // ADRESAT_H
