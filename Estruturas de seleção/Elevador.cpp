// Ler 4 valores inteiros correspondentes à largura e ao comprimento de um elevador e aos raios de dois cilindros. O programa deve determinar se é possível colocar os dois cilindros no elevador.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int largura, comprimento, r1, r2, maior;
    double diagonal, somaDiametros, distanciaMax;

    cin >> largura >> comprimento >> r1 >> r2;

    distanciaMax = sqrt(pow(largura - r1 - r2, 2) + pow(comprimento - r1 - r2, 2));

    if (r1 > r2) {
        maior = r1;
    } else {
        maior = r2;
    }

    if (((2 * maior) > largura) || ((2 * maior) > comprimento) || distanciaMax < r1 + r2) {
        cout << "N" << endl;
    } else {
        cout << "S" << endl;
    }

    return 0;
}