// Ler dois valores inteiros e dizer se eles foram digitados em ordem crescente ou decrescente. Continuar lendo até que os dois sejam iguais.

#include <iostream>

using namespace std;

int main() {
    int x, y;

    cin >> x >> y;

    while (x != y) {
        if (x < y) {
            cout << "Crescente" << endl;
        } else {
            cout << "Decrescente" << endl;
        }

        cin >> x >> y;
    }

    return 0;
}