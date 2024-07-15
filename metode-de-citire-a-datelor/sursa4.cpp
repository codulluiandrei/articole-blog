#include <fstream>
using namespace std;
ifstream in("date.in");
ofstream out("date.out");
#define cin in
#define cout out
int main() {
    int v[1001], n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i]; // prelucrare elemente
    for (int i = 1; i <= n; i++)
        cout << v[i] << " ";
    return 0;
}