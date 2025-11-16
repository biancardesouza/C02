// Ler seis valores reais e mostrar quantos são positivos e a média dos positivos com 1 casa decimal.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double x, soma = 0, media;
    int positivos = 0;

    for (int i = 0; i < 6; i++) {
        cin >> x;

        if (x > 0) {
            soma += x;
            positivos++;
        }
    }

    media = soma / positivos;

    cout << fixed << setprecision(1);
    cout << positivos << " valores positivos" << endl;
    cout << media << endl;

    return 0;
}