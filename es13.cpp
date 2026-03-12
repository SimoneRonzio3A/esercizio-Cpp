#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cout << "Inserisci il numero di stipendi: ";
    cin >> n;
    double totalestipendi = 0.0;
    for (int i = 0; i < n; i++) {
        double stipendioBase;
        string tipoContratto;
        cout << "Inserisci lo stipendio base: ";
        cin >> stipendioBase;
        cout << "Inserisci il tipo di contratto: ";
        cin >> tipoContratto;

        double aumento = 0.0;
        double prezzo=0.0;
        if (tipoContratto == "tempopieno") {
            aumento = stipendioBase*0.15; 
            prezzo = stipendioBase+aumento;
            totalestipendi = totalestipendi + prezzo;
        } else if (tipoContratto== "parttime") {
            aumento = stipendioBase*0.10; 
            prezzo = stipendioBase+aumento;
            totalestipendi = totalestipendi + prezzo;
        } else{
            aumento = stipendioBase*0.05; 
            prezzo = stipendioBase+aumento;
            totalestipendi = totalestipendi + prezzo;
        }
         
        
    }
    cout << "Il totale stipendi è: " << totalestipendi << endl;
    return 0;
}