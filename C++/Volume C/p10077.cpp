#include <stdio.h>

int main() {
	int m, n, nCenter, dCenter, nLeft, dLeft, nRight, dRight;
	while (scanf("%d%d", &m, &n) == 2 && (m != 1 || n != 1)) {
		nLeft = 0, dLeft = 1, nRight = 1, dRight = 0;
		nCenter = nLeft + nRight;
		dCenter = dLeft + dRight;
		while (m * dCenter != n * nCenter) {
			if (m * dCenter < n * nCenter) {
				putchar('L');
				nRight = nCenter;
				dRight = dCenter;
			} else {
				putchar('R');
				nLeft = nCenter;
				dLeft = dCenter;
			}
			nCenter = nLeft + nRight;
			dCenter = dLeft + dRight;
		}
		putchar('\n');
	}
}
