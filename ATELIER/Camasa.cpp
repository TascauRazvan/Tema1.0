//
// Created by Tascau Razvan on 23.10.2022.
//

#include "Camasa.h"

Camasa::Camasa(int pret, char marime) {

}

void Camasa::setMarime(char marime) {
    Marime = marime;
}

char Camasa::getMarime() {
    return Marime;
}

void Camasa::setPret(int pret) {
    Pret = pret;
}

int Camasa::getPrice() {
    return Pret;
}

ostream &operator<<(ostream &COUT, Camasa &Camasa1) {
    COUT << "Marime ->"<<  Camasa1.getMarime();
    COUT << "Pret ->" << Camasa1.getPret();
    return COUT;
}
