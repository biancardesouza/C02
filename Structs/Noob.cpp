// Ler a matrícula, primeira nota e segunda nota de um aluno e calcular a média (primeira prova tem peso 2 e a segunda prova tem peso 3). Mostrá-los na saída. As notas e a média têm que ser mostradas com duas casas decimais.

#include <iostream>
#include <iomanip>

using namespace std;

struct Aluno {
    int matricula;
    double nota1;
    double nota2;
    double media;
};

int main() {
    Aluno aluno;

    cin >> aluno.matricula >> aluno.nota1 >> aluno.nota2;

    aluno.media = ((aluno.nota1 * 2) + (aluno.nota2 * 3)) / 5;
    
    cout << fixed << setprecision(2);
    cout << "Matricula do aluno: "<< aluno.matricula << endl;
    cout << "Nota da primeira prova: " << aluno.nota1 << endl;
    cout << "Nota da segunda prova: " << aluno.nota2 << endl;
    cout << "Media: " << aluno.media << endl;

    return 0;
}