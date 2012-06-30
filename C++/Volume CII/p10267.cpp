#include <stdio.h>
#include <string.h>

char table[251][251];
char name[10001];
int m, n, i, j, x, x2, y, y2;

void fill(int x, int y, char old, char ch) {
	if (old == ch || x < 0 || x >= m || y < 0 || y >= n)
		return;
	if (table[x][y] == old) {
		table[x][y] = ch;
		fill(x + 1, y + 1, old, ch);
		fill(x, y + 1, old, ch);
		fill(x + 1, y, old, ch);
		fill(x + 1, y - 1, old, ch);
		fill(x - 1, y + 1, old, ch);
		fill(x - 1, y, old, ch);
		fill(x, y - 1, old, ch);
		fill(x - 1, y - 1, old, ch);
	}
}

int main() {
	while (true) {
		scanf("%s", name);
		if (strcmp("X", name) == 0) {
			break;
		} else if (strcmp("I", name) == 0) {
			scanf("%d%d", &n, &m);
			for (i = 0; i < m; i++)
				for (j = 0; j < n; j++)
					table[i][j] = 'O';
		} else if (strcmp("C", name) == 0) {
			for (i = 0; i < m; i++)
				for (j = 0; j < n; j++)
					table[i][j] = 'O';
		} else if (strcmp("L", name) == 0) {
			scanf("%d%d%s", &x, &y, name);
			table[y - 1][x - 1] = name[0];
		} else if (strcmp("V", name) == 0) {
			scanf("%d%d%d%s", &x, &y, &y2, name);
			for (i = y; i <= y2; i++)
				table[i - 1][x - 1] = name[0];
			for (i = y2; i <= y; i++)
				table[i - 1][x - 1] = name[0];
		} else if (strcmp("H", name) == 0) {
			scanf("%d%d%d%s", &x, &x2, &y, name);
			for (i = x; i <= x2; i++)
				table[y - 1][i - 1] = name[0];
			for (i = x2; i <= x; i++)
				table[y - 1][i - 1] = name[0];
		} else if (strcmp("K", name) == 0) {
			scanf("%d%d%d%d%s", &x, &y, &x2, &y2, name);
			for (i = x; i <= x2; i++)
				for (j = y; j <= y2; j++)
					table[j - 1][i - 1] = name[0];
		} else if (strcmp("F", name) == 0) {
			scanf("%d%d%s", &x, &y, name);
			fill(y - 1, x - 1, table[y - 1][x - 1], name[0]);
		} else if (strcmp("S", name) == 0) {
			scanf("%s", name);
			puts(name);
			for (i = 0; i < m; i++) {
				table[i][n] = '\0';
				puts(table[i]);
			}
		} else {
			gets(name);
		}
	}
}
