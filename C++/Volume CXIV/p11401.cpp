#include <stdio.h>

int main() {
	long double *ans = new long double[1000001];
	ans[3] = 0;
	long i, n;
	long long e;
	for (i = 4; i <= 1000000; i++) {
		e = (long)(i - 3) + (long)(i % 2 + 1);
		e *= (long)((long)(i - 2) / 2);
		e /= 2;
		ans[i] = ans[i - 1] + e;
	}
	while (scanf("%ld", &n) && n >= 3) {
		printf("%.0Lf\n", ans[n]);
	}

}
