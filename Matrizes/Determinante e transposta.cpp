// Ler 4 números reais e armazená-los por linhas em uma matriz 2x2. Calcular o determinante, a matriz transposta e a matriz inversa de M. Apresentar na saída a matriz, o determinante e a transposta, com 4 casas decimais.

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	double matriz[2][2], determinante, determinanteInv;
    double valorInv1, valorInv2, valorInv3, valorInv4;
    
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 2; ++j) {
			cin >> matriz[i][j];
		}
	}

	determinante = (matriz[0][0] * matriz[1][1]) - (matriz[0][1] * matriz[1][0]);

    determinanteInv = 1.0 / determinante;

    valorInv1 =  matriz[1][1] * determinanteInv;
    valorInv2 = -matriz[0][1] * determinanteInv;
    valorInv3 = -matriz[1][0] * determinanteInv;
    valorInv4 =  matriz[0][0] * determinanteInv;

    cout << fixed << setprecision(4);
    cout << "M = [" << matriz[0][0] << " " << matriz[0][1] << " ; " << matriz[1][0] << " " << matriz[1][1] << "]" << endl;
    cout << "Determinante de M = " << determinante << endl;
    cout << "Transposta de M = [" << matriz[0][0] << " " << matriz[1][0] << " ; " << matriz[0][1] << " " << matriz[1][1] << "]" << endl;

	return 0;
}