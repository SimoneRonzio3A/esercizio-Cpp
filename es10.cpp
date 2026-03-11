#include <iostream>
#include <string>
using namespace std;
int main(){
    int codiceErrore;
    int tentativi = 0;
     int maxtentativi=3;
    do {
        cout << "Inserisci il codice errore: ";
        cin >> codiceErrore;

        switch (codiceErrore) {
            case 400:
                cout << "Bad Request" << endl;
                break;
            case 401:
                cout << "Unauthorized" << endl;
                break;
            case 403:
                cout << "Forbidden" << endl;
                break;
            case 404:
                cout << "Not Found" << endl;
                break;
            case 200:
                 cout << "corretto" << endl;
                break;
            default:
                cout << "Errore sconosciuto" << endl;
        }

        tentativi++;
    } while (tentativi<maxtentativi && codiceErrore != 200);
    return 0;
}
