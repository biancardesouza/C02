// Ler uma quantidade n de alunos e as nota de cada um, calcular a média da turma utilizando uma função. Cabeçalho da função: float media(int notas[], int nAlunos).

#include <iostream>

using namespace std;

float media (int notas[], int nAlunos) {
    float soma = 0, media;

    for (int i = 0; i < nAlunos; i++) {
        soma += notas[i];
    }

    media = soma / nAlunos;

    return media;
}

int main() {
    int alunos, notas[100], parteInt, parteFrac;
    float mediaTurma;

    cin >> alunos;

    for (int i = 0; i < alunos; i++) {
        cin >> notas[i];
    }

    mediaTurma = media(notas, alunos);

    parteInt = (int)mediaTurma;
    parteFrac = (mediaTurma - parteInt) * 100;

    cout << "Media da turma = " << parteInt << "," << parteFrac << endl;

    return 0;
}