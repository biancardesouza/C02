// Ler três valores reais correspondentes aos coeficientes de uma equação do segundo grau e calcular o valor de delta utilizando uma função. Cabeçalho da função: float calc_delta(float a, float b, float c). Fazer outra função para calcular as raízes da equação do segundo grau, com o cabeçalho int calc_raizes(float a, float b, float c, float &x1, float &x2). Mostrar as raízes da equação, se existirem, com 5 casas decimais, ou uma mensagem avisando que não é possível calcular. Se houverem duas raízes, a menor raiz deve ser apresentada primeiro.

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float calc_delta (float a, float b, float c) {
    float delta;

    delta = pow(b, 2) - (4 * a * c);

    return delta;
}

int calc_raizes (float a, float b, float c, float &x1, float &x2) {
    float delta = calc_delta(a, b, c);
    int res;

    if (delta < 0) {
        res = 0;
    } else if (delta == 0) {
        x1 = (-1 * b) / (2 * a);
        x2 = x1;
        res = 1;
    } else {
        x1 = ((-1 * b) - sqrt(delta)) / (2 * a);
        x2 = ((-1 * b) + sqrt(delta)) / (2 * a);

        res = 2; // Duas raízes reais
    }

    return res;
}

int main() {
    float a, b, c, x1, x2;
    int qtdRaizes;

    cin >> a >> b >> c;

    qtdRaizes = calc_raizes(a, b, c, x1, x2);

    cout << fixed << setprecision(5);

    if (qtdRaizes == 0) {
        cout << "Impossivel calcular" << endl;
    } else if (qtdRaizes == 1) {
        cout << "x = " << x1 << endl;
    } else {
        if (x1 < x2) {
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        } else {
            cout << "x1 = " << x2 << endl;
            cout << "x2 = " << x1 << endl;
        }
    }

    return 0;
}