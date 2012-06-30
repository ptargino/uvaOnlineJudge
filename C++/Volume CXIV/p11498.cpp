#include <stdio.h>

int main() {
	int k, n, m, x, y, i;
	while (scanf("%d", &k) && k) {
		scanf("%d %d", &n, &m);
		for (i = 0; i < k; i++) {
			scanf("%d%d", &x, &y);
			if (x == n || y == m)
				printf("divisa\n");
			else
				printf("%c%c\n", (y > m ? 'N' : 'S'), (x > n ? 'E' : 'O'));
		}
	}
}
