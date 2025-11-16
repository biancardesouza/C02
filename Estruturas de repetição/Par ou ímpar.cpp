// Ler um valor inteiro que indica a quantidade de números a serem lidos. Ler cada um dos números e imprimir se é par ou ímpar e se é positivo ou negativo.

#include <iostream>

using namespace std;

int main() {
    int n, numero;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> numero;

        if (numero % 2 == 0) {
            cout << "EVEN ";
        } else {
            cout << "ODD ";
        }

        if (numero >= 0) {
            cout << "POSITIVE" << endl;
        } else {
            cout << "NEGATIVE" << endl; 
        }
    }

    return 0;
}