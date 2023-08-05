#include <iostream>
using namespace std;
int main() {
    int v[1001], n, st = 1, dr = 0;

    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    for (int i = 1; i <= n; i++)
        if (v[i] % 2 == 1) {
            int j = i;
            while (j + 1 <= n && v[j + 1] % 2 == 1)
                j++;
            if (j - i + 1 > dr - st + 1)
                st = i, dr = j;
            i = j;
        }

    cout << st << " " << dr;
    return 0;
}
