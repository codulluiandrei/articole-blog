#include <iostream>
using namespace std;
int main() {
    int a; cin >> a;
    if (a % 9 == 0) 
        cout << "Cifra de control este 9";
    else
        cout << "Cifra de control este " << a % 9;
    return 0;
}
