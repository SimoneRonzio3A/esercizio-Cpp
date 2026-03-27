#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;
int main() {
    srand(time(0));
    int n;
    cout << "Inserisci la dimensione del vettore: ";
    cin >> n;
    int* vettore = new int[n];
    for (int i = 0; i < n; i++) {
        vettore[i] = rand() % 100; 
    }
    cout << "Vettore generato: ";
    for (int i = 0; i < n; i++) {
        cout << vettore[i] << " ";
    }
    cout << endl;

    int scelta;
    cout << "Scegli un'operazione da fare sul vettore:" << endl;
    cout << "1. Somma tutti gli elementi" << endl;
    cout << "2. Prodotto degli elementi" << endl;
    cout << "3. Trova il massimo" << endl;
    cin >> scelta;

    switch (scelta) {
        case 1: {
            int somma = 0;
            for (int i = 0; i < n; i++) {
                somma += vettore[i];
            }
            cout << "La somma di tutti gli elementi è: " << somma << endl;
            break;
        }
        case 2: {
            int prodotto = 1;
            for (int i = 0; i < n; i++) {
                prodotto *= vettore[i];
            }
            cout << "Il prodotto di tutti gli elementi è: " << prodotto << endl;
            break;
        }
        case 3: {
            int massimo = vettore[0];
            for (int i = 1; i < n; i++) {
                if (vettore[i] > massimo) {
                    massimo = vettore[i];
                }
            }
            cout << "Il massimo elemento è: " << massimo << endl;
            break;
        }
        default:
            cout << "Scelta non valida!" << endl;
    }
}