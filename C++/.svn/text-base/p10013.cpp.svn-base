#include <stdio.h>

int main() {
	short int *num = new short int[1000001], a, b;
	long int n, m, i;
	scanf("%ld", &n);
	for (; n; n--) {
		scanf("%ld", &m);
		for (i = 0; i < m; i++) {
			scanf("%hd%hd", &a, &b);
			num[i] = a + b;
		}
		for (i = m - 1; i; i--) {
			num[i - 1] += num[i] / 10;
			num[i] %= 10;
		}
		for (i = 0; i < m; i++)
			printf("%hd", num[i]);
		putchar('\n');
		if (n > 1)
			putchar('\n');
	}
}
