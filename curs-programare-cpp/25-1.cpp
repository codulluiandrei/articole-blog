#include <iostream>
using namespace std;
int sumaDivideEtImpera(int v[], int stanga, int dreapta) {
    // caz special pentru a termina procesul
    // un singur element ramas in vectorul v
    if (stanga == dreapta)
        return v[stanga]; 
    
    else {
        // calculam mijlocul pentru a imparti
        // vectorul in doua bucati egale care
        // vor fi parcurse de divide et impera
        // apoi adunate la rezultatul final
        int mijloc = (stanga + dreapta) / 2;

        // returnam rezultatul din reapelari
        // folosim ca parametrii pentru functie
        // intervalele de la stanga la mijloc
        // si apoi cel de la mijloc spre dreapta
        return sumaDivideEtImpera(v, stanga, mijloc) + sumaDivideEtImpera(v, mijloc + 1, dreapta);
    }
}
int main() {
    int n, v[1001], S = 0;
    
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    // trimitem ca parametrii pentru functie
    // - vectorul cu elementele pe care le vom aduna
    // - pozitia de start din vector (indexare de la 1)
      // aka cel mai din stanga punct
    // - pozitia de final din vector
      // aka cel mai din dreapta punct
    cout << sumaDivideEtImpera(v, 1, n);
  
    return 0;
}
