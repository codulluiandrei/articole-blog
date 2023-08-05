#include <iostream>
using namespace std;
int main() {
    int v[1001], n = 0, val, poz;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    cin >> val >> poz;

    if (n < 1001 && poz >= 0 && poz <= n) {
        for (int i = n; i >= poz; i--)
            v[i + 1] = v[i];
        v[poz] = val;
        n++;
    }
    
    for (int i = 1; i <= n; i++)
        cout << v[i] << " ";
    
    return 0;
}
