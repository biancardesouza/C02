// Ler dois inteiros correspondentes aos gols marcados pelo Inter e pelo Grêmio em um GRENAL. Ler mais um inteiro que indica se haverá ou não uma nova partida. Quando não houver mais partidas, imprimir a quantidade de GRENAIS, o número de vitórias do Inter, o número de vitórias do Grêmio, o número de empates e qual time venceu o maior número de GRENAIS ou se não houve vencedor.

#include <iostream>

using namespace std;

int main() {
    int golsInter, golsGremio, op;
    int qtdGrenais = 0, vitoriasInter = 0, vitoriasGremio = 0, empates = 0;

    do {
        cin >> golsInter >> golsGremio;

        qtdGrenais++;

        if (golsInter > golsGremio) {
            vitoriasInter++;
        } else if (golsGremio > golsInter) {
            vitoriasGremio++;
        } else {
            empates++;
        }

        cout << "Novo grenal (1-sim 2-nao)" << endl;

        cin >> op;
    } while (op == 1);

    cout << qtdGrenais << " grenais" << endl;
    cout << "Inter:" << vitoriasInter << endl;
    cout << "Gremio:" << vitoriasGremio << endl;
    cout << "Empates:" << empates << endl;

    if (vitoriasInter > vitoriasGremio) {
        cout << "Inter venceu mais" << endl;
    } else if (vitoriasGremio > vitoriasInter) {
        cout << "Gremio venceu mais" << endl;
    } else {
        cout << "Nao houve vencedor" << endl;
    }

    return 0;
}