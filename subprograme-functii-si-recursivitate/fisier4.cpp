#include <iostream>
using namespace std;
int S = 0;
void suma(int a, int b) {
	S = a + b;
}
int main() {
	int a, b;
	cin >> a >> b;
	suma(a, b);
	cout << S;
}
