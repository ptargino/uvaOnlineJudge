#include <stdio.h>

int main() {
	int n, i, j, a;
	bool conection[101][101];
	while (scanf("%d", &n) && n)
		if (n < 4 || n % 2)
			printf("Impossible\n");
		else {
			printf("%d\n", 3 * n / 2);
			for (i = 0; i < n; i++)
				for (j = 0; j < n; j++)
					conection[i][j] = false;
			printf("%d %d\n", 1, 2);
			conection[0][1] = conection[1][0] = true;
			a = (n + 1) / 2;
			printf("%d %d\n", 1, a+1);
			conection[0][a] = conection[a][0] = true;
			printf("%d %d\n", 1, n);
			conection[0][n-1] = conection[n-1][0] = true;
			for (i = 1; i < n; i++) {
				a = (i + 1) % n;
				if (!conection[i][a]) {
					printf("%d %d\n", i + 1, a + 1);
					conection[i][a] = conection[a][i] = true;
				}
				a = (i + n / 2) % n;
				if (!conection[i][a]) {
					printf("%d %d\n", i + 1, a + 1);
					conection[i][a] = conection[a][i] = true;
				}
			}

		}
}
