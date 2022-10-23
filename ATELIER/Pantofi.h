//
// Created by Tascau Razvan on 23.10.2022.
//

#ifndef UNTITLED3_PANTOFI_H
#define UNTITLED3_PANTOFI_H
#include <iostream>
#include <string>
using std::string;
using std::ostream;


class Pantofi {
public:
    explicit Pantofi(int pret, char marime);
    void setMarime(char marime);;
    char getMarime();;
    void setPret(int pret);
    int getPrice();

private:
    int Pret;
    char Marime;




};
ostream &operator<<(ostream &COUT, Pantofi &Pantofi1);

#endif //UNTITLED3_PANTOFI_H
