#include <fstream>
using namespace std;
ifstream in("date.in");
ofstream out("date.out");
int main() {
    int v[1001], n;
    in >> n;
    for (int i = 1; i <= n; i++)
        in >> v[i]; // prelucrare elemente
    for (int i = 1; i <= n; i++)
        out << v[i] << " ";
    return 0;
}