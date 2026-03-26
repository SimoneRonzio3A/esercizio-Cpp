#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;
int main() {
    int n;
    cout << "Quanti numeri vuoi inserire? ";
    cin >> n;
    int molt=1;
    int numeri[n]; 
    for (int i = 0; i < n; i++) { 
        cout << "dimmi i numeri ";
        cin >> numeri[i];
        if(i%2!=0){
            molt=molt*numeri[i];
        }
    }
    cout << molt << endl;
}        
