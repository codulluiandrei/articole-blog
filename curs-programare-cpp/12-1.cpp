#include <iostream>
#include <string>
using namespace std;

string conversie_baza(int nr, int baza) {
    string rezultat = "";

    if (nr == 0) {
        return "0";
    }

    while (nr != 0) {
        int ramas = nr % baza;
        char cifra;

        // Converteste cifra ramasa in caracter
        if (ramas >= 0 && ramas <= 9)
            cifra = '0' + ramas;
        else {
            // pentru bazele mai mari de 10 folosim si litere
            cifra = 'A' + ramas - 10; 
        }

        rezultat = cifra + rezultat;
        nr /= baza;
    }

    return rezultat;
}

int main() {
    int nr, baza;
    cin >> nr; // numarul pe care il vom transforma
    cin >> baza; // baza in care va fi numarul (2 - 36)

    // optional verificare
    if (baza < 2 || baza > 36) {
        cout << "Baza trebuie sa fie intre 2 si 36!";
        return 1;
    }

    string rezultat = conversie_baza(nr, baza);
    cout << rezultat;

    return 0;
}
