#include <iostream>
using namespace std;
int main() {
    int n, v[1001], S = 0;
    cin >> n; // numarul de numere din vector

    // vector indexat de la 1, citim numerele
    // pentru indexare de la 0 am fi folosit
    // for (int i = 0; i < n; i++)
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    // parcurgem vectorul
    for (int i = 1; i <= n; i++)
        if (v[i] % 2 == 0) // prelucrare elemente
            S = S + v[i];

    cout << S;
    return 0;
}
