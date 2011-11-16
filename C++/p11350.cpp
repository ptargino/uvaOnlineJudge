#include <stdio.h>

int main() {
	long long nCenter, dCenter, nLeft, dLeft, nRight, dRight, t, i;
	char line[91];
	scanf("%lld", &t);
	gets(line);
	for (; t; t--) {
		gets(line);
		nLeft = 0, dLeft = 1, nRight = 1, dRight = 0;
		nCenter = nLeft + nRight;
		dCenter = dLeft + dRight;
		for (i = 0; line[i] != '\0'; i++) {
			if (line[i] == 'L')
				nRight = nCenter, dRight = dCenter;
			else
				nLeft = nCenter, dLeft = dCenter;
			nCenter = nLeft + nRight;
			dCenter = dLeft + dRight;
		}
		printf("%lld/%lld\n", nCenter, dCenter);
	}
}
