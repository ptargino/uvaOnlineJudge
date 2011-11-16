#include <stdio.h>

const int SIZE = 102;
const char oldColor = '@', neutralColor = '*';
char matrix[SIZE][SIZE];

void floodFill(int i, int j) {
	if (matrix[i][j] != oldColor)
		return;
	matrix[i][j] = neutralColor;
	floodFill(i + 1, j);
	floodFill(i, j + 1);
	floodFill(i + 1, j + 1);
	floodFill(i - 1, j);
	floodFill(i, j - 1);
	floodFill(i - 1, j - 1);
	floodFill(i + 1, j - 1);
	floodFill(i - 1, j + 1);
}

void initialize() {
	int i, j;
	for (i = 0; i < SIZE; i++)
		for (j = 0; j < SIZE; j++)
			matrix[i][j] = neutralColor;
}

int main() {
	int i, j, m, n, count;
	char line[101];
	while (scanf("%d%d", &m, &n) && m) {
		initialize();
		count = 0;
		for (i = 1; i <= m; i++) {
			scanf("%s", line);
			for (j = 1; j <= n; j++)
				matrix[i][j] = line[j - 1];
		}
		for (i = 1; i <= m; i++)
			for (j = 1; j <= n; j++)
				if (matrix[i][j] == oldColor) {
					floodFill(i, j);
					count++;
				}
		printf("%d\n", count);
	}
}
