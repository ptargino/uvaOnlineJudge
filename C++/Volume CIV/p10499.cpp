#include <stdio.h>

int main() {
	long long n;
	while (scanf("%lld", &n) && n >= 0)
		printf("%lld%%\n", n == 1 ? 0 : n * 25);
}
