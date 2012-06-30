#include <stdio.h>

int main() {
	int ans[201], n;
	for (int i = 0; i < 201; i++) {
		ans[i] = i;
		n = i;
		while (n >= 3) {
			ans[i] += (n / 3);
			n = (n / 3) + n % 3;
		}
		if (n == 2)
			ans[i]++;
	}
	while (scanf("%d", &n) == 1)
		printf("%d\n", ans[n]);
}
