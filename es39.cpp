#include <iostream>
#include <string>
using namespace std;
int main(){
int n;
string nome;
int quantità=0;
double prezzo=0; 
int negozio[n];
int tot=0;
    cout<<"dimmi quanti negozi: ";
    cin>>n;
for(int i=0; i<n; i++){
int M;
    cout<<"dimmi quanti prodotti ci sono: ";
    cin>>M;
int prodotto[M];
for(int j=0; j<n; j++){
    cout<<"dimmi il nome del prodotto: ";
    cin>>nome;
    cin>>quantità;
    cin>>prezzo;
if(quantità>50 && quantità<100){
tot=tot+((prezzo-prezzo*10/100))*quantità;
}else{
tot=tot+((prezzo-prezzo*20/100))*quantità;   
}

cout<<"il totale è"+ tot;
}}}
