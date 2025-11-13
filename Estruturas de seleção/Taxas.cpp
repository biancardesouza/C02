// Ler um número real correspondente ao salário de uma pessoa e calcular seu imposto de renda conforme uma tabela que o enunciado fornece.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double salario, imposto;

    cin >> salario;

    if (salario <= 2000) {
        imposto = 0;
    } else if (salario <= 3000) {
        imposto = (salario - 2000) * 0.08;
    } else if (salario <= 4500) {
        imposto = (1000 * 0.08) + ((salario - 3000) * 0.18);
    } else {
        imposto = (1000 * 0.08) + (1500 * 0.18) + ((salario - 4500) * 0.28);
    }

    cout << fixed << setprecision(2);

    if (imposto == 0) {
        cout << "Isento" << endl;
    } else {
        cout << "R$ " << imposto << endl;
    }

    return 0;
}