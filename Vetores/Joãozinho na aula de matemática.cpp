// Ler um inteiro e mostrar a sua tabuada.

#include <iostream>

using namespace std;

int main() {
    int n, tabuada[11];

    cin >> n;

    for(int i = 0; i <= 10; i++) {
        tabuada[i] = n * i;
    }

    for(int i = 0; i <= 10; i++) {
        cout << n << " x " << i << " = " << tabuada[i] << endl;
    }

    return 0;
}