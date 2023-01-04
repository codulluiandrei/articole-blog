#include <iostream>
using namespace std;
int main() {
    bool a = true, b = false;
    int i = 1, j = 5;
    do {
        cout << i << " ";
        i++;
        if (i == 6) {
            b = true;
        }
    } while (b != true);
    cout << "\n";
    do {
        cout << j << " ";
        j--;
        if (j == 0) {
            a = false;
        }
    } while (a != false);
    return 0;
}
