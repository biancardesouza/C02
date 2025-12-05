// Ler uma quantidade n de padawans e o nome e a pontuação de cada um. Mostrar na saída o nome e a pontuação do padawan com a maior pontuação, além de mostrar a média de todos os padawans com duas casas decimais.

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Padawan {
    string nome;
    int pontuacao;
};

int main() {
    Padawan padawan[100];
    int n, maiorPontuacao = -1;
    double media = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        getline(cin >> ws, padawan[i].nome);
        cin >> padawan[i].pontuacao;

        media += padawan[i].pontuacao;

        if (padawan[i].pontuacao > maiorPontuacao) {
            maiorPontuacao = padawan[i].pontuacao;
        }
    }

    media /= n;

    for (int i = 0; i < n; i++) {
        if (padawan[i].pontuacao == maiorPontuacao) {
            cout << "Padawan com mais pontos: " << padawan[i].nome << endl;
            cout << "Pontos: " << padawan[i].pontuacao << endl;
        }
    }

    cout << fixed << setprecision(2);
    cout << "Media da turma: " << media << " pontos" << endl;

    return 0;
}