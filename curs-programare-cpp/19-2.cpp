#include <iostream>
using namespace std;
int main() {
    int v[1001], n, st = 1, dr = 0;
    int maxim = -2000000000, S = -1, start;

    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> v[i];

    for (int i = 1; i <= n; ++i) {
        if (S < 0)
            S = 0, start = i;
        S = S + v[i];
        if (S > maxim)
            maxim = S, st = start, dr = i;
    }

    cout << maxim << " " << st << " " << dr << endl;
    return 0;
}
