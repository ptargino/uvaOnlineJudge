#include <stdio.h>

int main() {
	long double *ans = new long double[1000001];
	ans[3] = 0;
	long i, n,t;
	long long e;
	for (i = 4; i <= 1000000; i++) {
		e = (long)(i - 3) + (long)(i % 2 + 1);
		e *= (long)((long)(i - 2) / 2);
		e /= 2;
		ans[i] = ans[i - 1] + e;
	}
	scanf("%ld", &t);
	for (; t; t--) {
		scanf("%ld", &n);
		printf("%.0Lf\n", ans[n]);
	}

}
