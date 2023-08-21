#include <iostream>
#include <string.h>
using namespace std;

int main() {
    // declararea sirurilor de caractere
    char x[] = "codul";   // alocare automata 5 sloturi + nul
    char y[24] = "codul"; // utilizeaza doar 6 sloturi

    // citirea sirurilor de caractere
    cin >> x; // citeste pana la primul spatiu
    cin.getline(y, 24); // citeste pana la primul end line
        // end line delimitat cu '\n'
        // sau maxim 23 de caractere + nul
        // getline(char* numeVar, dimensiuneVar), metoda cin
    cout << x; // afiseaza tot string-ul

    // parcurgerea individuala a caracterelor din sir
        // precum vectorii
    x[1] = 'O'; // 'o', indexare de la 0

    int i = 0;
    while (y[i] != '/0') {
        // prelucrare caracter
        i++;
    }
}
