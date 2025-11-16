// Ler um número que representa a quantidade de termos da série de Fibonacci a serem impressos. Imprimir os termos da série.

#include <iostream>

using namespace std;

int main() {
    int n, a = 0, b = 1, aux;

    cin >> n;

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            cout << a << endl;
        } else if (i == 1) {
            cout << b << endl;
        } else {
            aux = a + b;

            cout << aux << endl;
            
            a = b;
            b = aux;
        }
    }

    return 0;
}