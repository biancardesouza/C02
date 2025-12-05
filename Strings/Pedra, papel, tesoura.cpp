// Ler uma quantidade n de partidas de pedra, papel e tesoura. Para cada partida, ler qual a jogada do jogador A e qual a jogada do jogador B. Determinar o vencedor de cada partida ou se houve empate.

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string jogadaA, jogadaB;

    cin >> n;

    for (int i = 0; i < n; i++) {
        getline(cin >> ws, jogadaA);
        getline(cin >> ws, jogadaB);

        if (jogadaA == jogadaB) {
            cout << "Empate" << endl;
        } else if (jogadaA == "pedra") {
            if (jogadaB == "tesoura") {
                cout << "Jogador A venceu" << endl;
            } else {
                cout << "Jogador B venceu" << endl;
            }
        } else if (jogadaA == "papel") {
            if (jogadaB == "pedra") {
                cout << "Jogador A venceu" << endl;
            } else {
                cout << "Jogador B venceu" << endl;
            }
        } else if (jogadaA == "tesoura") {
            if (jogadaB == "papel") {
                cout << "Jogador A venceu" << endl;
            } else {
                cout << "Jogador B venceu" << endl;
            }
        }
    }

    return 0;
}