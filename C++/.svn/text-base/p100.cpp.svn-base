#include <stdio.h>
#include <string.h>

int main() {
	long a, b, n, i, numCycles, maxCycles, min, max;
	long *cycles = new long[1000001];
	memset(cycles, 0, 1000001);
	while (scanf("%ld%ld", &a, &b) == 2) {
		min = (a < b) ? a : b;
		max = (a > b) ? a : b;
		maxCycles = 0;
		for (i = min; i <= max; i++) {
			if (cycles[i] == 0) {
				n = i;
				numCycles = 1;
				while (n != 1) {
					if (n < 1000001 && cycles[n]) {
						numCycles += (cycles[n] - 1);
						break;
					}
					n = (n % 2) ? 3 * n + 1 : n / 2;
					numCycles++;
				}
				cycles[i] = numCycles;
			}
			if (cycles[i] > maxCycles)
				maxCycles = cycles[i];
		}
		printf("%ld %ld %ld\n", a, b, maxCycles);
	}
}
