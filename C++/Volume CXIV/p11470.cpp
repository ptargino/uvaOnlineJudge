#include <stdio.h>

int main() {
	int square[10][10], n, i, j, s, count = 0;
	while (scanf("%d", &n) && n) {
		count++;
		printf("Case %d:", count);
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
				scanf("%d", &square[i][j]);
		for (i = 0; i < (n + 1) / 2; i++) {
			s = 0;
			for (j = i; j < n - i; j++)
				s += square[i][j];
			if (i != n - i - 1)
				for (j = i; j < n - i; j++)
					s += square[n - i - 1][j];
			for (j = i + 1; j < n - i - 1; j++) {
				s += square[j][i];
				s += square[j][n - i - 1];
			}
			printf(" %d", s);
		}
		printf("\n");
	}
}
