#include <stdio.h>

long path[10][100];

inline int min(int a, int b){
	return a < b ? a : b;
}

int minIndex(int i, int j, int k) {
	return (path[i][k] == path[j][k] ? min(i, j) : (path[i][k] < path[j][k]) ? i : j);
}

int main() {
	int m, n, i, j, k;
	long minPath;
	while (scanf("%ld%ld", &m, &n) == 2) {
		for (i = 0; i < m; i++)
			for (j = 0; j < n; j++)
				scanf("%ld", &path[i][j]);
		for (j = n - 2; j >= 0; j--)
			for (i = 0; i < m; i++)
				path[i][j] += min(min(path[i][j + 1], path[(i + 1) % m][j + 1]), path[(i - 1 + m) % m][j + 1]);
		k = 0;
		for (i = 0; i < m; i++)
			if (path[i][0] < path[k][0])
				k = i;
		printf("%ld", k + 1);
		minPath = path[k][0];
		for (j = 1; j < n; j++) {
			k = minIndex((k - 1 + m) % m, minIndex((k + 1) % m, k, j), j);
			printf(" %ld", k + 1);
		}
		printf("\n%ld\n", minPath);
	}
}
