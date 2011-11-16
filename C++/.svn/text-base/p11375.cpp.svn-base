#include <iostream>

int main() {
	const int size = 2001;
	int i, j, c, coin[10] = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6 };
	int n;
	long long *numWays = new long long[size];
	memset(numWays, 0, size);
	for (i = 0; i < 10; i++)
		numWays[coin[i]]++;
	for (i = 0; i < 10; i++) {
		c = coin[i];
		for (j = c; j < size; j++)
			numWays[j] += numWays[j - c];
	}
	for (j = 1; j < size; j++)
		numWays[j] += numWays[j - 1];
	while (scanf("%d", &n) == 1)
		printf("%lld\n", numWays[n]);
}
