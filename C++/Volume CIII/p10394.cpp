#include <math.h>
#include <stdio.h>

bool isPrime(int n) {
	int root = (int) sqrt(n);
	for (int i = 3; i < root; i += 2)
		if (!(n % i))
			return false;
	return true;
}

int main() {
	long primeValue[100000] = { 3 }, i, j, LAST_TWIN_PRIME = 18409201;
	int MAX_ROOT = (int) sqrt(LAST_TWIN_PRIME);
	bool *prime = new bool[LAST_TWIN_PRIME];
	
	for (j = 0; j < LAST_TWIN_PRIME; j ++)
		prime[j] = true;
		
	for (i = 3; i <= MAX_ROOT; i += 2)
		if (isPrime(i))
			for (j = 2 * i - 1; j < LAST_TWIN_PRIME; j += i)
				prime[j] = false;

	i = 1;
	for (j = 4; j <= LAST_TWIN_PRIME; j += 6)
		if (prime[j] && prime[j + 2])
			primeValue[i++] = j + 1;
	while (scanf("%d", &i) == 1)
		printf("(%d, %d)\n", primeValue[i - 1], primeValue[i - 1] + 2);
}
