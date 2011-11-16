#include <stdio.h>

int main() {
	int t, n, m;
	scanf("%d", &t);
	for (; t; t--) {
		scanf("%d%d", &n, &m);
		printf("%ld\n", (n / 3) * (m / 3));
	}
}
