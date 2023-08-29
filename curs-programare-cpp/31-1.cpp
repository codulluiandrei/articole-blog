#include <iostream>
#include <queue>
using namespace std;

int main() {
    // declararea cozii, queue<tipData> numeVar;
    queue<int> coada;

    // inserarea elementelor
    coada.push(7);
    coada.push(14);
    coada.push(21);
    coada.push(28);

    // dimensiunea cozii
    cout << coada.empty(); // true sau false
    cout << coada.size();

    // primul element al cozii
    cout << coada.front();

    // eliminarea primului element
    coada.pop();
  
    return 0;
}
