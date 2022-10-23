//
// Created by Tascau Razvan on 23.10.2022.
//

#ifndef UNTITLED3_TRICOU_H
#define UNTITLED3_TRICOU_H

#include <iostream>
#include <string>
using std::string;
using std::ostream;


class Tricou {
public:
    explicit Tricou(int pret, char marime);
    void setMarime(char marime);;
    char getMarime();;
    void setPret(int pret);
    int getPret();

private:
    int Pret;
    char Marime;




};
ostream &operator<<(ostream &COUT, Tricou &Tricou1);


#endif //UNTITLED3_TRICOU_H
