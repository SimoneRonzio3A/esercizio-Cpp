//Ad ogni iterazione, il programma deve chiedere: auto, moto. : benzina, diesel, elettrico e i km. Dopo aver calcolato il costo, chiedere se l’utente vuole inserire un altro veicolo.  Considera che (auto,benzina 0,15- auto,diesel 0,13- auto, elettrico 0,08- moto, benzina 0,07-moto,elettrico 0,04)//
#include <iostream>
#include <string>
using namespace std;
int main(){
    string veicolo;
    string carburante;
    int km;
    char scelta;
    do {
        cout << "Inserisci il tipo di veicolo (auto/moto): ";
        cin >> veicolo;
        cout << "Inserisci il tipo di carburante (benzina/diesel/elettrico): ";
        cin >> carburante;
        cout << "Inserisci i km percorsi: ";
        cin >> km;

        double costo = 0.0;

        if (veicolo == "auto" || veicolo == "moto") {
            if (carburante == "benzina") {
                costo = km * 0.15;
            } else if (carburante == "diesel") {
                costo = km * 0.13;
            } else if (carburante == "elettrico") {
                costo = km * 0.08;
            }
        } else if (veicolo == "moto") {
            if (carburante == "benzina") {
                costo = km * 0.07;
            } else if (carburante == "elettrico") {
                costo = km * 0.04;
            }
        }

        cout << "Il costo del viaggio è: " << costo << " euro" << endl;

        cout << "Vuoi inserire un altro veicolo? (si/no): ";
        cin >> scelta;

    } while (scelta == 'si');

    return 0;
}