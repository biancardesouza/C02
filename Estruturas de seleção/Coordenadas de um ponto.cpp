// Ler dois valores reais e determinar a localização do ponto no plano cartesiano. Falar se o ponto está na origem, sobre um dos eixos ou em qual dos quatro quadrantes ele se encontra.

#include <iostream>

using namespace std;

int main() {
    double x, y;

    cin >> x >> y;

    if ((x == 0) && (y == 0)) {
        cout << "Origem" << endl;
    } else if (x == 0) {
        cout << "Eixo Y" << endl;
    } else if (y == 0) {
        cout << "Eixo X" << endl;
    } else if ((x > 0) && (y > 0)) {
        cout << "Q1" << endl;
    } else if ((x < 0) && (y > 0)) {
        cout << "Q2" << endl;
    } else if ((x < 0) && (y < 0)) {
        cout << "Q3" << endl;
    } else {
        cout << "Q4" << endl;
    }

    return 0;
}