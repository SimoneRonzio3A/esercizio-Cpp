#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
  int i=2;
  int numeripari=0;
  cout << "Inserisci un numeri: ";
  cin >> n;
  for(i=2 ; i<=n;i++){
      if(n%2==0){
      ++numeripari;
        cout<< i;
      }
  }
}