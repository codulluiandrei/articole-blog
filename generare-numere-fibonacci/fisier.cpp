#include <iostream>
using namespace std;
// afiseaza primele n numere fibonacci
void generare_fibonacci(int n) {
    int a = 1, b = 1;
    cout << a << "\n" << b << "\n";
    for (int i = 1; i <= n; ++i) {
        int c = a + b;
        cout << c << "\n";
        a = b;
        b = c;
    }
}
int main() {
    int n; cin >> n;
    generare_fibonacci(n);
    return 0;
}
