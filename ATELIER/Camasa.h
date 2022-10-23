//
// Created by Tascau Razvan on 23.10.2022.
//

#ifndef UNTITLED3_CAMASA_H
#define UNTITLED3_CAMASA_H
#include <iostream>
#include <string>
using std::string;
using std::ostream;

class Camasa {
public:
    explicit  Camasa(int pret, char marime);
    void setMarime(char marime);;
    char getMarime();;
    void setPret(int pret);
    int getPret();

private:
    int Pret;
    char Marime;




};
ostream &operator<<(ostream &COUT,  Camasa & Camasa1);

#endif //UNTITLED3_CAMASA_H

