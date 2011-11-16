#include <stdio.h>

char map[50][50];
int count;
void back(int x, int y) {
	if (map[x][y] == '#')
		return;
	if (map[x][y] == 'G')
		count++;
	map[x][y] = '#';
	if (map[x + 1][y] == 'T' || map[x - 1][y] == 'T' || map[x][y - 1] == 'T' || map[x][y + 1] == 'T')
		return;
	back(x + 1, y);
	back(x, y + 1);
	back(x - 1, y);
	back(x, y - 1);
}

int main() {
	int n, m, i, j, a, b;
	char line[51];
	while (scanf("%d%d", &m, &n) == 2) {
		for (i = 0; i < n; i++) {
			scanf("%s", line);
			for (j = 0; line[j] != '\0'; j++)
				if ((map[i][j] = line[j]) == 'P')
					a = i, b = j;
		}
		count = 0;
		back(a, b);
		printf("%d\n", count);
	}
}
