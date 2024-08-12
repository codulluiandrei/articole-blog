#include <iostream>
using namespace std;
int S = 0;
void divizori(int n) {
    for (int d = 1; d <= n; d++) 
        if (n % d == 0)
            S = S + d; // prelucrare divizor d
}
int main() {
    int n;
    cin >> n;
    divizori(n);
    cout << S;
    return 0;
}
