#include <stdio.h>

int value[1001], weigth[1001], maxValue[1001][31];

int max(int a, int b) {
	return a > b ? a : b;
}

void Knapsack(int n) {
	int i, j;
	for (i = 0; i <= 30; i++)
		maxValue[0][i] = 0;
	for (i = 0; i <= n; i++)
		maxValue[i][0] = 0;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= 30; j++)
			if (weigth[i] <= j)
				maxValue[i][j] = max(value[i] + maxValue[i - 1][j - weigth[i]], maxValue[i - 1][j]);
			else
				maxValue[i][j] = maxValue[i - 1][j];
}

int main() {
	int n, numObjects, numPeople, i, peopleWeight;
	long total;
	scanf("%d", &n);
	for (; n; n--) {
		scanf("%d", &numObjects);
		for (i = 1; i <= numObjects; i++)
			scanf("%d%d", &value[i], &weigth[i]);
		Knapsack(numObjects);
		total = 0;
		scanf("%d", &numPeople);
		for (i = 0; i < numPeople; i++) {
			scanf("%d", &peopleWeight);
			total += maxValue[numObjects][peopleWeight];
		}
		printf("%ld\n", total);
	}
}
