#include <stdio.h>

int main() {
	int brick[9][9];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int j, k;
		//deletei linha de iniciação de valores da matriz (= 0)
		for (j = 0; j < 9; j += 2)
			for (k = 0; k <= j; k += 2)
				scanf("%d", &brick[j][k]);
		for (k = 1; k < 8; k += 2)
			brick[8][k] = (brick[6][k - 1] - brick[8][k - 1] - brick[8][k + 1])
					/ 2;
		for (j = 7; j >= 0; j--)
			for (k = 0; k <= j; k++)
				brick[j][k] = brick[j + 1][k] + brick[j + 1][k + 1];
		for (j = 0; j < 9; j++) {
			printf("%d", brick[j][0]);
			for (k = 1; k <= j; k++)
				printf(" %d", brick[j][k]);
			printf("\n");
		}
	}
	return 0;

}
