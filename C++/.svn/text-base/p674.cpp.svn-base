#include <iostream>

int main() {
	int coin[5] = { 50, 25, 10, 5, 1 };
	long long *numWays = new long long[7490];
	memset(numWays, 0, 7490);
	int i, j, n, c;
	numWays[0] = 1;
	for (i = 0; i < 5; i++) {
		c = coin[i];
		for (j = c; j <= 7489; j++)
			numWays[j] += numWays[j - c];
	}

	while (scanf("%d", &n) == 1)
		printf("%lld\n", numWays[n]);
}
