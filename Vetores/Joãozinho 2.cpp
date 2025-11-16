// Ler um inteiro correpondente à quantidade de operações que Joãozinho fará. Para cada operação, ler dois inteiros e um caractere correspondente à operação ('+', '-', '*' ou '/'). Mostrar o resultado de cada operação.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n, x[100], y[100];
    double z[100];
    char op[100];

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> x[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> y[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> op[i];
    }

    for(int i = 0; i < n; i++) {
        switch(op[i]) {
            case '+':
                z[i] = x[i] + y[i];
                break;
            case '-':
                z[i] = x[i] - y[i];
                break;
            case '*':
                z[i] = x[i] * y[i];
                break;
            case '/':
                if(y[i] != 0) {
                    z[i] = double(x[i]) / y[i];
                }
                break;
        }
    }

    for(int i = 0; i < n; i++) {
        if(op[i] == '/') {
            cout << fixed << setprecision(2);
            cout << x[i] << " " << op[i] << " " << y[i] << " = " << z[i] << endl;
        } else {
            cout << fixed << setprecision(0);
            cout << x[i] << " " << op[i] << " " << y[i] << " = " << z[i] << endl;
        }
    }

    return 0;
}