#include <iostream>
using namespace std;
int main() {
    int n, m, mat[1001][1001], S = 0;
    cin >> n >> m; // citim dimensiunile

    // matrice indexata de la 1, citim numerele
    // pentru indexare de la 0 am fi folosit
    // for (int i = 0; i < n; i++)
    // for (int j = 0; j < m; j++)
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> mat[i][j];

    // parcurgem vectorul
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (mat[i][j] % 2 == 0) // prelucrare elemente
                S = S + mat[i][j];

    cout << S;
    return 0;
}
