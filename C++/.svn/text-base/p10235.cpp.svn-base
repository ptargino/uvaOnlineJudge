#include <math.h>
#include <iostream>

using namespace std;

bool isPrime(long n) {
	if (n % 2 == 0)
		return (n == 2);
	int root = (int) sqrt(n);
	for (int i = 3; i <= root; i += 2)
		if (!(n % i))
			return false;
	return true;
}

long reverse(long n) {
	long ans = 0;
	while (n) {
		ans = 10 * ans + (n % 10);
		n /= 10;
	}
	return ans;
}

bool isEmirp(long n) {
	long rev = reverse(n);
	return n != rev && isPrime(rev);
}

int main() {
	long n;
	while (scanf("%ld", &n) == 1)
		if (isPrime(n))
			if (isEmirp(n))
				printf("%ld is emirp.\n", n);
			else
				printf("%ld is prime.\n", n);
		else
			printf("%ld is not prime.\n", n);
}
