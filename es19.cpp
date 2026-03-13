#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath> 
using namespace std;
int main() {
    int n;
    cout << "Inserisci un numero: ";
    cin >> n;
    if(n>0){
        sqrt(n);
    cout << "La radice quadrata di " << n << " è: " << sqrt(n) << endl;
    }else{
        cout << "Numero non valido" << endl;
    }
    return 0;
}