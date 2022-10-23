//
// Created by Tascau Razvan on 23.10.2022.
//

#include "Accesorii.h"

Accesorii::Accesorii(int pret, char marime) {

}

void Accesorii::setMarime(char marime) {
    Marime = marime;
}

char Accesorii::getMarime() {
    return Marime;
}

void Accesorii::setPret(int pret) {
    Pret = pret;
}

int Accesorii::getPret() {
    return Pret;
}

ostream &operator<<(ostream &COUT, Accesorii &Accesorii1) {
    COUT << "Marime ->"<< Accesorii1.getMarime();
    COUT << "Pret ->" <<Accesorii1.getPret();
    return COUT;
}
