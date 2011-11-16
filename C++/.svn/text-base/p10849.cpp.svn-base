#include <stdio.h>

int main() {
	int n, c, t, x1, y1, x2, y2;
	scanf("%d", &n);
	for (; n; n--) {
		scanf("%d%d", &c, &t);
		for (; c; c--) {
			scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
			if ((x1 + y1 + x2 + y2) % 2 || x1 > t || y1 > t || x2 > t || y2 > t)
				printf("no move\n");
			else if (x1 == x2 && y1 == y2)
				printf("0\n");
			else if (x1 - x2 == y1 - y2 || x1 - x2 == y2 - y1)
				printf("1\n");
			else
				printf("2\n");
		}
	}
}
