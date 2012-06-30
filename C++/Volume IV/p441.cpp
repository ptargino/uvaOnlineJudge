#include <stdio.h>

int output[13], input[13], n;

void combination(int ouputSize, int inputStart, int inputEnd, int combinationSize) {
	if (combinationSize == 0) {
		printf("%d", output[0]);
		for (int i = 1; i < 6; i++)
			printf(" %d", output[i]);
		printf("\n");
	} else {
		output[ouputSize] = input[inputStart];
		combination(ouputSize + 1, inputStart + 1, inputEnd, combinationSize - 1);
		for (int i = inputStart + 1; i <= (inputEnd - combinationSize); i++)
			if (input[i] != input[i - 1]) {
				output[ouputSize] = input[i];
				combination(ouputSize + 1, i + 1, inputEnd, combinationSize - 1);
			}
	}
}

int main() {
	scanf("%d", &n);
	while (n) {
		for (int i = 0; i < n; i++)
			scanf("%d", &input[i]);
		combination(0, 0, n, 6);
		scanf("%d", &n);
		if (n)
			printf("\n");
	}
}
