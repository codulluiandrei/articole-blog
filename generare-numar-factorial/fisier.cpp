#include <iostream>
using namespace std;
int main() {
    int n, S = 1; cin >> n;
    for (int i = 1; i <= n; ++i) 
        S = S * i;
    cout << S;
    return 0;
}
