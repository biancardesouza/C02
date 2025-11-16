// Ler coordenadas (inteiras) e dizer em qual quadrante do plano cartesiano elas se encontram. Continuar lendo até que pelo menos uma coordenada seja zero.

#include <iostream>

using namespace std;

int main() {
    int x, y;

    cin >> x >> y;

    while (x != 0 && y != 0) {
        if (x > 0 && y > 0) {
            cout << "primeiro" << endl;
        } else if (x < 0 && y > 0) {
            cout << "segundo" << endl;
        } else if (x < 0 && y < 0) {
            cout << "terceiro" << endl;
        } else {
            cout << "quarto" << endl;
        }

        cin >> x >> y;
    }

    return 0;
}