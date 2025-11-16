// Ler dois valores reais que representam notas de um aluno, calcular a média das que são válidas (entre 0 e 10). Imprimir a média com 2 casas decimais.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double nota1, nota2, media;

    cin >> nota1;

    while(nota1 < 0 || nota1 > 10) {
        cout << "nota invalida" << endl;
        cin >> nota1;
    }

    cin >> nota2;

    while(nota2 < 0 || nota2 > 10) {
        cout << "nota invalida" << endl;
        cin >> nota2;
    }

    media = (nota1 + nota2) / 2.0;

    cout << fixed << setprecision(2);
    cout << "media = " << media << endl;

    return 0;
}