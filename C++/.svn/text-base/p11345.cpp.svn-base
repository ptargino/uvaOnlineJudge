#include <stdio.h>

int main() {
	int x1, y1, x2, y2, maxX1, maxY1, minX2, minY2, n, m, i;
	long ans;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		maxX1 = maxY1 = -10000;
		minX2 = minY2 = 10000;
		scanf("%d", &m);
		for (; m; m--) {
			scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
			if (x1 > maxX1)
				maxX1 = x1;
			if (y1 > maxY1)
				maxY1 = y1;
			if (x2 < minX2)
				minX2 = x2;
			if (y2 < minY2)
				minY2 = y2;
		}
		ans = ((minX2 - maxX1) < 0 || (minY2 - maxY1) < 0) ? 0 : (minX2 - maxX1) * (minY2 - maxY1);
		printf("Case %d: %ld\n", i, ans);
	}
}
