//Chiedi un numero all’utente e conta quanti numeri sono inseriti e fermati quando l'utente decide di fermarsi.
#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    int conta=0;
    cout << "Inserisci un numero (inserisci -1 per fermarsi): ";
    cin >> n;
    while(n!=-1){
        ++conta;
        cout << "Inserisci un numero (inserisci -1 per fermarsi): ";
        cin >> n;
    }
    cout << "Hai inserito " << conta << " numeri." << endl;
}
