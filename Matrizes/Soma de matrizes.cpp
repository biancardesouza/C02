// Ler dois inteiros correspondentes ao número de linhas e ao número de colunas de duas matrizes. Em seguida, ler os elementos de cada matriz e somá-los em uma terceira matriz, mostrando o resultado na saída.

#include <iostream>

using namespace std;

int main() {
    int n, m;
    int matriz1[100][100], matriz2[100][100], matriz3[100][100];

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matriz1[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matriz2[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matriz3[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}