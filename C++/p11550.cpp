#include <stdio.h>

int aux[8][28];

bool isIncidence(int n, int m) {
	int i, j, k, sum;
	int edge[2];
	for (j = 0; j < m; j++) {
		k = 0;
		for (i = 0; i < n; i++)
			if (aux[i][j]) {
				if (k > 1)
					return false;
				edge[k++] = i;
			}
		if (k != 2)
			return false;
		for (k = j + 1; k < m; k++)
			if (aux[edge[0]][k] && aux[edge[1]][k])
				return false;
	}
	return true;
}

int main() {
	int t, n, m, i, j;
	scanf("%d", &t);
	for (; t; t--) {
		scanf("%d%d", &n, &m);
		for (i = 0; i < n; i++)
			for (j = 0; j < m; j++)
				scanf("%d", &aux[i][j]);
		printf(isIncidence(n, m) ? "Yes\n" : "No\n");
	}
}
