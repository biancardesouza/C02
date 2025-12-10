// Ler um inteiro que corresponde à quantidade n de atletas, o nome de cada um e outros quatro inteiros que correspondem às notas e determinar o vencedor utilizando uma função. Cabeçalho  da função: int strongest(dados atletas[], int nAtletas).

#include <iostream>
#include <string>

using namespace std;

struct dados {
    string nome;
    int n1;
    int n2;
    int n3;
    int n4;
};

int strongest(dados atletas[], int nAtletas) {
    int maiorForca = 0, pos = 0, forca;

    for (int i = 0; i < nAtletas; i++) {
        forca = atletas[i].n1 + atletas[i].n2 + atletas[i].n3 + atletas[i].n4;

        if (forca > maiorForca) {
            maiorForca = forca;
            pos = i;
        }
    }

    return pos;
}

int main() {
    int n, pos;
    dados atletas[100];

    cin >> n;

    for (int i = 0; i < n; i++) {
        getline(cin >> ws, atletas[i].nome);
        cin >> atletas[i].n1 >> atletas[i].n2 >> atletas[i].n3 >> atletas[i].n4;
    }

    pos = strongest(atletas, n);

    cout << "Vencedor: " << atletas[pos].nome << endl;

    return 0;
}