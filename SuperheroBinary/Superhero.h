//
// Created by Thomas Ari Bech on 28.11.17.
//

#ifndef SUPERHEROBINARY_SUPERHERO_H
#define SUPERHEROBINARY_SUPERHERO_H


#include <iostream>
using namespace std;

class Superhero {
    private:
        char name[16];
        int age;
        char power;

    public:
        Superhero();
        //Superhero(char name[], int age, char power);
        friend ostream& operator << (ostream& out, const Superhero& hero);
        friend istream& operator >> (istream& in, Superhero& hero);

};


#endif //SUPERHEROBINARY_SUPERHERO_H
