// Ler um número inteiro que corresponde ao número do funcionário, um número inteiro que representa a quantidade de horas trabalhadas e um valor real que é o valor que o funcionário recebe por hora. Calcular o salário do funcionário e mostrar o número e o salário, este último com duas casas decimais.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int numero, qtdHoras;
    double valorHora, salario;

    cin >> numero >> qtdHoras >> valorHora;

    salario = qtdHoras * valorHora;

    cout << "NUMBER = " << numero << endl;
    cout << fixed << setprecision(2);
    cout << "SALARY = U$ " << salario << endl;

    return 0;
}