#include <iostream>
#include <string>
using namespace std;
int main(){
int n;
cout<<"Inserisci la dimensione degli array: ";
cin>>n;
int array1[n];
int array2[n];
int conta=0;
cout<<"Inserisci i numeri del primo array: ";
for(int i=0; i<n; i++){
    cin>>array1[i];
}
cout<<"Inserisci i numeri del secondo array: ";
for(int i=0; i<n; i++){
    cin>>array2[i];
}
for(int i=0; i<n; i++){
if(array1[i]==array2[i]){
   conta++; 
}
if(conta==n){
    cout<<" gli array sono uguali";
}
}
}





    
