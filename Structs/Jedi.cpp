// Ler uma quantidade n de jedis e sua base. Ler o nome de um jedi e procurá-lo, mostrando na saída em qual base ele está. Caso não ache o jedi, mostrar "Este cavaleiro nao esta cadastrado".

#include <iostream>
#include <string>

using namespace std;

struct Jedi {
    string nome;
    int base;
};

int main() {
    Jedi jedi[100];
    int n;
    string procurado;
    bool achou = false;

    cin >> n;

    for (int i = 0; i < n; i++) {
        getline(cin >> ws, jedi[i].nome);
        cin >> jedi[i].base;
    }

    getline(cin >> ws, procurado);

    for (int i = 0; i < n; i++) {
        if (jedi[i].nome == procurado) {
            cout << "Este cavaleiro esta na base " << jedi[i].base << endl;
            achou = true;
        }
    }

    if (!achou) {
        cout << "Este cavaleiro nao esta cadastrado" << endl;
    }

    return 0;
}