#include <bits/stdc++.h>
using namespace std;

// declaram structura
struct Catalog {
    string nume;
    int varsta;
    double medie;
};

int main() {
    // cream o variabila cu structura definita
    Catalog Elev;

    // setam valori pentru membrii variabilei
    Elev.nume = "Andrei";
    Elev.varsta = 16;
    Elev.medie = 9.66;


    // prelucram campurile structurii
    Elev.medie = Elev.medie + 0.22;
    cout << Elev.nume << ": " << Elev.medie;
  
    return 0;
}
