// Ler um inteiro correspondente a quantidade de votos. Ler um inteiro correspondente a cada voto (1 - gostou, -1 - não gostou). Falar se a maioria gostou ou não da série ou se deu empate.

#include <iostream>

using namespace std;

int main() {
    int n, votos[100], gostou = 0, naoGostou = 0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> votos[i];
        
        if(votos[i] == 1) {
            gostou++;
        } else if(votos[i] == -1) {
            naoGostou++;
        }
    }

    if(gostou > naoGostou) {
        cout << "A maioria gostou" << endl;
    } else if(naoGostou > gostou) {
        cout << "A maioria nao gostou" << endl;
    } else {
        cout << "Deu empate" << endl;
    }

    return 0;
}