// Tendo 10 matrizes 5x3, ler várias matrizes e dizer a qual das 10 ela corresponde (de 0 a 9). O usuário para de inserir matrizes quando entrar 15 zeros.

#include <iostream>

using namespace std;

int main() {
    int matriz[5][3];

    while (true) {
        int zero = 0;

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> matriz[i][j];

                if (matriz[i][j] == 0) {
                    zero++;
                }
            }
        }

        if (zero == 15) {
            break;
        }

        if (matriz[0][0] == 1 && matriz[0][1] == 1 && matriz[0][2] == 0) {
            cout << "UM" << endl;
        } else if (matriz[0][0] == 0 && matriz[0][1] == 1 && matriz[0][2] == 0) {
            cout << "QUATRO" << endl;
        } else {
            if (matriz[1][0] == 0 && matriz[1][1] == 1 && matriz[1][2] == 1) {
                if (matriz[3][0] == 1 && matriz[3][1] == 1 && matriz[3][2] == 0) {
                    cout << "CINCO" << endl;
                } else {
                    cout << "SEIS" << endl;
                }
            } else if (matriz[1][0] == 0 && matriz[1][1] == 1 && matriz[1][2] == 0) {
                if (matriz[2][0] == 0 && matriz[2][1] == 1 && matriz[2][2] == 0) {
                    cout << "ZERO" << endl;
                } else if (matriz[2][0] == 0 && matriz[2][1] == 0 && matriz[2][2] == 0) {
                    if (matriz[3][0] == 0 && matriz[3][1] == 1 && matriz[3][2] == 0) {
                        cout << "OITO" << endl;
                    } else {
                        cout << "NOVE" << endl;
                    }
                }
            } else if (matriz[1][0] == 1 && matriz[1][1] == 1 && matriz[1][2] == 0) {
                if (matriz[2][0] == 1 && matriz[2][1] == 1 && matriz[2][2] == 0) {
                    cout << "SETE" << endl;
                } else if (matriz[2][0] == 0 && matriz[2][1] == 0 && matriz[2][2] == 0) {
                    if (matriz[3][0] == 0 && matriz[3][1] == 1 && matriz[3][2] == 1) {
                        cout << "DOIS" << endl;
                    } else {
                        cout << "TRES" << endl;
                    }
                }
            }
        }
    }

    return 0;
}