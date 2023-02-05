#include <iostream>
using namespace std;
int cmmdc(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    } return a;
}
int cmmmc(int a, int b) {
    int d = cmmdc(a, b);
    return (a * b) / d;
}
int main() {
    int a, b;
    cin >> a >> b;
    cout << cmmdc(a, b) << " " << cmmmc(a, b);
    return 0;
}
