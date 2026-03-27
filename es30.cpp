
#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;
int main() {
 int n;
 do{
cout << "Inserisci un numero: ";
cin >> n;
if(n==n){
cout << "Inserisci un numero: ";
cin >> n;
}else{
cout << "diversi ";
}
}while(n!=0);
    return 0;
}
