// Ler um inteiro correspondente ao número de usuários no Facebook. Ler quantos amigos cada usuário tem e falar qual a menor e qual a maior quantidade.

#include <iostream>

using namespace std;

int main() {
    int n, contatos[100], menor = 999999, maior = -999999;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> contatos[i];
        
        if(contatos[i] < menor) {
            menor = contatos[i];
        }
        
        if(contatos[i] > maior) {
            maior = contatos[i];
        }
    }

    cout << "Menor numero de contatos: " << menor << endl;
    cout << "Maior numero de contatos: " << maior << endl;

    return 0;
}