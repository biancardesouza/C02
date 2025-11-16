// Ler seis valores inteiros e mostrar quantos são positivos.

#include <iostream>

using namespace std;

int main() {
    int x, positivos = 0;

    for (int i = 0; i < 6; i++) {
        cin >> x;

        if (x > 0) {
            positivos++;
        }
    }

    cout << positivos << " valores positivos" << endl;

    return 0;
}