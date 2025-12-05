// Ler uma quantidade n de alunos, nome e 4 notas de cada um. Calcular a média com a fórmula MEDIA = (N1 + 2*N2 + 3*N3 + 4*N4)/10. Mostrar na saída o nome e a média de cada aluno, com duas casas decimais.

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int n;
    string nome;
    double n1, n2, n3, n4, media;

    cin >> n;

    for (int i = 0; i < n; i++) {
        getline(cin >> ws, nome);
        cin >> n1 >> n2 >> n3 >> n4;

        media = (n1 + (2 * n2) + (3 * n3) + (4 * n4)) / 10;

        cout << fixed << setprecision(2);
        cout << nome << ": " << media << endl;
    }

    return 0;
}