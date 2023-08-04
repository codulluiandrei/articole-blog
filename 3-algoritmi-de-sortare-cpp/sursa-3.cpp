#include <bits/stdc++.h>
using namespace std;
int n, v[1001];
int partition(int* v, int inc, int sf) {
    int pivot = v[inc];
    int counter = 0;
    for (int i = inc + 1; i <= sf; i++)
        if (v[i] <= pivot)
            counter++;
    int poz = inc + counter;
    swap(v[poz], v[inc]);
    int i = inc, j = sf;
    while (i < poz && j > poz) {
        while (v[i] <= pivot)
            i++;
        while (v[j] > pivot)
            j--;
        if (i < poz && j > poz)
            swap(v[i++], v[j--]);
    } return poz;
}
void sortare_quick(int* v, int inc, int sf) {
    if (inc >= sf)
        return;
    int part = partition(v, inc, sf);
    sortare_quick(v, inc, part - 1);
    sortare_quick(v, part + 1, sf);
}
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    sortare_quick(v, 1, n);
    for (int i = 1; i <= n; i++) 
        cout << v[i] << " ";
    return 0;
}
