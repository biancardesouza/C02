// Ler 3 números reais: x, m e s. Calcular a gaussiana e mostrar o resultado com 4 casas decimais.

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double x, m, s, gaussiana, pi = 3.14159;

    cin >> x >> m >> s;

    gaussiana = (1 / sqrt(2 * pi * pow(s, 2))) * exp((-1) * (pow((x - m), 2) / (2 * pow(s, 2))));

    cout << fixed << setprecision(4);
    cout << gaussiana << endl;

    return 0;
}