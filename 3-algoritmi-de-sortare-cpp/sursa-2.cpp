#include <bits/stdc++.h>
using namespace std;
int n, v[1001];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    sort(v, v + n + 1);
    for (int i = 1; i <= n; i++) 
        cout << v[i] << " ";
    return 0;
}
