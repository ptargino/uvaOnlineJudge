#include <iostream>

int main() {
	int i, j, c, coin[11] = { 2000, 1000, 400, 200, 100, 40, 20, 10, 4, 2, 1 };
	float n;
	long long *numWays = new long long[6001];
	memset(numWays, 0, 6001);
	numWays[0] = 1;
	for (i = 0; i < 11; i++) {
		c = coin[i];
		for (j = c; j <= 6000; j++)
			numWays[j] += numWays[j - c];
	}

	while (scanf("%f", &n) && n)
		printf("%6.2f%17lld\n", n, numWays[(int) (n * 20 + 0.5)]);
}
