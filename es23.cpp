//Genera un vettore di 10 numeri casuali e stampali in ordine inverso//
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath> 
using namespace std;
int main() {
    const int n = 10;
    int* numeri = new int[n];
    srand(time(0));
    cout << "Numeri generati:" << endl;
    for (int i = 0; i < n; i++) {
        numeri[i] = rand() % 100 + 1;
        cout << numeri[i] << " ";
    }
    cout << "\nNumeri in ordine inverso:" << endl;
    for (int i = n - 1; i >= 0; i--) {
        cout << numeri[i] << " ";
    }
    cout << endl;
    delete[] numeri;
    return 0;
}