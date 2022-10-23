//
// Created by Tascau Razvan on 23.10.2022.
//

#ifndef UNTITLED3_COSTUM_H
#define UNTITLED3_COSTUM_H
#include <iostream>
#include <string>
using std::string;
using std::ostream;

class Costum {
public:
    explicit Costum(char marime, int pret);
    void setMarime(char marime);
    char getMarime();
    void setPret(int pret);
    int getPret();



private:
    char Marime;
    int Pret;

};
ostream& operator<<(ostream& COUT, Costum& Costum1);


#endif //UNTITLED3_COSTUM_H
