#include <iostream>
#include <string>
using namespace std;
int main(){
 int a, b;
cout << "Inserisci la base e l'altezza: ";
cin >> a >> b;
if(a>0 && b>0){
int area=a*b;
cout << "l'area è: "<< area;
}else{
   cout << "non te la calcolo ";
}
return 0;
}
