#include <iostream>

using namespace std;

unsigned long int numCycles(unsigned long int n) {
	if (n == 1)
		return 0;
	return 1 + numCycles(n % 2 != 0 ? 3 * n + 1 : n / 2);
}

int main() {
	unsigned long int a, b, n, i, cycles, maxCycles, min, max, iMax, one = 1;
	while (scanf("%lu%lu", &a, &b) == 2 && (a || b)) {
		min = (a < b) ? a : b;
		max = (a > b) ? a : b;
		maxCycles = 0;
		iMax = min;
		if (min <= one)
			maxCycles = 3;
		for (i = min; i <= max; i++) {
			cycles = numCycles(i);
			if (cycles > maxCycles) {
				maxCycles = cycles;
				iMax = i;
			}
		}
		printf(
				"Between %lu and %lu, %lu generates the longest sequence of %lu values.\n",
				min, max, iMax, maxCycles);
	}
}

