// Ler um inteiro. Imprimir H, sendo H a soma de 1/1 até 1/N (sendo N o valor lido) com 4 casas decimais.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    double h = 0;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        h += 1.0 / i;
    }

    cout << fixed << setprecision(4);
    cout << h << endl;

    return 0;
}