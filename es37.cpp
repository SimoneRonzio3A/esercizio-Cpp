#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    string x;
    int z;
    double molt;
    cout<<"quanti soldi ha mario?: ";
    cin>>n;
    int pastina=1;
    double panino=1.5;
   while(n!=0){
    cout<<"cosa compra mario: ";
    cin>>x;
    if(x=="pastina"){
    cout<<"quante ne compra?: ";
    cin>>z; 
     molt=z*1;
     n= n-molt;
    }
    if(x=="panino"){
    cout<<"quanti ne compra?: ";
    cin>>z; 
     molt=z*1.5;
     n= n-molt;
    } 
   } 
}
   
    