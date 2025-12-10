// Tendo duas matrizes 3x3, uma respresentando masculino e uma representando feminino, ler uma matriz e dizer a qual ela corresponde.

#include <iostream>

using namespace std;

int main() {
    int matriz[3][3], fem = 0, masc = 0;
    int masculino[3][3] = {
        {1, 1, 1},
        {0, 1, 0},
        {0, 0, 1}
    };
    int feminino[3][3] = {
        {1, 0, 0},
        {1, 1, 0},
        {1, 0, 0}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] == masculino[i][j]) {
                masc++;
            }

            if (matriz[i][j] == feminino[i][j]) {
                fem++;
            }
        }
    }

    if (masc == 9) {
        cout << "Masculino" << endl;
    } else if (fem == 9) {
        cout << "Feminino" << endl;
    }

    return 0;
}