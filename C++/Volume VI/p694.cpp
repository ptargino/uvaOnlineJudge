#include <iostream>

using namespace std;

int main() {
	long int a, l, n, numCase = 1, numCycles;
	while (scanf("%ld%ld", &a, &l) == 2 && a >= 0 && l >= 0) {
		n = a;
		numCycles = 1;
		while (n != 1) {
			if (n % 2 == 1 && n > (l - 1) / 3)
				break;
			n = n % 2 != 0 ? 3 * n + 1 : n / 2;
			numCycles++;
		}
		printf("Case %ld: A = %ld, limit = %ld, number of terms = %ld\n",
				numCase++, a, l, numCycles);
	}
}

