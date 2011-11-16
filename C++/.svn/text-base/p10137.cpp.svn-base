#include <stdio.h>

int main() {
	int n, i, a, b;
	int money[1000];
	long exchange, total;
	double avarage;
	while (scanf("%d", &n) && n) {
		total = 0;
		exchange = 0;
		for (i = 0; i < n; i++) {
			scanf("%d.%d", &a, &b);
			money[i] = a * 100 + b;
			total += money[i];
		}
		avarage = total;
		avarage /= n;
		for (i = 0; i < n; i++)
			if (money[i] < avarage)
				exchange += money[i];
		printf("total -> %ld - exchange -> %ld\n", total, exchange);
		total -= exchange;
		printf("$%ld.%02ld\n", total /100, total % 100);
	}
}
