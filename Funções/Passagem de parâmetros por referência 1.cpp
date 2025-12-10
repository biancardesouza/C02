// Ler dois números inteiros x e y, calcular a média geométrica por meio de uma função. Cabeçalho da função: void media(int x, int y, float &m).

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void media (int x, int y, float &m) {
    m = sqrt(x * y);
}

int main() {
    int x, y;
    float m;

    cin >> x >> y;

    media(x, y, m);

    cout << fixed << setprecision(2);
    cout << "Media: " << m << endl;

    return 0;
}