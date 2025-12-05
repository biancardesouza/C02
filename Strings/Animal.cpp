// Ler três palavras características de algum animal e dizer qual é o animal de acordo com uma tabela dada.

#include <iostream>
#include <string>

using namespace std;

int main() {
    string p1, p2, p3;

    getline(cin >> ws, p1);
    getline(cin >> ws, p2);
    getline(cin >> ws, p3);

    if (p1 == "vertebrado") {
        if (p2 == "ave") {
            if (p3 == "carnivoro") {
                cout << "aguia" << endl;
            } else if (p3 == "onivoro") {
                cout << "pomba" << endl;
            }
        } else if (p2 == "mamifero") {
            if (p3 == "onivoro") {
                cout << "homem" << endl;
            } else if (p3 == "herbivoro") {
                cout << "vaca" << endl;
            }
        }
    } else if (p1 == "invertebrado") {
        if (p2 == "inseto") {
            if (p3 == "hematofago") {
                cout << "pulga" << endl;
            } else if (p3 == "herbivoro") {
                cout << "lagarta" << endl;
            }
        } else if (p2 == "anelideo") {
            if (p3 == "hematofago") {
                cout << "sanguessuga" << endl;
            } else if (p3 == "onivoro") {
                cout << "minhoca" << endl;
            }
        }
    }

    return 0;
}