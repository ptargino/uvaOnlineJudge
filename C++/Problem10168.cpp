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
	long i, j, n;
	const long SIZE = 10000001;
	int MAX_ROOT = (int) sqrt(SIZE);
	bool *prime = new bool[SIZE];
	memset(prime, true, SIZE);
	prime[1] = false;
	for (j = 4; j < SIZE; j += 2)
		prime[j] = false;
	for (i = 3; i <= MAX_ROOT; i += 2)
		if (isPrime(i))
			for (j = 2 * i; j < SIZE; j += i)
				prime[j] = false;
	while (scanf("%ld", &n)==1) {
		if (n < 8)
			printf("Impossible.\n");
		else {
			if (n % 2) {
				printf("2 3 ");
				n -= 5;
			} else {
				printf("2 2 ");
				n -= 4;
			}
			for (i = 2; i < n; i++)
				if (prime[i] && prime[n - i]){
					printf("%ld %ld\n", i, n - i);
					break;
				}
		}
	}
}
