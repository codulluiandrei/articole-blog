#include <iostream>
using namespace std;
int main() {
    // Operatori aritmetici
    int a = 10, b = 3;
    int suma = a + b;
    int diferenta = a - b;
    int produs = a * b;
    int cat = a / b;
    int rest = a % b;

    // Operatori de atribuire
    int x = 5;
    x += 3; // x devine 8
    x -= 2; // x devine 6
    x *= 4; // x devine 24
    x /= 3; // x devine 8
    x %= 5; // x devine 3

    // Operatori relaționali
    bool rezultat1 = (a == b); // fals, deoarece a nu este egal cu b
    bool rezultat2 = (a > b);  // adevărat, deoarece a este mai mare decât b

    // Operatori logici
    bool conditie1 = (a > 0) && (b < 0); // fals, deoarece a nu este mai mare decât 0
    bool conditie2 = (a > 0) || (b < 0); // adevărat, deoarece a este mai mare decât 0

    // Operatori de incrementare și decrementare
    int i = 5;
    int j = ++i; // j devine 6, i devine 6
    int k = i++; // k devine 6, i devine 7

    // Operatori pe biți
    int numar1 = 12; // 1100 in binar
    int numar2 = 5;  // 0101 in binar
    int rezultatAND = numar1 & numar2; // 0100 (4 in decimal)
    int rezultatOR = numar1 | numar2;  // 1101 (13 in decimal)
    int rezultatXOR = numar1 ^ numar2; // 1001 (9 in decimal)
    int rezultatShiftLeft = numar1 << 2; // 110000 (48 in decimal)
    int rezultatShiftRight = numar1 >> 1; // 0110 (6 in decimal)

    // Operatorul ternar (operatorul condițional)
    int m = 10;
    int n = 5;
    int max = (m > n) ? m : n; // max va fi 10

    return 0;
}
