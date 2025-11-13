// Ler um valor real que representa o raio de um círculo. Calcular sua área e mostrar o resultado com três casas decimais.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double raio, area, pi = 3.14159;

    cin >> raio;

    area = pi * raio * raio;

    cout << fixed << setprecision(3);
    cout << "AREA = " << area << endl;

    return 0;
}