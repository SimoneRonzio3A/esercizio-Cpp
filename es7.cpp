
#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
  int i=2;
  int conta=0;
  int somma=0;
  cout << "Inserisci un numero: ";
  cin >> n;
  while(n!=-1){
      if(n%2==0){
      ++conta;
      somma=somma+n;
      }
      cout << "Inserisci un numero: ";
      cin >> n;

  } 
  double media =somma/conta;
  cout << "La media dei numeri pari è: " << media << endl; 
}
