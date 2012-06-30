#include <stdio.h>

int main() {
	int i, n, numOnes;
	while (scanf("%d", &i) == 1) {
		n = 1;
		numOnes = 1;
		while (n) {
			if (n < i) {
				n = n * 10 + 1;
				numOnes++;
			}
			n %= i;
		}
		printf("%d\n", numOnes);
	}

}
