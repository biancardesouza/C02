// Ler números reais correspondentes aos tempos dos corredores até encontrar -1. A posição de cada número no vetor identifica o corredor. Mostrar a classificação geral da corrida.

#include <iostream>

using namespace std;

int main() {
    int n = 0, id[100], aux2;
    double tempos[100], aux;

    cin >> aux;

    while(aux != -1) {
        tempos[n] = aux;
        id[n] = n;
        n++;
        cin >> aux;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (tempos[j] > tempos[j + 1]) {
                aux = tempos[j];
                tempos[j] = tempos[j + 1];
                tempos[j + 1] = aux;

                aux2 = id[j];
                id[j] = id[j + 1];
                id[j + 1] = aux2;
            }
        }
    }

    cout << "Classificacao:" << endl;

    for (int i = 0; i < n; i++) {
        cout << id[i] << endl;
    }

    return 0;
}