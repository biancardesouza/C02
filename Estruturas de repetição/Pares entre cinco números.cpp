// Ler cinco valores inteiros e mostrar quantos são pares.

#include <iostream>

using namespace std;

int main() {
    int x, pares = 0;

    for (int i = 0; i < 5; i++) {
        cin >> x;

        if (x % 2 == 0) {
            pares++;
        }
    }

    cout << pares << " valores pares" << endl;

    return 0;
}