#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0)); 
    cout << "Numeri casuali pari tra 1 e 100: ";
    for (int i = 0; i < 10; i++) {
        int numeroCasuale = rand() % 100 + 1;
        if (numeroCasuale % 2 == 0) {
            cout << numeroCasuale << " ";
        }
    }
    cout << endl;
    return 0;
}
