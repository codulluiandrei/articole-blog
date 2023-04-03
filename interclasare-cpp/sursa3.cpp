#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[100001], b[100001], c[200002], n, m, k, i, j;
    
    cin >> n; 
    for (int i = 1; i <= n; i++) 
        cin >> a[i];
    cin >> m; 
    for (int j = 1; j <= m; j++) 
        cin >> b[j];

    std::merge(a + 1, a + n + 1, b + 1, b + m + 1, c + 1);

    for (int i = 1; i <= n + m; i++) {
        cout << c[i] << " ";
    }

    return 0;
}