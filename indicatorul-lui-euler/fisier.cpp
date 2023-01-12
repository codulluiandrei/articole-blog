#include <iostream>
using namespace std;
int euler[1000001], n;
int phi(int euler[], int n) {
    for (int i = 1; i <= n; i++)
        euler[i] = i;
    for (int i = 2; i <= n; i++)
        if (euler[i] == i)
            for (int j = i; j <= n; j = j + i)
                euler[j] = euler[j] * (i - 1) / i;
    for (int i = 1; i <= n; i++)
        cout << euler[i] << "
";
    return 0;
}
int main() {
    cin >> n;
    phi(euler, n);
    return 0;
}
