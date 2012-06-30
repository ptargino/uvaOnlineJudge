#include <stdio.h>

int main() {
	unsigned long long int N, B;
	while (scanf("%llu", &N) == 1 && N) {
		printf("%llu\n", N);
		B = N + (N / 9);
		if (N % 9)
			printf("%llu\n", B);
		else
			printf("%llu %llu\n", B - 1, B);
	}
}
