#include <stdio.h>

int main() {
	int a[101][101], sum[101][101];
	int i, j, k, l, n;
	long maxSum, partialSum;
	while (scanf("%d", &n) == 1) {
		for (i = 1; i <= n; i++)
			for (j = 1; j <= n; j++)
				scanf("%d", &a[i][j]);
		maxSum = sum[0][0];
		for (i = 0; i <= n; i++)
			sum[i][0] = a[i][0] = sum[0][i] = a[0][i] = 0;
		for (i = 1; i <= n; i++) {
			sum[i][1] = a[i][1];
			sum[1][i] = a[1][i];
		}
		for (i = 1; i <= n; i++)
			for (j = 1; j <= n; j++)
				sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + a[i][j];
		for (i = 1; i <= n; i++)
			for (j = 1; j <= n; j++)
				for (k = 0; k <= i; k++)
					for (l = 0; l <= j; l++) {
						partialSum = sum[i][j] - sum[i - k][j] - sum[i][j - l] + sum[i - k][j - l];
						if (partialSum > maxSum)
							maxSum = partialSum;
					}
		printf("%ld\n", maxSum);
	}
}
