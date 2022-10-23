//
// Created by Tascau Razvan on 23.10.2022.
//

#include "Costum.h"

Costum::Costum(char marime, int pret) : Marime(marime), Pret(pret) {}

void Costum::setMarime(char marime) {
    Marime = marime;
}

void Costum::setPret(int pret) {
    Pret = pret;
}

char Costum::getMarime() {
    return Marime;
}

int Costum::getPret() {
    return Pret;
}

ostream &operator<<(ostream &COUT, Costum &Costum1) {
    COUT << "Marime ->"<< Costum1.getMarime();
    COUT << "Pret ->" <<Costum1.getPret();
    return COUT;
}
