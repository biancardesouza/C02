// Ler uma quantidade n de jogadores e o nome e a idade de cada um. Mostrar na saída o nome e a idade, separados por um espaço, de cada um que tenha 18 anos ou mais. Caso nenhum jogador tenha, imprimir "Nenhum jogador com 18 anos ou mais".

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, idade;
    string nome;
    bool jogadorCom18 = false;

    cin >> n;

    for (int i = 0; i < n; i++) {
        getline(cin >> ws, nome);
        cin >> idade;

        if (idade >= 18) {
            cout << nome << " " << idade << endl;
            jogadorCom18 = true;
        }
    }

    if (!jogadorCom18) {
        cout << "Nenhum jogador com 18 anos ou mais" << endl;
    }

    return 0;
}