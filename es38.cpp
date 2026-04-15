#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    int x;
    int i=1;
    cout<<"inserisci un numero: ";
cin>>n;

do{
x=n;
cout<<"inserisci un numero: ";
cin>>n;
i++;




}while(n>x);
cout<<"numeri inseriti "<<i;
