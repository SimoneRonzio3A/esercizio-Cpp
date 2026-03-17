//Genera un vettore di 10 numeri casuali tra 1 e 50 e trova il massimo e la sua posizione//
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    const int n = 10;
    int* numeri = new int[n];
    srand(time(0));
    for (int i = 0; i < n; i++) {
        numeri[i] = rand() % 50 + 1;
    }
    int max = numeri[0];
    int pos = 0;
    for (int i = 1; i < n; i++) {
        if (numeri[i] > max) {
            max = numeri[i];
            pos = i;
        }
    }
    cout << "Il numero più grande è: " << max << " e si trova in posizione: " << pos << endl;
    delete[] numeri;
    return 0;
}