#include <stdio.h>

int main() {
	long sum = 0;
	long ans[31];
	int i;
	ans[0] = 1;
	for (i = 1; i <= 30; i++)
		if (i % 2) {
			ans[i] = 0;
		} else {
			sum += 2 * ans[i - 2];
			ans[i] = ans[i - 2] + sum;
		}
	while (scanf("%d", &i) && i >= 0)
		printf("%ld\n", ans[i]);
}
