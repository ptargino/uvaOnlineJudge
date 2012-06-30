#include <stdio.h>

int main() {
	bool card[51], discard;
	int n, i, quant;
	while (scanf("%d", &n) && n) {
		for (i = 0; i <= n; i++)
			card[i] = true;
		discard = true;
		quant = n;
		i = 1;
		printf("Discarded cards:");
		while (quant) {
			if (card[i]) {
				if (discard) {
					if (quant > 2)
						printf(" %d,", i);
					else if (quant == 2)
						printf(" %d", i);
					else
						printf("\nRemaining card: %d\n", i);
					card[i] = false;
					quant--;
				}
				discard = !discard;
			}
			i = (i % n) + 1;
		}
	}
}
