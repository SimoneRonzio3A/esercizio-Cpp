//Fai generare al programma un numero casuale tra 1 e 50. L’utente deve indovinarlo, e il programma dice “troppo alto” o “troppo basso” finché non indovina //
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0)); 
    int numeroCasuale = rand() % 50 + 1;
    int tentativo;
    cout << "Indovina il numero tra 1 e 50: ";
    do {
        cin >> tentativo;
        if (tentativo > numeroCasuale) {
            cout << "Troppo alto! Riprova: ";                       
        } else if (tentativo < numeroCasuale) {
            cout << "Troppo basso! Riprova: ";                       
        }
    } while (tentativo != numeroCasuale);
    cout << "Complimenti! Hai indovinato il numero!" << endl;
    return 0;
}