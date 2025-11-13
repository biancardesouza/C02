// Calcular qual o dia da semana baseado em uma data fornecida (dia, mês e ano).

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int dia, mes, ano, n, g, f, delta, diaSemana;

    cin >> dia >> mes >> ano;

    if(mes <= 2) {
        g = ano - 1;
        f = mes + 13;
    } else {
        g = ano;
        f = mes + 1;
    }

    n = int(365.25 * g) + int(30.6 * f) - 621049 + dia;

    if(n < 36523) {
        delta = 2;
    } else if(n < 73048) {
        delta = 1;
    } else {
        delta = 0;
    }

    diaSemana = round(((n / 7.0) - (n / 7)) * 7) + delta + 1;

    switch (diaSemana)
    {
        case 1:
            cout << "domingo" << endl;
            break;
        case 2:
            cout << "segunda-feira" << endl;
            break;
        case 3:
            cout << "terça-feira" << endl;
            break;
        case 4:
            cout << "quarta-feira" << endl;
            break;
        case 5:
            cout << "quinta-feira" << endl;
            break;
        case 6:
            cout << "sexta-feira" << endl;
            break;
        case 7:
            cout << "sábado" << endl;
            break;
    }

    return 0;
}