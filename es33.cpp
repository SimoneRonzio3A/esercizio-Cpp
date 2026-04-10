#include <iostream>
#include <string>
#include <ctime>
using namespace std;
int main(){
    int N=10;
    int numeri[N];
    int contapari=0;
     srand(time(0));
    cout << "Numeri generati:" << endl;
    for (int i = 0; i < N; i++) {
        numeri[i] = rand() % 10 + 1;
        cout << numeri[i] << " ";    
    if(numeri[i]%2==0){
        contapari++;
    }
    if(contapari>=3){
        cout<<"hai inserito 3 o piu numeri pari"<<endl;
        break;
    }
}
}