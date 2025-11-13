// Ler dois números reais e um inteiro, correspondentes ao capital inicial, à taxa de juros (em % ao mês) e ao tempo de aplicação (em meses). Calcular o lucro obtido sobre o capital utilizando a fórmula M = C * (1 + i)^t. Mostrar o lucro com 2 casas decimais.

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double capital, taxa, montante, lucro;
    int tempo;

    cin >> capital >> taxa >> tempo;

    montante = capital * pow((1 + (taxa / 100)), tempo);

    lucro = montante - capital;

    cout << fixed << setprecision(2);
    cout << "LUCRO = " << lucro << endl;

    return 0;
}