#include <stdio.h>

int main() {
	int ans[51], i, n;
	ans[1] = 1;
	for (i = 2; i <= 50; i++)
		ans[i] = ans[i - 1] + ((i + 1) / 2) * 2;
	scanf("%d", &n);
	for (; n; n--) {
		scanf("%d", &i);
		printf("%d\n", ans[i]);
	}
	return 0;
}

