#include <iostream>
#include <string>
using namespace std;
int main(){
    int N=5;
    int numeri[N];
    int contapari=0;
    for (int i = 0; i < N; i++) {
        cout << "Inserisci un numero: ";
        cin >> numeri[i];
        if(numeri[i]%2==0){
            contapari++;
        }
        if(contapari==N){
            cout<<"hai inserito solo numeri pari"<<endl;
            break;
        }
    }
}