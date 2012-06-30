#include <stdio.h>

long long power(long long b, long long p, long long m) {
	if (p == 0)
		return 1;
	long long ans = power(b % m, p / 2, m) % m;
	return (p % 2 == 1 ? ans * ans * (b % m) : ans * ans) % m;
}

int main() {
	long long b, p, m;
	while (scanf("%lld%lld%lld", &b, &p, &m) == 3)
		printf("%lld\n", power(b, p, m) % m);
}
