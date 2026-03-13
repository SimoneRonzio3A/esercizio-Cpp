//Chiedi all’utente il prezzo originale e la percentuale di sconto. Calcola il prezzo finale e stampalo. Ripeti finché l’utente non inserisce 0 come prezzo.//
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
int n;
int sconto;
double prezzoFinale;
do{
cout << "Inserisci il prezzo originale: ";
cin >> n;                   
if(n==0){
    break;
}
cout << "Inserisci la percentuale di sconto: ";
cin >> sconto;
prezzoFinale = n - (n * sconto / 100.0);
cout << "Il prezzo finale è: " << prezzoFinale << endl;
}while(n!=0);
return 0;
}
