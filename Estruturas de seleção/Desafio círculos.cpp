// Ler 3 números reais correspondentes às coordenadas do centro e ao raio do primeiro círculo, e mais 3 números reais correspondentes às coordenadas do centro e ao raio do segundo círculo. Calcular e mostrar a área da interseção entre eles, com 2 casas decimais.

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double x1, y1, r1, x2, y2, r2;
    double d, r, R, area, pi = 3.14159, parte1, parte2, parte3;

    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    r = min(r1, r2);
    R = max(r1, r2);

    if (d >= r + R) {
        area = 0;
    } else if (d <= fabs(R - r)) {
        area = pi * r * r;
    } else {
        parte1 = r * r * acos((d * d + r * r - R * R) / (2 * d * r));
        parte2 = R * R * acos((d * d + R * R - r * r) / (2 * d * R));
        parte3 = 0.5 * sqrt((-d + r + R) * (d + r - R) * (d - r + R) * (d + r + R));

        area = parte1 + parte2 - parte3;
    }

    if(area == 0) {
        cout << "0" << endl;
    } else {
        cout << fixed << setprecision(2);
        cout << area << endl;
    }
    
    return 0;
}
