#include <iostream>
#include <cstring>
using namespace std;

typedef int NumereMari[1111];

void gen_mic(NumereMari x, int n) {
    x[0] = 0;
    if (n == 0) {
        x[(x[0] = 1)] = 0;
    }
    else {
        for (; n; n /= 10) {
            x[++x[0]] = n % 10;
        }
    }
}

void gen_mare(NumereMari Dest, NumereMari Sursa) {
    int i;
    for (i = 0; i <= Sursa[0]; i++) {
        Dest[i] = Sursa[i];
    }
}

int cmp_mare(NumereMari x, NumereMari y) {
    while (x[0] > 1 && x[x[0]] == 0)
        x[0]--;
    while (y[0] > 1 && y[y[0]] == 0)
        y[0]--;
    if (x[0] != y[0])
        return (x[0] < y[0] ? -1 : 1);
    int i = x[0];
    while (x[i] == y[i] && i > 0)
        i--;
    if (i == 0)
        return 0;
    if (x[i] < y[i])
        return -1;
    return 1;
}

void sum_mare(NumereMari x, NumereMari y) {
    int i, t = 0;
    if (x[0] < y[0])
        x[0] = y[0];
    for (i = 1; i <= x[0]; i++, t /= 10) {
        t = x[i] + y[i] + t;
        x[i] = t % 10;
    }
    if (t)
        x[++x[0]] = t;
}

void dif_mare(NumereMari x, NumereMari y) {
    int i, j, t = 0;
    for (i = 1; i <= x[0]; i++)
        if (x[i] >= y[i])
            x[i] -= y[i];
        else {
            j = i + 1;
            while (x[j] == 0)
                x[j++] = 9;
            x[j]--;
            x[i] = 10 + x[i] - y[i];
        }
    // eliminare cifre de 0 in plus
    for (; x[0] > 1 && !x[x[0]]; x[0]--);
}

void prod_mic(NumereMari x, int n) {
    int i, t = 0;
    for (i = 1; i <= x[0]; i++, t /= 10) {
        t += x[i] * n;
        x[i] = t % 10;
    }
    for (; t; t /= 10)
        x[++x[0]] = t % 10;
}

void prod_mare(NumereMari x, NumereMari y) {
    int i, j, t = 0;
    NumereMari z;
    z[0] = x[0] + y[0] - 1;
    for (i = 1; i <= x[0] + y[0]; i++)
        z[i] = 0;
    for (i = 1; i <= x[0]; i++)
        for (j = 1; j <= y[0]; j++)
            z[i + j - 1] += x[i] * y[j];
    for (i = 1; i <= z[0]; i++) {
        t += z[i];
        z[i] = t % 10;
        t /= 10;
    }
    if (t)
        z[++z[0]] = t;
    for (i = 0; i <= z[0]; i++)
        x[i] = z[i];
}

int imp_mare(NumereMari x, int n) {
    int i, r = 0;
    for (i = x[0]; i > 0; i--) {
        r = 10 * r + x[i];
        x[i] = r / n;
        r %= n;
    }
    for (; x[x[0]] == 0 && x[0] > 1;)
        x[0]--;
    return r;
}

void afisare_mare(NumereMari nr) {
    for (int i = nr[0]; i > 0; i--)
        cout << nr[i];
    cout << endl;
}

int main() {
    NumereMari a, b, c, d;
    
    // generarea numerelor mari
    gen_mic(a, 2023);
    gen_mic(b, 57);

    // suma numerelor mari
    gen_mare(c, a);
    sum_mare(c, b);
    afisare_mare(c);

    // diferenta numerelor mari
    gen_mare(c, a);
    dif_mare(c, b);
    afisare_mare(c);

    // inmultirea numerelor mari
    gen_mare(c, a);
    prod_mic(c, 3);
    afisare_mare(c);
    gen_mic(d, 57);
    prod_mare(c, d);
    afisare_mare(c);

    // impartirea numerelor mari
    gen_mare(c, a);
    int rest = imp_mare(c, 3); // impartire cu rest
    afisare_mare(c);

    return 0;
}
