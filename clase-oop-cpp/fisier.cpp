#include <bits/stdc++.h>
using namespace std;
class Persoana {
  private:
    int varsta;
    string nume;
  public:
    void setter(int v1, string v2) {
      varsta = v1;
      nume = v2;
    }
    void getter() {
      cout << nume << " " << varsta;
    }
};
int main() {
  Persoana admin;
  admin.setter(21, "Andrei");
  admin.getter();
  return 0;
}
