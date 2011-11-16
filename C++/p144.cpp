#include <stdio.h>

int main() {
	int money[26], n, k, i, quant, coin, amount;
	while (scanf("%d%d", &n, &k) && n) {
		for (i = 1; i <= n; i++)
			money[i] = 0;
		quant = n, coin = 1, amount = 0;
		for (i = 1; quant; i = i % n + 1) {
			if (money[i] == 40)
				continue;
			if (!amount) {
				amount += coin;
				coin = coin % k + 1;
			}
			money[i] += amount;
			amount = 0;
			if (money[i] >= 40) {
				printf("%3d", i);
				quant--;
				amount = money[i] - 40;
				money[i] = 40;
			}
		}
		printf("\n");
	}
}
