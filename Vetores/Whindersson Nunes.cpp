// Ler um inteiro correspondente a uma quantidade de vídeos do Whindersson Nunes. Ler quantas visualizações cada vídeo teve e falar quantos têm mais ou igual e quantos têm menos de 10 milhões de visualizações.

#include <iostream>

using namespace std;

int main() {
    int n, views[100], mais = 0, menos = 0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> views[i];
        
        if(views[i] >= 10000000) {
            mais++;
        } else {
            menos++;
        }
    }

    cout << mais << " video(s) com mais de 10M views" << endl;
    cout << menos << " video(s) com menos de 10M views" << endl;

    return 0;
}