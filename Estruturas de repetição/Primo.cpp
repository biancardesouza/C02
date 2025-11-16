// Ler um inteiro e dizer se ele é primo ou não.

#include <iostream>

using namespace std;

int main() {
    int n, i, divisores = 0;

    cin >> n;

    i = n;

    while(i >= 1) {
        if(n % i == 0) {
            divisores++;
        }

        i--;
    }
    
    if(divisores <= 2) {
        cout << "primo" << endl;
    } else {
        cout << "nao e primo" << endl;
    }

    return 0;
}