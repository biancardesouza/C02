// Ler um número inteiro e verificar se o mesmo é positivo ou negativo utilizando uma função. Cabeçalho da função: int sinal(int n). A função deve retornar 1 se o número for positivo, -1 se for negativo ou 0 se o número for igual a zero.

#include <iostream>

using namespace std;

int sinal (int n) {
    int resultado;

    if (n > 0) {
        resultado = 1;
    } else if (n < 0) {
        resultado = -1;
    } else {
        resultado = 0;
    }

    return resultado;
}

int main() {
    int numero, resultado;

    cin >> numero;

    resultado = sinal(numero);

    if (resultado == 1) {
        cout << "Positivo" << endl;
    } else if (resultado == -1) {
        cout << "Negativo" << endl;
    } else {
        cout << "Zero" << endl;
    }

    return 0;
}