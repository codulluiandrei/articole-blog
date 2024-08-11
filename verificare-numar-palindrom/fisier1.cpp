#include <iostream>
using namespace std;
int oglindit(int n) {
    int rez = 0;
    while (n > 0) {
        rez = rez * 10 + n % 10;
        n = n / 10;
    } return rez;
}
int main() {
    int n;
    cin >> n;
    cout << oglindit(n);
    return 0;
}
