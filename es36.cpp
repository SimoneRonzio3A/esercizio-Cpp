#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cout<<"Inserisci la dimensione degli array: ";
    cin>>n;
    int array[n];
    int contan=0;
    for(int i=0; i<n; i++){
        cout<<"Inserisci un numero: ";
        cin>>array[i];
    }
    for(int i=0; i<n; i++){
        if(i==n){
            contan++;
        }
    }
    cout<<contan;
}
