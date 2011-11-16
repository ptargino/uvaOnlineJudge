#include <stdio.h>
#include <algorithm>

using namespace std;

struct table {
	int index;
	int size;
};

bool isLess(table a, table b) {
	return a.size > b.size;
}

int main() {
	int m, n, i, j;
	int team[71], size[71], a[71][100];
	table table[51];
	while (scanf("%d%d", &m, &n) && m && n) {
		for (i = 0; i < m; i++) {
			scanf("%d", &team[i]);
			size[i] = 0;
		}
		for (i = 0; i < n; i++) {
			scanf("%d", &table[i].size);
			table[i].index = i + 1;
		}
		//sort(table, table + n, isLess);
		bool hasSolution = true;
		for (i = 0; i < m; i++) {
			j = 0;
			while (team[i] && j < n) {
				if (table[j].size) {
					table[j].size--;
					team[i]--;
					a[i][size[i]++] = table[j].index;
				}
				j++;
			}
			if (team[i]) {
				hasSolution = false;
				break;
			}
		}
		if (hasSolution) {
			printf("1\n");
			for (i = 0; i < m; i++) {
				for (j = 0; j < size[i]; j++)
					printf("%d ", a[i][j]);
				printf("\n");
			}
		} else {
			printf("0\n");
		}
	}
}
