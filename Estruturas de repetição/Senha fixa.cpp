// Ler um valor inteiro correspondente a senha e dizer se ela é válida ou inválida. A senha correta é 2002. Continuar lendo até que a senha correta seja informada.

#include <iostream>

using namespace std;

int main() {
    int senha;

    cin >> senha;

    while (senha != 2002) {
        cout << "Senha Invalida" << endl;
        
        cin >> senha;
    }

    cout << "Acesso Permitido" << endl;

    return 0;
}