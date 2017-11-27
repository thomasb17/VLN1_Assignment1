//
// Created by Thomas Ari Bech on 27.11.17.
//

#ifndef SUPERHEROSIMPLE_SUPERHERO_H
#define SUPERHEROSIMPLE_SUPERHERO_H

#include <iostream>
using namespace std;

class Superhero {
    private:
        string name;
        int age;
        char power;

    public:
        Superhero();
        Superhero(string name, int age, char power);
        display() const;
        friend ostream& operator << (ostream& out, const Superhero& hero);
        friend istream& operator >> (istream& in, Superhero& hero);

};


#endif //SUPERHEROSIMPLE_SUPERHERO_H
