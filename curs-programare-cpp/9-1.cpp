#include <iostream>
using namespace std;
int main() {
    int S = 0, N;
    cin >> N;

    // Calculam suma cifrelor
    while (N > 0) {
        int cifra = N % 10;  // Extragem ultima cifra
        S += cifra;         // Adaugam cifra la suma totala
        N = N / 10;         // Eliminam ultima cifra pentru a trece la urmatoarea
    }

    cout << "Suma cifrelor este: " << S << endl;

    // Calculam cifra de control (suma cifrelor pana obtinem o singura cifra)
    int cifraControl = 0;
    while (S > 0) {
        cifraControl += S % 10;  // Extragem ultima cifra
        S = S / 10;             // Eliminam ultima cifra pentru a trece la urmatoarea
    }

    cout << "Cifra de control este: " << cifraControl << endl;

    return 0;
}
