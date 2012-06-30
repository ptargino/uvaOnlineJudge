#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int n) {
	int root = (int) sqrt(n);
	for (int i = 3; i < root; i += 2)
		if (!(n % i))
			return false;
	return true;
}

int power(int b, int p, int m) {
	if (p == 0)
		return 1;
	long long ans = power(b % m, p / 2, m) % m;
	return (p % 2 == 1 ? ans * ans * (b % m) : ans * ans) % m;
}

bool isCarmichael(int n) {
	for (int i = 2; i < n; i++)
		if (power(i, n, n) != i)
			return false;
	return true;
}

int main() {
	bool *carmichael = new bool[65001];
	int i;
	for (i = 2; i < 65001; i++)
		carmichael[i] = !isPrime(i) && isCarmichael(i);
	while (scanf("%d", &i) && i)
		printf((carmichael[i] ? "The number %d is a Carmichael number.\n"
				: "%d is normal.\n"), i);
}
