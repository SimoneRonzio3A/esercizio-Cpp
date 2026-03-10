//Chiedi numeri finché l’utente non digita 0 e somma solo quelli dispari//
#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    int somma=0;
    cout << "Inserisci un numero: ";
    cin >> n;
    while(n!=0){
        if(n%2!=0){
            somma=somma+n;
        }
        cout << "Inserisci un numero: ";
        cin >> n;
    }
    cout << "La somma dei numeri dispari è: " << somma << endl;
    return 0;
}   