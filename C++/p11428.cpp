#include <stdio.h>

int main() {
	int i, j, n;
	long ans[61][61];
	for (i = 0; i < 61; i++)
		for (j = 0; j <= i; j++)
			ans[i][j] = i * i * i - j * j * j;
	while (scanf("%d", &n) && n) {
		for (i = 0; i < 61; i++) {
			for (j = 0; j <= i && ans[i][j] > n; j++);
			if (ans[i][j] == n)
				break;
		}
		if (ans[i][j] == n)
			printf("%d %d\n", i, j);
		else
			printf("No solution\n");
	}

}
