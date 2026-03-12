//Sono dati N biglietti. Per ogni biglietto si conoscono: prezzo base, tipo di cliente. Applicare lo sconto: Studente → 30% , Adulto → 5% , Over 65 → 40%. Stampare il totale incassato.//
#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cout << "Inserisci il numero di biglietti: ";
    cin >> n;
    double totaleIncassato = 0.0;
    for (int i = 0; i < n; i++) {
        double prezzoBase;
        string tipoCliente;
        cout << "Inserisci il prezzo base del biglietto: ";
        cin >> prezzoBase;
        cout << "Inserisci il tipo di cliente: ";
        cin >> tipoCliente;

        double sconto = 0.0;
        double prezzo=0.0;
        if (tipoCliente == "studente") {
            sconto = prezzoBase*0.30; 
            prezzo = prezzoBase-sconto;
            totaleIncassato = totaleIncassato + prezzo;
        } else if (tipoCliente == "adulto") {
            sconto = prezzoBase*0.05; 
            prezzo = prezzoBase-sconto;
            totaleIncassato = totaleIncassato + prezzo;
        } else if (tipoCliente == "over65") {
            sconto = prezzoBase*0.40; 
            prezzo = prezzoBase-sconto;
            totaleIncassato = totaleIncassato + prezzo;
        }
         
        
    }
    cout << "Il totale incassato è: " << totaleIncassato << endl;
    return 0;
}