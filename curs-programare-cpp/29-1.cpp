#include <iostream>
using namespace std;

int main() {
    // alocarea memoriei
    int *pointer = new int;
    int *pointer_vec = new int[7];
  
    // prelucrarea variabilelor
    *pointer = 7;
    cout << *pointer; // 7

    for (int i = 0; i < 7; i++)
        cin >> pointer_vec[i];
    for (int i = 0; i < 7; i++)
        cout << pointer_vec[i];
    
    // eliberarea memoriei
    delete pointer;
    delete[] pointer_vec;
    
    return 0;
}
