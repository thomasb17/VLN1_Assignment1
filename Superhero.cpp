//
// Created by Thomas Ari Bech on 27.11.17.
//

#include "Superhero.h"

Superhero::Superhero() {
    this->name = "";
    this->age = 0;
    this->power = 'n';
}

Superhero::Superhero(string name, int age, char power) {
    this->name = name;
    this->age = age;
    this->power = power;
}

Superhero::display() const {
    cout << this->name << " (" << this->age << "): ";
    switch(this->power) {
        case 'f':
            cout << "Flying";
            break;
        case 'g':
            cout << "Giant";
            break;
        case 'h':
            cout << "Hacker";
            break;
        case 'n':
            cout << "None";
            break;
        default:
            cout << "Weakling";
            break;
    }
    cout << endl;
}

ostream& operator << (ostream& out, const Superhero& hero) {
    out << hero.name << " ";
    out << hero.age << " ";
    out << hero.power << endl;
    return out;
}

istream& operator >> (istream& in, Superhero& hero) {
    cout << "Input a name: ";
    in >> hero.name;
    cout << "Input the age: ";
    in >> hero.age;
    cout << "Input the power(single char): ";
    in >> hero.power;
    return in;
}