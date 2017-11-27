#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout;
    string n;
    fout.open("file.txt", ios::app);
    if(fout.is_open()) {
        do {
            getline(cin, n);
            if (n[0] == '\\') {
                break;
            }
            fout << n << endl;
        } while(true);
        fout.close();
    } else {
        cout << "File could not be opened!" << endl;
    }
    return 0;
}