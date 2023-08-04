#include <bits/stdc++.h>
using namespace std;
int n, v[1001];
void sortare_selectie(int* v) {
    for (int i = 1; i <= n; i++)
        for (int j = i + 1; j <= n; j++)
            if (v[i] > v[j])
                swap(v[i], v[j]);
}
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    sortare_selectie(v);
    for (int i = 1; i <= n; i++) 
        cout << v[i] << " ";
    return 0;
}
