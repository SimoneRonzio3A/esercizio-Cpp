#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    int numeroCasuale = rand() % 100 + 1;
    int tentativo;
    int tentativiRimasti = 5;
    cout << "Indovina il numero tra 1 e 100. Hai " << tentativiRimasti << " tentativi: ";
    do {
        cin >> tentativo;
        tentativiRimasti--;
        if (tentativo > numeroCasuale) {
            cout << "Troppo alto! Riprova. Tentativi rimasti: " <<
            tentativiRimasti << ": ";
        } else if (tentativo < numeroCasuale) {
            cout << "Troppo basso! Riprova. Tentativi rimasti: " <<
            tentativiRimasti << ": ";
        } else {
            cout << "Complimenti! Hai indovinato il numero!" << endl;
            return 0;
        }
    } while (tentativiRimasti > 0);
    cout << "Mi dispiace, hai esaurito i tentativi. Il numero era: " << numeroCasuale << endl;
    return 0;
