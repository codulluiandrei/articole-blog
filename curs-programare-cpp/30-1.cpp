#include <iostream>
#include <stack>
using namespace std;

int main() {
    // declararea stivei, stack<tipData> numeVar;
    stack<int> stiva;

    // inserarea elementelor
    stiva.push(7);
    stiva.push(14);
    stiva.push(21);
    stiva.push(28);

    // dimensiunea stivei
    cout << stiva.empty(); // true sau false
    cout << stiva.size();

    // varful stivei
    cout << stiva.top();

    // eliminarea varfului
    stiva.pop();
  
    return 0;
}
