// Ler a matrícula, primeira nota e segunda nota de um aluno. Mostrá-los na saída. As notas têm que ser mostradas com duas casas decimais.

#include <iostream>
#include <iomanip>

using namespace std;

struct Aluno {
    int matricula;
    double nota1;
    double nota2;
};

int main() {
    Aluno aluno;

    cin >> aluno.matricula >> aluno.nota1 >> aluno.nota2;
    
    cout << fixed << setprecision(2);
    cout << "Matricula do aluno: "<< aluno.matricula << endl;
    cout << "Nota da primeira prova: " << aluno.nota1 << endl;
    cout << "Nota da segunda prova: " << aluno.nota2 << endl;

    return 0;
}