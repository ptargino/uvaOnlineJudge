#include <math.h>
#include <iostream>

using namespace std;

bool isPrime(long int n) {
	int root = (int) sqrt(n);
	for (int i = 3; i < root; i += 2)
		if (!(n % i))
			return false;
	return true;
}

int sumDigits(long n) {
	int sum = 0;
	while (n) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main() {
	long int n, root, i, j;
	const long SIZE = 100000;
	int MAX_ROOT = (int) sqrt(SIZE);
	bool *prime = new bool[SIZE];
	memset(prime, true, SIZE);
	for (i = 3; i <= MAX_ROOT; i += 2)
		if (isPrime(i))
			for (j = 2 * i; j < SIZE; j += i)
				prime[j] = false;
	int sumA, sumB;
	int t;
	scanf("%d", &t);
	for (; t; t--) {
		scanf("%ld", &n);
		n++;
		while (true) {
			long num = n;
			sumA = 0;
			sumB = sumDigits(n);
			while (num % 2 == 0) {
				sumA += 2;
				num /= 2;
			}
			i = 3;
			while (i <= num && num != 1) {
				if (prime[i])
					while (num % i == 0) {
						sumA += sumDigits(i);
						num /= i;
					}
				i += 2;
			}
			printf("%ld\n", n);
			if (sumA == sumB) {
				printf("%ld\n", n);
				break;
			} else {
				n++;
			}
		}
	}
}
