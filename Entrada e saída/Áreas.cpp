// Ler três valores reais e calcular: a área do triângulo de base A e altura C, a área do círculo de raio C, a área do trapézio com bases A e B e altura C, a área do quadrado de lado B e a área do retângulo com lados A e B. Apresentar os resultados com três casas decimais.

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double A, B, C, pi = 3.14159;
    double areaTriangulo, areaCirculo, areaTrapezio, areaQuadrado, areaRetangulo;

    cin >> A >> B >> C;

    areaTriangulo = (A * C) / 2.0;
    areaCirculo = pi * pow(C, 2);
    areaTrapezio = ((A + B) * C) / 2.0;
    areaQuadrado = pow(B, 2);
    areaRetangulo = A * B;

    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << areaTriangulo << endl;
    cout << "CIRCULO: " << areaCirculo << endl;
    cout << "TRAPEZIO: " << areaTrapezio << endl;
    cout << "QUADRADO: " << areaQuadrado << endl;
    cout << "RETANGULO: " << areaRetangulo << endl;

    return 0;
}