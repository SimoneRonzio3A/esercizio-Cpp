//Chiedi all’utente quanti numeri vuole inserire (n) e calcola la loro media usando un array //
#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;
int main() {
    int n;
    cout << "Quanti numeri vuoi inserire? ";
    cin >> n;

    double* numeri = new double[n]; 

    cout << "Inserisci " << n << " numeri:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> numeri[i];
    }

    double somma = 0;
    for (int i = 0; i < n; i++) {
        somma += numeri[i];
    }

    double media = somma / n;
    cout << "La media è: " << media << endl;

    delete[] numeri; 
    return 0;
}