// Com base em uma tabela de produtos e preços, ler dois inteiros (o código de um item e a quantidade deste item). A seguir, calcular e mostrar o valor da conta a pagar.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int codigo, quantidade;
    double total;

    cin >> codigo >> quantidade;

    switch (codigo) {
        case 1:
            total = 4 * quantidade;
            break;
        case 2:
            total = 4.5 * quantidade;
            break;
        case 3:
            total = 5 * quantidade;
            break;
        case 4:
            total = 2 * quantidade;
            break;
        case 5:
            total = 1.5 * quantidade;
            break;
    }

    cout << fixed << setprecision(2);
    cout << "Total: R$ " << total << endl;

    return 0;
}