#include <stdio.h>

int path[23][23];

int min(int a, int b) {
	return a < b ? a : b;
}

void maxFlow(int size) {
	for (int k = 1; k <= size; k++)
		for (int i = 1; i <= size; i++)
			for (int j = 1; j <= size; j++)
				path[i][j] = min(path[i][j], path[i][k] + path[k][j]);
}

int main() {
	char name[23][11];
	int n, m, i, j, k, a, b, numCase = 1;
	long cost, minCost;
	while (scanf("%d%d", &n, &m) && n) {
		for (i = 1; i <= n; i++)
			for (j = 1; j <= n; j++)
				path[i][j] = 65535;
		for (i = 1; i <= n; i++) {
			scanf("%s", name[i]);
			path[i][i] = 0;
		}
		for (i = 1; i <= m; i++) {
			scanf("%d%d%d", &a, &b, &cost);
			path[a][b] = path[b][a] = cost;
		}
		maxFlow(n);
		k = 0;
		minCost = 1000000000;
		for (i = 1; i <= n; i++) {
			cost = 0;
			for (j = 1; j <= n; j++)
				cost += path[i][j];
			if (cost < minCost) {
				minCost = cost;
				k = i;
			}
		}
		printf("Case #%ld : %s\n", numCase++, name[k]);
	}
}
