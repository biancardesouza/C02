// Ler um número inteiro que corresponde a quantidade de alunos. Dividir os alunos em grupos compostos por 3 ou mais pessoas, maximizando a quantidade de grupos.

#include <iostream>

using namespace std;

int main() {
    int alunos, grupos;

    cin >> alunos;

    grupos = alunos / 3;

    cout << grupos << endl;

    return 0;
}