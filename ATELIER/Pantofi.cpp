//
// Created by Tascau Razvan on 23.10.2022.
//

#include "Pantofi.h"

Pantofi::Pantofi(int pret, char marime) : Pret(pret), Marime(marime) {}

void Pantofi::setMarime(char marime) {
    Marime = marime;
}

char Pantofi::getMarime() {
    return Marime;
}

void Pantofi::setPret(int pret) {
    Pret = pret;
}

int Pantofi::getPrice() {
    return Pret;
}

ostream &operator<<(ostream &COUT, Pantofi &Pantofi1) {
    COUT << "Marime ->"<< Pantofi1.getMarime();
    COUT << "Pret ->" <<Pantofi1.getPret();
    return COUT;
}
