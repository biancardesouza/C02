// Ler dois valores inteiros correspondentes ao número de linhas e ao número de colunas de uma matriz e mais um inteiro correspondente a dimensão de uma face do pixel. Em seguida, ler os elementos da matriz que formam uma imagem binária (0 ou 1) e identificar qual a área total da ferida. supondo que temos 6 pixeis 1 e que cada um tenha dois mm de dimensão: AREA_TOTAL = 2 x 2 x 6 = 24 mm2.

#include <iostream>

using namespace std;

int main() {
    int n, m, d, cont = 0, area;
    int matriz[100][100];

    cin >> n >> m >> d;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matriz[i][j];

            if (matriz[i][j] == 1) {
                cont++;
            }
        }
    }

    area = d * d * cont;

    cout << "AREA = " << area << " mm^2" << endl;

    return 0;
}