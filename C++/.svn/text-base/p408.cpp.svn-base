#include <stdio.h>

long gcd(long a, long b) {
	return (a % b == 0) ? b : gcd(b, a % b);
}

int main() {
	long step, mod;
	while (scanf("%ld%ld", &step, &mod) == 2)
		printf("%10ld%10ld    %s\n\n", step, mod, (gcd(step, mod) == 1) ? "Good Choice" : "Bad Choice");
}
