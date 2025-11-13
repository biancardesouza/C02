// Ler 3 valores reais correspondentes aos coeficientes de uma equação do segundo grau e calcular suas raízes e mostrá-las com 5 casas decimais. Se não for possível, mostrar a mensagem "Impossivel calcular".

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, delta, r1, r2;

    cin >> a >> b >> c;

    delta = pow(b, 2) - (4 * a * c);

    if ((delta < 0) || (a == 0)) {
        cout << "Impossivel calcular" << endl;
    } else {
        r1 = (-b + sqrt(delta)) / (2 * a);
        r2 = (-b - sqrt(delta)) / (2 * a);

        cout << fixed << setprecision(5);
        cout << "R1 = " << r1 << endl;
        cout << "R2 = " << r2 << endl;
    }

    return 0;
}