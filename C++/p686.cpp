#include <math.h>
#include <iostream>

using namespace std;

bool isPrime(int n) {
	int root = (int) sqrt(n);
	for (int i = 3; i < root; i += 2)
		if (!(n % i))
			return false;
	return true;
}

int main() {
	int const SIZE = 32768;
	int const ROOT = (int) sqrt(SIZE);
	int n, i, j, count;
	bool *prime = new bool[SIZE];
	memset(prime, true, SIZE);
	for (j = 4; j < SIZE; j += 2)
		prime[j] = false;
	for (i = 3; i <= ROOT; i += 2)
		if (isPrime(i))
			for (j = 2 * i; j < SIZE; j += i)
				prime[j] = false;
	while (scanf("%d", &n) && n) {
		count = 0;
		for (i = 2; i <= (n / 2); i++)
			if (prime[i] && prime[n - i])
				count++;
		printf("%d\n", count);
	}
}
