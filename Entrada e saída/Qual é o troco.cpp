// Ler quanto dinheiro a pessoa tem e o preço total da compra. Calcular o troco que deve ser dado. Mostrar o valor do troco com duas casas decimais.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double dinheiro, preco, troco;

    cin >> dinheiro >> preco;

    troco = dinheiro - preco;

    cout << fixed << setprecision(2);
    cout << "TROCO = " << troco << endl;

    return 0;
}