//Genera un vettore di 12 numeri casuali, chiedi un numero all’utente e stampa la posizione se esiste.//
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    const int n = 12;           
    int* numeri = new int[n];
    srand(time(0));
    cout << "Numeri generati:" << endl;
    for (int i = 0; i < n; i++) {
        numeri[i] = rand() % 100 + 1;
        cout << numeri[i] << " ";   
    }
    cout << "Inserisci un numero da cercare: ";
    int numeroDaCercare;
    cin >> numeroDaCercare;
    int posizione = -1;
    for (int i = 0; i < n; i++) {
        if (numeri[i] == numeroDaCercare) {
            posizione = i;
            break;
        }
    }
    if (posizione != -1) {
        cout << "Il numero " << numeroDaCercare << " si trova in posizione: " << posizione << endl;
    } else {
        cout << "Il numero " << numeroDaCercare << " non è stato trovato." << endl;
    }
    delete[] numeri;
    return 0;
}