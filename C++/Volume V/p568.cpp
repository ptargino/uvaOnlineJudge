#include <iostream>

using namespace std;

int main() {
	long fact[10001];
	int i, n;
	fact[0] = 1;
	for (i = 1; i <= 10001; i++) {
		fact[i] = i * fact[i - 1];
		while (!(fact[i] % 10))
			fact[i] /= 10;
		fact[i] %= 100000;
	}

	while (cin >> n) {
		printf("%5d -> %d\n", n, fact[n] % 10);
	}
}
