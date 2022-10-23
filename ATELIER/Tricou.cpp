//
// Created by Tascau Razvan on 23.10.2022.
//

#include "Tricou.h"

Tricou::Tricou(int pret, char marime) {

}

void Tricou::setMarime(char marime) {
    Marime = marime;
}

char Tricou::getMarime() {
    return Marime;
}

void Tricou::setPret(int pret) {
    Pret = pret;
}

int Tricou::getPret() {
    return Pret;
}

ostream &operator<<(ostream &COUT, Tricou &Tricou1) {
    COUT << "Marime ->"<< Tricou1.getMarime();
    COUT << "Pret ->" << Tricou1.getPret();
    return COUT;
}
