#include <iostream>
using namespace std;
int main() {
    int prezent[10];
    int n;
    cin >> n;
    while (n) {
        int cifra = n % 10;
        n = n / 10;
        if (cifra == 2)
            prezent[2]++;
    }
    if (prezent[2] > 0)
        cout << "cifra 2 apare in numar de " << prezent[2] << " ori";
    else
        cout << "cifra 2 nu apare in numar";
    return 0;
}