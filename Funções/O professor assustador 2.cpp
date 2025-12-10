// Ler uma quantidade n de alunos e as nota de cada um, calcular a média da turma utilizando uma função. Cabeçalho da função: float media(int notas[], int nAlunos). Depois, utilizando as funções int nAbaixo(int notas[], int nAlunos, float media) e int nAcima(int notas[], int nAlunos, float media) para contar quantos alunos estão com nota abaixo e acima da média, respectivamente.

#include <iostream>
#include <iomanip>

using namespace std;

float media (int notas[], int nAlunos) {
    float soma = 0, media;

    for (int i = 0; i < nAlunos; i++) {
        soma += notas[i];
    }

    media = soma / nAlunos;

    return media;
}

int nAbaixo (int notas[], int nAlunos, float media) {
    int cont = 0;

    for (int i = 0; i < nAlunos; i++) {
        if (notas[i] < media) {
            cont++;
        }
    }

    return cont;
}

int nAcima (int notas[], int nAlunos, float media) {
    int cont = 0;

    for (int i = 0; i < nAlunos; i++) {
        if (notas[i] > media) {
            cont++;
        }
    }

    return cont;
}

int main() {
    int alunos, notas[100], alunosAbaixo, alunosAcima;
    float mediaTurma;

    cin >> alunos;

    for (int i = 0; i < alunos; i++) {
        cin >> notas[i];
    }

    mediaTurma = media(notas, alunos);

    alunosAbaixo = nAbaixo(notas, alunos, mediaTurma);
    alunosAcima = nAcima(notas, alunos, mediaTurma);

    cout << fixed << setprecision(2);
    cout << "Media da turma = " << mediaTurma << endl;
    cout << "Alunos com nota abaixo da media: " << alunosAbaixo << endl;
    cout << "Alunos com nota acima da media: " << alunosAcima << endl;

    return 0;
}