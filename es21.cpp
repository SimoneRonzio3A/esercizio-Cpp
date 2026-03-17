//Chiedi all’utente di inserire n numeri in un array e trova il più piccolo//
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    int n;
    cout << "Quanti numeri vuoi inserire? ";
    cin >> n;   
    int* numeri = new int[n];
    cout << "Inserisci " << n << " numeri:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> numeri[i];
    }
    int min = numeri[0];
    for (int i = 1; i < n; i++) {
        if (numeri[i] < min) {          
            min = numeri[i];
        }
    }
    cout << "Il numero più piccolo è: " << min << endl;
    delete[] numeri;
    return 0;
}   