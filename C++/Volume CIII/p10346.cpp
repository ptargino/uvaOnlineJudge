#include <stdio.h>

int main() {
	int n, k, total;
	while (scanf("%d%d", &n, &k) == 2) {
		total = n + ((n - 1) / (k - 1));
		printf("%d\n", total);
	}
	return 0;
}
