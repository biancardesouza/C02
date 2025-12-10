// Ler dois inteiros correspondentes ao número de linhas e ao número de colunas de uma matriz. Em seguida, ler os elementos da matriz e mostrá-los na saída.

#include <iostream>

using namespace std;

int main() {
    int n, m;
    int matriz[100][100];

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matriz[i][j] << " ";
        }
        
        cout << endl;
    }

    return 0;
}