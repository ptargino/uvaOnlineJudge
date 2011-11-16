#include <stdio.h>

int main() {
	int n, h, w, i, numBeds, price, canStay;
	long b, minCost, cost;
	while (scanf("%d%ld%d%d", &n, &b, &h, &w) == 4) {
		minCost = b + 1;
		for (; h; h--) {
			canStay = 0;
			scanf("%d", &price);
			for (i = 0; i < w; i++) {
				scanf("%d", &numBeds);
				if (numBeds >= n)
					canStay = 1;
			}
			cost = price * n;
			if (canStay && cost < minCost)
				minCost = cost;
		}
		printf((minCost > b) ? "stay home\n" : "%ld\n", minCost);
	}
	return 0;
}
