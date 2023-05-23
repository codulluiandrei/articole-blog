#include <iostream>
using namespace std;
int S = 0;
int fact(int n) {
	if (n == 0)
        	return 1;
	else
        	return fact(n - 1) * n;
}
int main() {
	int n;
	cin >> n;
	cout << fact(n);
}
