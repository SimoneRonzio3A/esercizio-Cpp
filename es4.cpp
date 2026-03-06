#include <iostream>
#include <string>
using namespace std;
int main(){
  int n;
  int i=1;
  int molt=1;
  cout << "Inserisci un numero: ";
  cin >> n; 
while(i<=n){  
  molt=molt*i;
 
 i=i+1;
}cout<<molt;
return 0;
}   