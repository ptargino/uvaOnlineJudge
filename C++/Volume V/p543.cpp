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
	long const SIZE = 1000000;
	int const ROOT = (int) sqrt(SIZE);
	long n, i, j;
	bool *prime = new bool[SIZE];
	memset(prime, true, SIZE);
	for (i = 3; i <= ROOT; i += 2)
		if (isPrime(i))
			for (j = 2 * i; j < SIZE; j += i)
				prime[j] = false;
	while (scanf("%ld", &n) && n) {
		for (i = 3; i <= (n / 2); i += 2)
			if (prime[i] && prime[n - i])
				break;
		if (i <= (n / 2))
			printf("%ld = %ld + %ld\n", n, i, n - i);
		else
			printf("Goldbach's conjecture is wrong.\n");
	}
}
