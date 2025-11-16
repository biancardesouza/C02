// Ler dois inteiros i e j e determinar o maior comprimento de ciclo para todos os inteiros entre i e j, inclusive. O comprimento de ciclo é definido considerando que, se o número for par, ele é dividido por 2, e se for ímpar, é multiplicado por 3 e somado 1. A sequência termina quando o número 1 é alcançado.

#include <iostream> 

using namespace std;

int main() {
    int i, j, inicio, fim, maior, aux, n, comprimento, x;
    
    cin >> i >> j;

    inicio = i;
    fim = j;
        
    if(i > j) {
        aux = i;
        i = j;
        j = aux;
    }
        
    maior = 0;
    n = i;
        
    while(n <= j) {
        x = n;
        comprimento = 1;
        
        while(x != 1) {
            if(x % 2 == 0) {
                x /= 2;
            } else {
                x = (3 * x) + 1;
            }

            comprimento++;
        }
        
        if(comprimento > maior) {
            maior = comprimento;
        }
        
        n++;
    }
    
    cout << inicio << " " << fim << " " << maior << endl;
    
    return 0;
}