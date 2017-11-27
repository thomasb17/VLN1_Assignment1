#include "Superhero.h"
#include <fstream>
#include <vector>

int main() {
    char input;
    ofstream fout;
    ifstream fin;
    do {
        cout << "Write a Superhero to a file: w" << endl;
        cout << "Read Superheroes from a file: r" << endl;
        cout << "Quit: q" << endl;
        cin >> input;
        if(input == 'w') {
            Superhero newhero;
            cin >> newhero;
            fout.open("superheroes.txt", ios::app);
            fout << newhero;
            fout.close();
        } else if(input == 'r') {
            fin.open("superheroes.txt");
            vector<Superhero> heroes;
            string str;
            string name;
            int age;
            char power;
            while (!fin.eof()) {
                fin >> name >> age >> power;
                Superhero hero(name, age, power);
                heroes.push_back(hero);
                if(!fin.good()) {
                    break;
                }
            }
            fin.close();
            for (int i = 0; i < heroes.size(); ++i) {
                heroes[i].display();
            }
        }
    } while(input != 'q');
    return 0;
}