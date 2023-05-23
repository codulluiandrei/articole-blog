#include <iostream>
using namespace std;
void fact(int n, int &rez) {
    if (n == 0)
        rez = 1;
    else {
        fact(n - 1, rez);
        rez = rez * n;
    }
}
int main() {
    int n, rez;
    cin >> n;
    fact(n, rez);
    cout << rez;
    return 0;
}
