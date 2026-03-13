#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
int n;
int somma=0;
double media;
int min=0;
int max=0;
int contan=0;
do{
cout << "Inserisci il numero: ";
cin >> n;
if(n>max){
    max=n;
}if(n<min){
    min=n;
}
contan++;
somma=somma+n;
media=somma/contan;
}while(n!=0);
cout << "La somma è: " << somma << endl;
cout << "La media è: " << media << endl;
cout << "Il numero più grande è: " << max << endl;
cout << "Il numero più piccolo è: " << min << endl;
return 0;
}