// Ler vários números inteiros até que seja lido "0". Ler um inteiro que será pesquisado entre os números lidos. Falar em qual posição o número foi encontrado ou que não foi encontrado.

#include <iostream>

using namespace std;

int main() {
    int numeros[100], aux, n = 0, x, pos = -1;

    cin >> aux;

    while(aux != 0) {
        numeros[n] = aux;
        n++;
        cin >> aux;
    }
    
    cin >> x;

    for(int i = 0; i < n; i++) {
        if(numeros[i] == x) {
            pos = i;
        }
    }

    if(pos != -1) {
        cout << "Elemento " << x << " encontrado na posicao " << pos << endl;
    } else {
        cout << "Elemento " << x << " nao foi encontrado" << endl;
    }

    return 0;
}