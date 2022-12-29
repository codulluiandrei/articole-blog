#include <iostream>
using namespace std;
int main() {
    // intrare: n = 5, v = [2 3 4 7 9], numarcautat = 7
    // iesire: Numarul cautat apare in sir pe pozitia 4
    int n, v[1001], numarcautat; cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> v[i];
    cin >> numarcautat;
    int stanga = 1, dreapta = n, pozitiecautata = n + 1;
    while (stanga <= dreapta) {
        int mijloc = (stanga + dreapta) / 2;
        if (v[mijloc] >= numarcautat) pozitiecautata = mijloc, dreapta = mijloc - 1;
        else stanga = mijloc + 1;
    } if (v[pozitiecautata] == numarcautat)
        cout << "Numarul cautat apare in sir pe pozitia " << pozitiecautata;
    else
        cout << "Numarul cautat nu apare in sir";
    return 0;
}
