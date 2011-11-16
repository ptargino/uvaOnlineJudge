#include <stdio.h>

int main() {
	int bets, valor;
	long result, acumula;
	while (scanf("%d", &bets) && bets) {
		result = -1, acumula = 0;
		for (; bets; bets--) {
			scanf("%d", &valor);
			acumula += valor;
			if (acumula < 0)
				acumula = 0;
			if (result < acumula)
				result = acumula;
		}
		if (result > 0)
			printf("The maximum winning streak is %d.\n", result);
		else
			printf("Losing streak.\n");
	}
}
