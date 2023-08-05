#include <iostream>
using namespace std;
int main() {
    int v[1001], n = 0, poz;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    cin >> poz;

    if (poz >= 1 && poz <= n) {
        for (int i = poz; i < n; i++)
            v[i] = v[i + 1];
        n--;
    }
    
    for (int i = 1; i <= n; i++)
        cout << v[i] << " ";
    
    return 0;
}
