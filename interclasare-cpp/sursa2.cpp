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
    
    i = 1; j = 1; k = 0;
    while (i <= n && j <= m) {
        if (a[i] < b[j]) 
            cout << a[i++] << " ";
        else 
            cout << b[j++] << " ";
    } 
    while (i <= n) 
        cout << a[i++] << " ";
    while (j <= m) 
        cout << b[j++] << " ";
    
    return 0;
}