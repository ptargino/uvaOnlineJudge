#include <stdio.h>

int main() {
	int quant;
	unsigned long n;
	while (scanf("%lu", &n) == 1) {
		quant = 0;
		while (n) {
			if (n % 2) {
				if (n < 4 || (n + 1) % 4)
					n--;
				else
					n++;
			} else
				n >>= 1;
			quant++;
		}
		printf("%d\n", quant);
	}
}
