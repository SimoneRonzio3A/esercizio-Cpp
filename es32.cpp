#include <iostream>
#include <string>
using namespace std;
int main(){
    int N;
      cout<<"Inserisci la lunghezza del vettore";
    cin>>N;
    string parole[N];
    string risposta;
 
    for(int i=0; i<N; i++){
   cout<<"Inserisci le parole";
    cin>>parole[i];  
      cout<<"vuoi continuare?";
      cin>>risposta;
    if(risposta=="STOP"){
       break;
    }  
    
    if(parole[i].length()>N){
        cout<<"La parola e maggiore di n"<<endl;
    }
}
}