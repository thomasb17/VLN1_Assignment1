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
            if(fin.is_open()) {
                vector<Superhero> heroes;
                Superhero hero;
                while (fin >> hero) {
                    heroes.push_back(hero);
                }
                fin.close();
                for (int i = 0; i < heroes.size(); ++i) {
                    cout << heroes[i];
                }
            } else {
                cout << "Unable to read from file, make sure to make some superheroes first" << endl;
            }
        }
    } while(input != 'q');
    return 0;
}
