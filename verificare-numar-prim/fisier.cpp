#include <iostream>
using namespace std;
// afiseaza 0 daca a nu este nr prim
// afiseaza 1 daca a este nr prim
int verificare_prim(int a) {
    if (a < 2) return 0;
    if (a == 2) return 1;
    if (a % 2 == 0) return 0;
    for (int d = 3; d * d <= a; d = d + 2)
        if (a % d == 0)
            return 0;
    return 1;
}
int main() {
    int n; cin >> n;
    cout << verificare_prim(n);
    return 0;
}
