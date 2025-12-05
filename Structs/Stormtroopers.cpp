// Ler o id, índice de maldade e força de abate de vários stormtroopers até que seja inserido 0 no lugar do id. Calcular seu grau de aptidão (média entre índice de maldade e força de abate). Escolher o maior grau e mostrá-lo na saída junto do id do stormtrooper correspondente (duas casas decimais).

#include <iostream>
#include <iomanip>

using namespace std;

struct Stormtrooper {
    int id;
    double im;
    double fa;
    double ga;
};

int main() {
    Stormtrooper stormtrooper;
    int aux;
    double maiorGa = -1;
    int idMaiorGa;

    cin >> aux;

    while (aux != 0) {
        stormtrooper.id = aux;
        cin >> stormtrooper.im >> stormtrooper.fa;

        stormtrooper.ga = (stormtrooper.im + stormtrooper.fa) / 2;

        if (stormtrooper.ga > maiorGa) {
            maiorGa = stormtrooper.ga;
            idMaiorGa = stormtrooper.id;
        }

        cin >> aux;
    }

    cout << fixed << setprecision(2);
    cout << "Stormtrooper escolhido: " << idMaiorGa << endl;
    cout << "GA = " << maiorGa << endl;

    return 0;
}