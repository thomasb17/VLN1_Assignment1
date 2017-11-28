#include "Superhero.h"
#include <fstream>

int main() {
    char input;
    ofstream fout;
    ifstream fin;
    do {
        cout << "Write Superheroes to a file: w" << endl;
        cout << "Read Superheroes from a file: r" << endl;
        cout << "Quit: q" << endl;
        cin >> input;
        if(input == 'w') {
            int n;
            cout << "How many superheroes: ";
            cin >> n;
            Superhero* newheroes = new Superhero[n];
            for (int i = 0; i < n; ++i) {
                cout << "Superhero number " << i + 1 << endl;
                cin >> newheroes[i];
            }
            fout.open("superheroes.dat", ios::binary);
            fout.write((char*)(newheroes), sizeof(Superhero) * n);
            fout.close();
            delete[] newheroes;
        } else if(input == 'r') {
            cout << "List of superheroes on file" << endl;
            fin.open("superheroes.dat", ios::binary);
            fin.seekg(0, fin.end);
            int records = fin.tellg() / sizeof(Superhero);
            fin.seekg(0, fin.beg);
            Superhero* heroes = new Superhero[records];
            fin.read((char*)(heroes), sizeof(Superhero) * records);
            fin.close();
            for (int i = 0; i < records; ++i) {
                cout << heroes[i];
            }
            delete[] heroes;
        } else {
            cout << "Unable to read from file, make sure to make some superheroes first" << endl;
        }
    } while(input != 'q');
    return 0;
}