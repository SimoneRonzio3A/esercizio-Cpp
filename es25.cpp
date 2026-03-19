#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;
int main() {
    int n=10;
    srand(time(0));
    double* numeri = new double[n]; 
    for (int i = 0; i < n; i++) {
        numeri[i] = rand() % 100 + 1;
    }
    double somma = 0;
    for (int i = 0; i < n; i++) {
        if(i%2==0){
            somma = somma+ numeri[i];
        }
    }
    for (int i = 0; i < n; i++) {
        cout << numeri[i] << " ";
    }
    cout << endl;
    cout << "La somma delle posizioni pari è: " << somma << endl;
    delete[] numeri;
    return 0;
}