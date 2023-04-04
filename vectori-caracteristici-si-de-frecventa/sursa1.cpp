#include <iostream>
using namespace std;
int main() {
    bool prezent[10];
    int n;
    cin >> n;
    while (n) {
        int cifra = n % 10;
        n = n / 10;
        if (cifra == 2)
            prezent[2] = true;
    }
    if (prezent[2] == true)
        cout << "cifra 2 apare in numar";
    else
        cout << "cifra 2 nu apare in numar";
    return 0;
}