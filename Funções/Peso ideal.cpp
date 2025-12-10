// Ler a altura e o sexo de uma pessoa e calcular o seu peso ideal utilizando uma função. Cabeçalho da função: float ideal(float h, char sexo).

#include <iostream>
#include <iomanip>

using namespace std;

float ideal (float h, char sexo) {
    float peso;

    if (sexo == 'M') {
        peso = (72.7 * h) - 58;
    } else {
        peso = (62.1 * h) - 44.7;
    }
    
    return peso;
}

int main() {
    float altura, pesoIdeal;
    char sexo;

    cin >> altura >> sexo;

    pesoIdeal = ideal(altura, sexo);

    cout << fixed << setprecision(2);
    cout << "Peso ideal = " << pesoIdeal << " kg" << endl;

    return 0;
}