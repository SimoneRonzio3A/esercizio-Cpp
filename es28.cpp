#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;
int main() {
    int n=10;
    int numeri[n]; 
    srand(time(0)); 
    for (int i = 0; i < n; i++) { 
        numeri[i] = rand() % 100; 
        cout << numeri[i] << " "; 
    }
    cout << endl;
    for (int i = 0; i < n; i++) { 
        if(numeri[i]%2==0){
            numeri[i]=0;
        }
        cout << numeri[i] << " "; 
    }
    cout << endl;
}
    