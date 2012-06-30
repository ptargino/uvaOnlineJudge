#include <stdio.h>

int main() {
	long long male[150], total[150];
	int n;
	male[0] = 0, total[0] = 1;
	for (n = 1; n < 150; n++) {
		male[n] = total[n - 1];
		total[n] = male[n - 1] + total[n - 1] + 1;
	}
	while (scanf("%d", &n) && n != -1)
		printf("%lld %lld\n", male[n], total[n]);
}
