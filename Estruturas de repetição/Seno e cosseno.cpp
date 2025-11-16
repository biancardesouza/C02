// Ler dois números reais N1 e N2, correspondentes aos limites inferior e superior de um intervalo para um ângulo θ. Verificar para quais valores de θ a expressão sen(θ) * cos(θ) é positiva.

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double N1, N2, theta, inicio, final;
    
    cin >> N1 >> N2;
    
    theta = N1;
    
    while(sin(theta) * cos(theta) <= 0) {
        theta += 0.1;
    }
    
    inicio = theta;
    
    while( sin(theta) * cos(theta) > 0) {
        theta += 0.1;
    }
    
    final = theta - 0.1;
    
    cout << fixed << setprecision(1);
    cout << inicio << " a " << final << endl;

    return 0;
}