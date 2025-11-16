// Ler um valor inteiro e imprimir os pares de 1 até o valor lido.

#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    for (int i = 2; i <= n; i += 2) {
        cout << i << "^2 = " << i * i << endl;
    }

    return 0;
}