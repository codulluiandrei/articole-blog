#include <iostream>
using namespace std;
bool verifpal(int a) {
    int copie = a, oglinda = 0;
    while (a > 0) {
        oglinda = oglinda * 10 + a % 10;
        a = a / 10;
    } if (copie == oglinda)
        return true;
    return false;
}
int main() {
    int a;
    cin >> a;
    if (verifpal(a))
        cout << "nr este palindrom";
    else
        cout << "nr nu este palindrom";
    return 0;
}
