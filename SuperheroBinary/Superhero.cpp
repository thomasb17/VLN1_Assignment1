//
// Created by Thomas Ari Bech on 28.11.17.
//

#include "Superhero.h"

Superhero::Superhero() {
    this->name[0] = '\0';
    this->age = 0;
    this->power = 'n';
}

/*Superhero::Superhero(string name, int age, char power) {
    this->name = name;
    this->age = age;
    this->power = power;
}*/

ostream& operator << (ostream& out, const Superhero& hero) {
    out << hero.name << " ";
    if(&out == &cout) {
        out << "(" << hero.age << ") ";
        switch(hero.power) {
            case 'f':
                out << "Flying";
                break;
            case 'g':
                out << "Giant";
                break;
            case 'h':
                out << "Hacker";
                break;
            case 'n':
                out << "None";
                break;
            default:
                out << "Weakling";
                break;
        }
    } else {
        out << hero.age << " ";
        out << hero.power;
    }
    return out << endl;
}

istream& operator >> (istream& in, Superhero& hero) {
    if(&in == &cin) {
        cout << "Input a name(Max length is 15): ";
    }
    in >> hero.name;
    hero.name[15] = '\0';
    if(&in == &cin) {
        cout << "Input the age: ";
    }
    in >> hero.age;
    if(&in == &cin) {
        cout << "Input the power(single char): ";
    }
    in >> hero.power;
    return in;
}