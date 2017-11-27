#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string text;
    char n;
    int i = 0;
    ifstream fin;
    fin.open("file.txt");
    if(fin.is_open()) {
        while (!fin.eof()) {
            getline(fin, text);
            cout << text << endl;
            if(!(++i % 10)) {
                do {
                    cout << "Do you wish to continue? y/n: ";
                    cin >> n;
                    if (tolower(n) == 'n' || tolower(n) == 'y') {
                        break;
                    }
                } while(true);
                if(tolower(n) == 'n') {
                    break;
                }
            }
        }
        fin.close();
    } else {
        cout << "Unable to read file!" << endl;
    }
    return 0;
}