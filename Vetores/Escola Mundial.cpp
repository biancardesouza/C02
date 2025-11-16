// Ler um inteiro correspondente a quantidade de alunos e um real correspondente à nota de cada um. Calcular a média, mostrá-la e falar quantos alunos estão acima e quantos estão abaixo da média.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n, acima = 0, abaixo = 0;
    double notas[100], soma = 0, media;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> notas[i];
        soma += notas[i];
    }

    media = soma / n;

    for(int i = 0; i < n; i++) {
        if(notas[i] >= media) {
            acima++;
        } else {
            abaixo++;
        }
    }

    cout << fixed << setprecision(2);
    cout << "Media da turma: " << media << endl;
    cout << "Alunos com nota acima da media: " << acima << endl;
    cout << "Alunos com nota abaixo da media: " << abaixo << endl;

    return 0;
}