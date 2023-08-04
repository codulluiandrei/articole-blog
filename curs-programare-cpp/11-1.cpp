#include <iostream>
using namespace std;
int nrdiv = 0;
void divizori(int n) {
    for (int d = 1; d * d <= n; d++) 
        if (n % d == 0) {
            nrdiv++;
            if (d * d < n) 
                nrdiv++;
        }
}
int main() {
    int n;
    cin >> n;
    divizori(n);
    if (nrdiv == 2) 
        cout << "nr prim";
    else 
        cout << "nu e prim";
    return 0;
}
