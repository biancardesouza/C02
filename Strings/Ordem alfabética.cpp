// Ler três palavras e ordená-las em ordem alfabética.

#include <iostream>
#include <string>

using namespace std;

int main() {
    string palavra1, palavra2, palavra3;

    getline(cin >> ws, palavra1);
    getline(cin >> ws, palavra2);
    getline(cin >> ws, palavra3);

    if (palavra1 < palavra2 && palavra1 < palavra3) {
        cout << palavra1 << " ";

        if (palavra2 < palavra3) {
            cout << palavra2 << " " << palavra3 << endl;
        } else {
            cout << palavra3 << " " << palavra2 << endl;
        }
    } else if (palavra2 < palavra1 && palavra2 < palavra3) {
        cout << palavra2 << " ";

        if (palavra1 < palavra3) {
            cout << palavra1 << " " << palavra3 << endl;
        } else {
            cout << palavra3 << " " << palavra1 << endl;
        }
    } else {
        cout << palavra3 << " ";

        if (palavra1 < palavra2) {
            cout << palavra1 << " " << palavra2 << endl;
        } else {
            cout << palavra2 << " " << palavra1 << endl;
        }
    }

    return 0;
}