#include <stdio.h>

int main() {
	const int SIZE = 66;
	int ans[SIZE][SIZE], n, s;
	for (s = 0; s < SIZE; s++)
		ans[0][s] = 0;
	ans[0][0] = ans[1][0] = 1;
	for (n = 2; n < SIZE; n++)
		ans[n][0] = ans[n - 1][0] + ans[n - 2][0];
	for (n = 1; n < SIZE; n++)
		for (s = 1; s < SIZE; s++)
			ans[n][s] = ans[n - 1][s - 1] + ans[n - 1][s];
//	int a, b;
//	while (scanf("%d%d", &a, &b) == 2 && a > 0)
//		printf("%d\n", ans[a][b]);
	for (int i = 1; i <= 6; i++){
		for (int j = 0; j <= 6; j++)
			printf("%d ", ans[i][j]);
		printf("\n");
	}

}
