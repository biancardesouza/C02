// Ler um número real (temperatura em Fahrenheit) e convertê-lo para Celsius e Kelvin por meio de uma função. Cabeçalho da função: void converte(float F, float &C, float &K).

#include <iostream>
#include <iomanip>

using namespace std;

void converte (float F, float &C, float &K) {
    C = (5 / 9) * (F - 32);
    F = C + 273;
}

int main() {
    float F, C, K;

    cin >> F;

    converte(F, C, K);

    cout << fixed << setprecision(2);
    cout << "Celsius: " << C << endl;
    cout << "Kelvin: " << K << endl;

    return 0;
}