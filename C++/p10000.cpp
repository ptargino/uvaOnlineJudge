#include <stdio.h>

const int SIZE = 101;

int path[SIZE][SIZE];

void initialize(int size) {
	for (int i = 0; i <= size; i++)
		for (int j = 0; j <= size; j++)
			path[i][j] = 0;
}

int max(int a, int b) {
	return a > b ? a : b;
}

void maxFlow(int size) {
	for (int k = 0; k <= size; k++)
		for (int i = 0; i <= size; i++)
			for (int j = 0; j <= size; j++)
				if (path[i][k] && path[k][j])
					path[i][j] = max(path[i][j], path[i][k] + path[k][j]);
}

int main() {
	int n, s, p, q, i, max, index, numCase = 1;
	while (scanf("%d", &n) && n) {
		initialize(n);
		scanf("%d", &s);
		while (scanf("%d%d", &p, &q) == 2 && p)
			path[p][q] = 1;
		maxFlow(n);
		max = 0, index = 0;
		for (i = 0; i <= n; i++)
			if (path[s][i] > max) {
				max = path[s][i];
				index = i;
			}
		printf("Case %d: The longest path from %d has length %d, finishing at %d.\n\n", numCase++, s, max, index);
	}
}
